#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the size of the array");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
  {
    printf("Enter an Element: \n");
    scanf("%d",&a[i]);
  }
}

int sum_composite_numbers(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    for(int j=2;j<=a[i]/2;j++)
    {
      if(a[i]%j==0)
      {
       sum=sum+a[i];
       break;
      }
      else
      {
       continue;
      }
    }
  }
  return sum;
}
void out_put(int sum)
{
  printf("%d is the Output",sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  out_put(sum);
  return 0;
}