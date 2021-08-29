/**
 * @Task= Given an array, rotate 
 * the array by one position in clock-wise direction.
 * 
 * @by= Priyanshu Sahu
 * 
 * @Logic= 
 * Cyclic Rotation (clockwise): Tail ---> head
 * Shift other elements to right by one position
 */

#include <stdio.h>

/* Utility Functions */
void printArray(int array[], int n)
{
    for (int i= 0; i < n; i++)  
    {
        printf("%d ",array[i]);
    }
    printf("\n");
} 

/* Function to rotate the array by one position in 
clock-wise direction */

void cyclicrotate(int arr[], int n)
{
    int i, x;
    x= arr[n-1];

    for (i= n-1; i>0; i--)
    {
        arr[i]= arr[i-1];
    }
    arr[0]= x;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    /* Original Array */
    printArray(arr, n);
    /* Rotating the array */
    cyclicrotate(arr, n);
    /* Modified Array */
    printArray(arr, n);
 
    return 0;
}