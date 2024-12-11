//Write a program to print all the armstrong numbers in a given range
#include<stdio.h>
#include<math.h>

void check (int n)
{
  int i,j,c=0,s=0,t;
  j=n;
  t=n;
  while(n>0)
    {
      c+=1;
      n=n/10;
    }
  for(i=0;i<c;i++)
    {
      s=s+pow(t%10,c);
      t=t/10;
    }
  if(s==j)
    printf("%d\n",j);
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
      check(i);
    }
  return 0;
}