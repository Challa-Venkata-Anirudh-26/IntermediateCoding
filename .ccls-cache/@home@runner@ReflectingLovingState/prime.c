//Program to check if a number is prime or not
#include<stdio.h>

void isprime(int n)
{
  int i,c=0;
  
  for(i=2;i<=n/2;i++)
    {
      if(n%i==0)
      {
        c+=1;
        break;
      }
    }
  if(n==1)
    {
      printf("%d is neither a prime nor a composite number",n);
    }
  else if(c==0)
    printf("%d is a prime number",n);
  else
    printf("%d is not a prime number",n);
}

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  isprime(n);
  return 0;
}