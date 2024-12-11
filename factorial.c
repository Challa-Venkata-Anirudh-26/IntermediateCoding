//Program to print the factorial of a given number
#include<stdio.h>

int fact(int n)
{
  if(n==0)
    return 1;
  else if(n==1)
    return 1;
  else
    return(n*fact(n-1));
}

int main()
{
  int n,r;
  printf("Enter the number: ");
  scanf("%d",&n);
  r=fact(n);
  printf("The factorial of %d is %d",n,r);
  return 0;
}