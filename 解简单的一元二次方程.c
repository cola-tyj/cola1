#include <stdio.h>
#include <math.h>
int main(void)
{
  float x1,x2,a,b,c,z;
  //a*x2+b*x+c 
  printf("������a��b��c��ֵ��\n");
  scanf("%f,%f,%f",&a,&b,&c);
  if(b*b-4*a*c<0)
  printf("�÷����޽�\n");
  else
  {
  z=sqrt(b*b-4*a*c);
  x1=(-b+z)/2*a;
  x2=(-b-z)/2*a;
  printf("�÷��̵�һ����Ϊ%f����һ����Ϊ%f\n",x1,x2); 
}

 return 0;
}
