#include <stdio.h>
int input()
{
  int n;
  printf("enter the value of n:\n");
  scanf("%d",&n);
  return n;
}
int sum(int n)
{
  int i,sum;
  sum=0;
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
int output(int sum)
{
  printf("sum is %d",sum);
}
int main()
{
  int x,y;
  x=input();
  y=sum(x);
  output(y);
  return 0;
}