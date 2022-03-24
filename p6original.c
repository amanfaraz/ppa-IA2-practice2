#include<stdio.h>
#include<string.h>
void input(char *a)
{
  printf("Enter a Word: \n");
  scanf("%s",a);
}
int str_reverse(char a[50])
{
  int m=0,i=0;
  while(a[i]!='\0')
    {
      m++;
      i++;
    }
  return m;
  }
void output(int n,char *a[50])
{
  printf("The reversed string is: \n");
  for(int i=0;i<n;i++)
  {
    printf("%s", a[n-i]);
  }
}
int main()
{
  int n;
  char a[50];
  input(a);
  n=str_reverse(a);
  output(n,a);
  return 0;
}