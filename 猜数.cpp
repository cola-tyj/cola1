#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand()%100+1;
	int count=0;
	printf("我已经猜好了一个数，请你猜猜这个数\n");
		int b=0;
	do{ 
		scanf("%d",&b);
		count++;
		if(b<a){
			printf("猜小了\n");
			}
			else if(b>a)
			printf("猜大了\n");
		}while (b!=a);
	printf("恭喜你，你用了%d次猜对了这个数\n",count);
	return 0;
}
