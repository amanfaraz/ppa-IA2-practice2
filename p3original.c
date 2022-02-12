#include<stdio.h>
int input_number()
{
  int a;
  printf("Enter a Number: \n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      return 1;
      break;
    }
    else
    {
      continue;
    }
  }
}
void output(int n,int result)
{
  if(result==1)
  {
    printf("%d is COMPOSITE",n);
  }
  else
  {
    printf("%d is NOT COMPOSITE",n);
  }
}
int main()
{
  int a,result;
  a=input_number();
  result=is_composite(a);
  output(a,result);
  return 0;
}
