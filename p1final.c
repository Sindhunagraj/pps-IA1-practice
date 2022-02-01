#include <stdio.h>
void input(int *a,int *b) 
{
  printf("enter the values:\n");
  scanf("%d%d",a,b);
}

void add(int a,int b,int *c)
{
  *c=a+b;
}

void output(int a,int b,int c)
{
  printf("sum of %d and %d is %d:\n",a,b,c);
}

int main()
{
  int x,y,z;
  input(&x,&y);
  add(x, y, &z);
  output(x,y,z);
  return 0;
}