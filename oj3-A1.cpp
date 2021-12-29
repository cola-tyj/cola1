//判断是否为直角三角形
#include<stdio.h>
int main(){
	long int n, i;
	scanf("%d\n",&n);
	for(i=0 ; i<n; i++){
		int a, b, c, t;
		scanf("%ld %ld %ld",&a, &b, &c);
		if(a>0&&b>0&&c>0){
		if(a>b){
			t=a;
			a=b;
			b = t;
		} 
		if(a>c){
			t=a;
			a=c;
			c=t;
		} 
		if(b>c){
			t=b;
			b=c;
			c=t;
		}
		if(a*a+b*b==c*c){
			printf("Yes\n");
		}
		else
		printf("No\n");}
		else
		printf("NO\n");
	}
	
	return 0;
} 
