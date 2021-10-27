#include <stdio.h>
int main()
{
	char a,b;
	printf("请输入大写字母：\n");
	scanf("%c",&a);
	b=a+32; 
	printf("%c的小写字母为%c\n",a,b); 
	return 0;
 } 
