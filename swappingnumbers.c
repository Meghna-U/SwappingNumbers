#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter two numbers:");
  scanf("%d%d",&a,&b);
  printf("Before Swapping: a=%d  b=%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After Swapping: a=%d  b=%d",a,b);
}
