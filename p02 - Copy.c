#include<stdio.h>
int main(void)
{
    double length,breadth,radius,base,height;
    const double pi=3.14159;
    printf("enter rectangle lenght and breadth:");
    scanf("%lf %lf",&length,&breadth);
    printf("rectanglr area=%.2if\n",length*breadth);
    printf("rectangle perimeter=%.2lf\n",2*(length+breadth));
    printf("enter circle radius:");
    scanf("%lf",&radius);
    printf("circle area=%.2lf\n",pi*radius*radius);
    printf("circle circumference=%.2lf\n",2*pi*radius);
    printf("enter triangle base and height:");
    scanf("%lf %lf",&base,&height);
    printf("triangle area=%.2lf\n",0.5*base*height);
    return 0;
}



    

