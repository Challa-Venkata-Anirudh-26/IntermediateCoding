//Program to print all the prime numbers in a given range
#include<stdio.h>

void prime(int n)
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
  if(n==1){}
  else if(c==0)
    printf("%d\n",n);
}

int main()
{
  int i,lb,ub;
  printf("Enter lower boundary: ");
  scanf("%d",&lb);
  printf("Enter upper boundary: ");
  scanf("%d",&ub);
  for(i=lb;i<=ub;i++)
    {
      prime(i);
    }
  
}