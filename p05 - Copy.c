#include<stdio.h>
int main(void)
{
    int year;
    printf("enter a year:");
    scanf("%d is leap year.\n",year);
    if((year % 400==0)||(year %4==0&& year %100!=0))
    printf("%d is a leap year.n",year);
    else
    printf("%d is not a laep year.\n",year);
    return 0;
}