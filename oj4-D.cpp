#include<stdio.h>
#include<string.h>
int main(){
	char ch,str[1024];
	int i=0, count=0;
	while((ch=getchar())!='\n'){
		str[i]=ch;
		count++;
	}
	
	printf("%d",count);
	return 0;
} 
