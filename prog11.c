#include<stdio.h>
int main()
{
    float a,b;
    printf("enter mark:");
    scanf("%f",&a);
    printf("enter mark2:");
    scanf("%f",&b);
    printf("total= %.0f",a+b);
    printf("\navg=%.2f",a+b/2);
    return 0;
}
