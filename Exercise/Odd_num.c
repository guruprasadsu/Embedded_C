/*Find the even nmbers between 0 to 100 and also count the total odd numbers*/

#include<stdio.h>

int main()
{
    int count =0;
    printf("printing even numbers between 0-100 using for loop \n");

for(int i =0;i<=100;i++)
{
    if((i%2)!=0)
    continue;

    else
    printf("%d\n",i,count++);
 
}

printf("Total even numbers are %d\n",count);

 count =0;

 printf("printing even numbers between 0-100 using while loop \n");

int i = 0;

 while( i <= 100){

    if((i%2)!=0);
      
    else
    printf("%d\n",i,count++);

    i++;

 }

printf("Total even numbers are %d\n",count);

    return 0;

}