#include<stdio.h>
int main()
{
    float area,len,bre;
    printf("enter the length");
    scanf("%f",&len);
    printf("enetre the breath");
    scanf("%f",&bre);
    area=len*bre;
    printf("Area of the rectangle = %.2f\n", area);
    return 0;

    
}