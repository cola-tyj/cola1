//�ж�����
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
	printf("%d�Ǹ�����\n",a);
	else
	printf("%d���Ǹ�����\n",a);	
	return 0;
} 
