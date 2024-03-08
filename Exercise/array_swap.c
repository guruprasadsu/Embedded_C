
#include <stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

void array_init(int*,int*,int);
void array_swap(int*,int*,int);

int main()
{
    int array1[MAX_SIZE],array2[MAX_SIZE],size;
    
    printf("enter the array size----> ");
    scanf("%d",&size);
    
    array_init(array1,array2,size);
    array_swap(array1,array2,size);
    
    return 0;
}


void array_init(int* arr1, int* arr2 ,int s)
{
    printf("Enter the elements of array1 and array2\n");
    
    for(int i = 0; i<s; i++)
    {
        printf("\narray1[%d] = ",i);
        scanf("%d",&arr1[i]);
        
        printf("\narray2[%d] = ",i);
        scanf("%d",&arr2[i]);
    }
    
    
}


void array_swap(int* arr1, int* arr2, int s)
{
    int temp;
    printf("Array elements after swapping\n");
    
    for(int i =0; i <s; i ++)
    {
        temp = arr1[i];
        
        arr1[i] = arr2[i];
        
        arr2[i] = temp;
        
        
        printf("array1[%d] = %d     array2[%d] = %d \n",i,arr1[i],i,arr2[i]);
        
        
    }
    
}