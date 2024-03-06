/*Using the array pointers implement the matrix */

#include<stdio.h>

int main()
{

    int x[]={1,2,3};
    int y[]={4,5,6};
    int z[]={7,8,9};

    int *ptr[3]={x,y,z};

    printf("%p\n",ptr);

    printf("%p\n",*ptr);

    printf("%p\n",ptr[0]);
    
    printf("%p\n",ptr[1]);
    
    printf("%p\n",ptr[2]);
    
    printf("%p\n",&ptr[0]);
    
    printf("%p\n",&ptr[1]);
    
    printf("%p\n",&ptr[2]);
    
    printf("%d\n",*ptr[0]);
    
    printf("%d\n",*ptr[1]);
    
    printf("%d\n",*ptr[2]);

    printf("%d\n",*ptr + 1);

    printf("%d\n",*(*ptr + 1));

    printf("%d\n",ptr[1][2]);



    return 0;
}