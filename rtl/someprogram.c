#include<stdio.h>
void func(int a, int b)
{
int x, y;
x = a + b;
y = a - b;
printf("x=%d, y=%d",x,y);
}
void main()
{
func(10,20);
}

