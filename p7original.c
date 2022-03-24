#include<stdio.h>
typedef struct triangle
{
  float height;
  float base;
  float area;
}
Triangle;      

Triangle input()
{
  Triangle a;
  printf("Enter Height and Base of a triange: \n");
  scanf("%f%f",&a.height,&a.base);
  return a;
}
void find_area(Triangle *a)
{
   a->area=(a->height * a->base)/2;
}
void output(Triangle t)
{
  printf("Area of Triangle having base %0.1f and height %0.1f is %0.1f ",t.base,t.height,t.area);
}
int main()
{
  Triangle a;
  a=input();
  find_area(&a);
  output(a);
  return 0;
}