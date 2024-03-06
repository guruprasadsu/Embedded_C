/*Exercise on generating pattern*/

#include<stdio.h>

void pattern1();
void pattern2();

int main()
{

pattern1();
pattern2();
return 0;

}

void pattern1()
{
    for (int i =0; i <4; i++)
{
    for(int j=0;j<=i;j++)
    {
        printf(" *");
    
    }

    printf("\n");
}
}

void pattern2()
{
    printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n");

   for (int i =0; i <4; i++)
{
    for(int j=0;j<=i;j++)
    {
        static int p =1;
        printf(" %d",p++);
    
    }

    printf("\n");
}


}