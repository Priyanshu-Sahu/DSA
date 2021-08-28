/**
 * @Task= To find the maximum and minimum number in array
 * 
 * @by= Priyanshu Sahu
 * 
 * @Logic: 
 * Three cases:
 *  first: only one element in array
 *  second: teo elements in array
 *  third: more than two elements
 * 
 * CHECK THE SIZE OF ARRAY
 * IF SIZE IS 1
 *      RETURN MAX,MIN= ARRAY[0]
 * IF SIZE IS 2 ("also for more than 2")
 *      RETURN (array[0]> array[1]? (MAX=array[0], MIN=array[1]), 
 *                                  (MAX= array[1], MIN= array[0]))
 * IF SIZE >2
 *      "TRAVERSE ARRAY AND CHECK IF MAX. MIN IS PRESENT AFTER POSITION 2
 *      IN ARRAY"
 *      RETURN VALUE
 *   
 */

#include<stdio.h>
#include<time.h>
typedef struct 
{
    int min;    /* data 1 */
    int max;    /* data 2 */
}MINMAX;

MINMAX min_max; /*Creating object*/

MINMAX get_minmax(int array[], int size)
{
    
    

    /* first case */
    if(size == 1)
    {
        min_max.min= array[0];
        min_max.max= array[0]; 
        return min_max;
    }

    /* second case */
    if(array[0] > array[1])
    {
        min_max.max= array[0];
        min_max.min= array[1];
    }
    else
    {
        min_max.min= array[0];
        min_max.max= array[1];
    }
    /* Already visited first two indices of the array, now remaing part*/
    for (int i = 2; i < size; i++)
    {
        if (array[i] > min_max.max) /* Test for max element */
            min_max.max= array[i];
        else if(array[i] < min_max.min) /* Test for min element */
            min_max.min= array[i];
    }
    return min_max;
}

int main()
{
    int array[]= {1,3,2,5,4};
    int size= sizeof(array)/ sizeof(array[0]);

    
    get_minmax(array, size); /* function call */
    int ticks= clock();
    printf("%f\n", (float)ticks/ CLOCKS_PER_SEC);

    printf("Max in array: %d\n", min_max.max);
    printf("Min in array: %d\n", min_max.min);
    //getchar();
    
    
    return 0;
}
