#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
int r1,c1,r2,c2;
int i,j,k,choice;

printf("1.addition\n");
printf("2.substraction\n");
printf("3.transpose\n");
printf("4.multiplication\n");
printf("enter your choice:n");
scanf("%d",&choice);

if(choice==1||choice==2)
{
    printf("enter rows and columns of first matrix:");
    printf("%d%d",&r1,&c1);
    printf("enter rows nad columns of second matrix:");
    scanf("%d%d",&r1,&c1);
    if(r1<1||r1>10||c1<1||c1>10||
        r2<1||r2>10||c2<1||c2>10)
    {
        printf("matrix sixe must be between 1 and 10.\n");
        return 0;
    }
    if(c2!=r2)
    {
        printf("multiplication is not posiible.\n");
        return 0;
    }
    printf("enter first matrix:\n");
    for(i=0;i<r1;i++)
    for(j=0; j<c1; j++)
    scanf("%d",&b[i][j]);

    printf("enter second matrix:\n");
    for(i=0;i<r2;i++)
    for(j=0;j<c2;j++)
    scanf("%d",&b[i][j]);

    for(i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k < c1; k++)
            c[i][j]=c[i][j]+a[i][j]*b[k][j];
        }

    }
    printf("product matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        printf("%d",c[i][j]);
        printf("\n");
    }
  }
    else
    
    {
        printf("invalid choice.\n");
    }
    return 0;
}
