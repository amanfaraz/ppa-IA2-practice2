#include<stdio.h>
void input(float *height, float *base)
{
  printf("Enter the height and base respectively: \n");
  scanf("%f%f",height,base);
}
void find_area(float height, float base, float *area)
{
  *area = (height*base)/2;
}
void output(float height, float base, float area)
{
  printf("Area of triangle of base: %f and height: %f is %f",base,height,area);
}
int main()
{
  float a,b,c;
  input(&a,&b);
  find_area(a,b,&c);
  output(a,b,c);
  return 0;
}

