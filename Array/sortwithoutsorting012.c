/**
 * @Task= Given an array which consists of only 0,1,2.
 * Sort the array without using any sorting technique.
 * 
 * @by= Priyanshu Sahu
 * 
 * @Logic= comparing and swaping on three levels
 */

#include<stdio.h>
void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
}

void sort012(int array[], int size)
{
    int low, mid, high;
    low=0; mid=0; high= size-1;
     while(mid<=high)
     {
        if(array[mid] == 0)
        {
            swap(&array[mid++], &array[low++]);
        }
        else if(array[mid]==1)
        {
            mid++;
        }
        else
            swap(&array[mid], &array[high--]);
    }
}

int main()
{
    int size, array[]= {1,2,0,0,1,2};
    size= sizeof(array)/sizeof(array[0]);

    
    /* Elements before low are 0
            betweem low and mid are 1
            after mid 2 */

    sort012(array, size);
    for(int i= 0; i<size; i++)
        printf("%d ", array[i]);

    return 0;
}