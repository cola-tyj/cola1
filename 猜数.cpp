#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand()%100+1;
	int count=0;
	printf("���Ѿ��º���һ����������²������\n");
		int b=0;
	do{ 
		scanf("%d",&b);
		count++;
		if(b<a){
			printf("��С��\n");
			}
			else if(b>a)
			printf("�´���\n");
		}while (b!=a);
	printf("��ϲ�㣬������%d�β¶��������\n",count);
	return 0;
}
