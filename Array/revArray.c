/**
 * @Task= To reverse the array
 * 
 * by= Priyanshu Sahu
 * 
 * @Logic= Swaping to numbers(index)
 */

#include<stdio.h>

/* piece of code we will be using more number of times */
void printArray(int array[], int);  
/* Key Function Code */
void revArray(int array[], int, int);

int main()
{
    int array[]= {1,2,3,4,5};
    int n;
    n= sizeof(array)/ sizeof(array[0]);
    
    printArray(array, n);
    revArray(array, 0, n-1);
    printArray(array, n);

    return 0;
}

void printArray(int array[], int n)
{
    for (int i= 0; i < n; i++)   //-------->n
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

void revArray(int array[], int start, int end)
{
    int temp;
    start=0;
    while(start< end)   //---------> n'
    {
        temp= array[start];
        array[start]= array[end];
        array[end]= temp;

        start++; end--;
    }
}

//Time complexity= O(n)+ O(n')= O(n)