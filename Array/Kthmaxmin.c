/**
 * @Task= To find the Kth Max and min number in the array
 * 
 * @by= Priyanshu Sahu
 * 
 * @Logic=
 * Arrange the array in ascending order
 * Order of storage:
 *          Minimim----------------------Maximum
 *              |   ----------------------   |
 * array index  0,1,2,3,4,5,........,(n-2),(n-1)
 * 
 * Min= 0, Max= n-1
 * 2nd min= 1 and 2nd max n-2
 * 
 * Observation:
 * |    K   |   min  |  max    |
 * |    1   |   0    |   n-1     |
 * |    2   |   1    |   n-2   |
 * |    3   |   2    |   n-3   |
 * .            .          .
 * .            .          .
 * .            .          .
 * .            .          .
 * | General|   K-1  | n-K |
 */

#include<stdio.h>

void ascending(int array[], int size);
void Kth_min_max(int array[], int size, int K);

int main()
{
    int array[]= {5,4,8,1,3}; /* Ascending order:  1,3,4,5,8 */
    int size= sizeof(array)/ sizeof(array[0]);
    Kth_min_max(array, size, 2);
    return 0;
}


void ascending(int array[], int size)
{
    int i,j, temp;
    for(i=0; i<size-1; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if (array[i]>array[j]) /* Logic of swaping numbers is used */
            {
               temp= array[i];      /* Storing the value of array[i] in temp */
               array[i]= array[j];  /* Storing the value of array[j] in array[i] */
               array[j]= temp;      /* Storing the value of temp in array[j] */
            } 
        }
    }

} 

void Kth_min_max(int array[], int size, int K)
{
    ascending(array, size);
    printf("\n%dth Min Term: %d\n", K, array[(K-1)]);
    printf("%dth Max Term: %d\n", K, array[size-K]);
}

/* Time complexity: O(n^3) */