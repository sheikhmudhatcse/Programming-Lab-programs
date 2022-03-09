#include<stdio.h>
#include<math.h>
main()
{
  float len,breadth,area;
  printf("Enter Length and Breadth of Rectangle\n");
  scanf("%f %f",&len,&breadth);
  area=(float)len*breadth;
  printf("Area of Rectangle is %f\n",area);
  return 0;
}