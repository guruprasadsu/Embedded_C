/******************************************************************************
calculation of Area of different shapes
*******************************************************************************/
#include <stdio.h>

#define Pi 3.142

void Circle();
void Trapizoid();
void Triangle();
void Square();
void Rectangle();

int main()
{
    char Shape;
    
    printf("select\n'C'-Circle\n'Z'-Trapezoid\n'S'-Square\n'R'-Rectangle\n'T'-Traingle\n");
    scanf("%c",&Shape);

switch(Shape)
{
    case 'C':
    Circle();
    break;
    
    case 'Z':
    Trapizoid();
    break;
    
    case 'S':
    Square();
    break;
    
    case 'R':
    Rectangle();
    break;
    
    case 'T':
    Triangle();
    break;
    
    default:
    printf("Invalid input!\n");
    
    
}

    return 0;
}

void Circle()
{
    float radius;
    printf("Enter the value of radius\n" );
    scanf("%f",&radius);
    
    printf("Area of circle is ----> %f",(Pi*radius*radius));
}


void Trapizoid()
{
    float base1,base2,height;
    printf("Enter the value of base1,base2,height\n" );
    scanf("%f %f %f",&base1,&base2,&height);
    
    printf("Area of Trapizoid is ----> %f",((base1+base2)/2)*height);
    
}


void Triangle()
{
    float base,height;
    printf("Enter the value of base,height\n" );
    scanf("%f %f",&base,&height);
    
    printf("Area of Triangle is ----> %f",((base*height)/2));
}

void Square()
{
    int side;
    printf("Enter the value of side\n" );
    scanf("%d",&side);
    
    printf("Area of square is ----> %d",side*side);
    
}

void Rectangle()
{
     int length,bredth;
    printf("Enter the value of lenght,bredth\n" );
    scanf("%d %d",&length,&bredth);
    
    printf("Area of rectangle is ----> %d",length*bredth);
    
}