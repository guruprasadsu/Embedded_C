/*Find the even nmbers between given numbers and also count the total odd numbers*/

#include<stdio.h>
int count;

int main()
{
int L_range,H_range;
printf("Enter the range \n");

scanf("%d %d",&L_range,&H_range);

    printf("printing even numbers between %d-%d using for loop \n",L_range,H_range);

for(int i =L_range;i<=H_range;i++)
{
    if((i%2)!=0)
    continue;

    else
    printf("%d\n",i,count++);
 
}

printf("Total even numbers are %d\n",count);

 count = 0;

printf("printing even numbers between %d-%d using while loop \n",L_range,H_range);


int i = L_range;

 while( i <= H_range){

    if((i%2)!=0);
      
    else
    printf("%d\n",i,count++);

    i++;

 }

printf("Total even numbers are %d\n",count);

    return 0;

}