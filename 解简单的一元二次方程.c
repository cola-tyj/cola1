#include <stdio.h>
#include <math.h>
int main(void)
{
  float x1,x2,a,b,c,z;
  //a*x2+b*x+c 
  printf("请输入a、b、c的值：\n");
  scanf("%f,%f,%f",&a,&b,&c);
  if(b*b-4*a*c<0)
  printf("该方程无解\n");
  else
  {
  z=sqrt(b*b-4*a*c);
  x1=(-b+z)/2*a;
  x2=(-b-z)/2*a;
  printf("该方程的一个解为%f，另一个解为%f\n",x1,x2); 
}

 return 0;
}
