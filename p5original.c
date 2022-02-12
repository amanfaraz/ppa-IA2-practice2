#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number: \n");
  scanf("%d",&a);
  return a;
}
int gcd(int a, int b)
{
  int hcf=1;
  for(int i=1;i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      int c=i;
      if(c>hcf)
      {
        hcf=c;
      }
    }
    else
    {
      continue;
    }
  }
  return hcf;
}
void output(int a, int b, int hcf)
{
  printf("Highest Common Factor of %d and %d is %d",a,b,hcf);
}
int main()
{
  int a,b,hcf;
  a=input();
  b=input();
  hcf=gcd(a,b);
  output(a,b,hcf);
  return 0;
}