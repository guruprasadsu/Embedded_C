/******************************************************************************
calculation of Area of different shapes using if else
*******************************************************************************/
#include <stdio.h>

#define Pi 3.142

int main()
{
    char Shape;
    
    printf("select\n'C'-Circle\n'S'-Square\n'R'-Rectangle\n");
    scanf("%c",&Shape);

    if(Shape == 'C')
    {
        float radius;
        printf("Enter the value of radius\n" );
        scanf("%f",&radius);
    
         printf("Area of circle is ----> %f",(Pi*radius*radius));
    }

    else if (Shape =='S' )
    {
        int side;
        printf("Enter the value of side\n" );
        scanf("%d",&side);
    
        printf("Area of square is ----> %d",side*side);
    }

    else if(Shape == 'R')
    {
        int length,bredth;
         printf("Enter the value of lenght,bredth\n" );
         scanf("%d %d",&length,&bredth);
    
        printf("Area of rectangle is ----> %d",length*bredth);
    }

    else
    printf("invalid input\n");

    return 0;
}