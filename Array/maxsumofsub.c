/**
 * @Task=  find the sum of contiguous subarray within a 
 * one-dimensional array of numbers that has the largest sum.
 * 
 * @by= Priyanshu Sahu
 * 
 * @Logic= 
 * We will look for all positive contiguous segments array (max_ending_here)
 * and  keep track of maximum sum contiguous segment among 
 * all positive segments(max_so_far). Each time we get a positive-sum 
 * compare it with max_so_far and update max_so_far if it 
 * is greater than max_so_far.
 */

#include <stdio.h>

/* Utility function */

int min(int arr[], int n)
{
    int i, min= arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]<min)
            min= arr[i];
    }
    return min;
}

int maxsumofsub(int arr[], int n)
{
    int minimum= min(arr, n);
    int max_so_far= minimum; int max_ending_here= 0;
    for (int i = 0; i < n; i++)
    {
        max_ending_here += arr[i];
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; /* New Max so far */
 
        if (max_ending_here < 0) 
            max_ending_here = 0; /* To reduce the redundancy we
                                 deny this set of sum(negetive) with 0 */
    }
    return max_so_far;
}
 
/* Driver program */
int main()
{
    int arr[] = {-7, -2, -5};      /* {-7, -1, -5}; */
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_sum = maxsumofsub(arr, n);
    printf("%d", max_sum);
    return 0;
}

/* Time complexity= O(n) */