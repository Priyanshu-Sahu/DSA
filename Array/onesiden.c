/**
 * @Aim= To move all the negetive elements to one side of the array
 * 
 * @by= Priyanshu Sahu
 * 
 * @Logic= 
 * To apply the partition process of quicksort
 */
# include <stdio.h>

/* Utility Functions */

void swap(int *a, int *b)
{
        int temp = *a;
        *a = *b;
        *b = temp;
}

void printArray(int array[], int n)
{
    for (int i= 0; i < n; i++)  
    {
        printf("%d ",array[i]);
    }
    printf("\n");
} 

/* onesiden Function */
void onesiden(int arr[], int n)
{
    int i,j;
    j= 0;   /* assuming it as pivot point */
    for(i=0; i<n; i++)  /* itterating over array */
    {
        if(arr[i] < 0)  /* Condition to check if the number is negetive or not */
        {
            if(i != j)  /* pivot point */
                swap(&arr[i], &arr[j]); 
            j++; /* new pivot point */
        }
    }
}

/* Driver Code */
int main()
{
    int arr[] = {10, 9, -8, -7, 6,-5,4,3,2,-1};
    int n = sizeof(arr) / sizeof(arr[0]);
    onesiden(arr, n);
    printArray(arr, n);
    return 0;
}