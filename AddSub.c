#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,div;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    add=a+b;
    printf("addition of two numbers :%d", add);
    sub=a-b;
    printf("substraction of two numbers:%d",sub);
    mul=a*b;
    printf("multiplication of two numbers:%d",mul);
    div=a/b;
    printf("division of two numbers:%d",div);
    return 0;
}