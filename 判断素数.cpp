//判断素数
#include<stdio.h>
int main (){
	int n=1;
	int a,b;
	scanf("%d",&a);
	for ( n=1;n<=(a/2);n++){
		if(a%n==0)
		{
		b=1;
		}
		else 
		b=0;
	}
	if(b==0)
	printf("%d是个素数\n",a);
	else
	printf("%d不是个素数\n",a);	
	return 0;
} 
