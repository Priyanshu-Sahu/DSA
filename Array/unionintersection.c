/**
 * @Task= To find the union and intersection of  Two sorted Arrays
 * 
 * @by= Priyanshu Sahu
 * 
 * @Logic= Methamatical Logic 
 * Sorted Union Array 
 * 1) Use two index variables i and j, initial values i = 0, j = 0 
 * 2) If arr1[i] is smaller than arr2[j] then print arr1[i] and increment i. 
 * 3) If arr1[i] is greater than arr2[j] then print arr2[j] and increment j. 
 * 4) If both are same then print any of them and increment both i and j. 
 * 5) Print remaining elements of the larger array 
 * 
 * Sorted Intersection of array
 * 1) Use two index variables i and j, initial values i = 0, j = 0 
 * 2) If arr1[i] is smaller than arr2[j] then print arr1[i] and increment i. 
 * 3) If arr1[i] is greater than arr2[j] then print arr2[j] and increment j. 
 * 4) If both are same then print any of them and increment both i and j. 
 */

#include <stdio.h>

void printUnion(int arr1[], int m, int arr2[], int n)
{
    int i,j;
    i=0;j=0;
    while (i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            printf("%d ", arr2[j]);
            j++;
        }
        else
        {
            printf("%d ",arr1[i]);
            i++;j++;
        }
    }
    
    /* Printing remaining elements in arr1 and arr2 */
    while (i < m)
        printf("%d ", arr1[i++]);
    
    while (j < n)
        printf("%d ", arr2[j++]);

}

void printIntersection(int arr1[], int m, int arr2[], int n)
{
    int i,j;
    i=0;j=0;
    while (i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            printf("%d ", arr2[j]);
            j++;
        }
        else
        {
            printf("%d ",arr1[i]);
            i++;j++;
        }
    }
    
}

int main()
{
    int arr1[] = { 2, 4, 5, 6, 11 }; /* Sorted Array 1 */
    int arr2[] = { 2, 3, 5, 7 }; /* Sorted Array 2 */
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    printUnion(arr1, m, arr2, n);
    printf("\n");
    printIntersection(arr1, m, arr2, n);

    return 0;
}

/* Time Complexity= O(m+n) */