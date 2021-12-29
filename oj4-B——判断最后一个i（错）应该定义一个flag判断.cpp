#include<stdio.h>
int isprime(int k){
	int a=k/100;
	int b=k%100/10;
	int c=k%10;
	if(a*a*a+b*b*b+c*c*c==k){
		return 0;
	}
	return 1;
}
int main(){
	int n,a;
	int flag = 0; 
	scanf("%d",&n);
	for(a=0;a<n;a++){
		int n1, n2,i;
		scanf("%d %d",&n1,&n2);
		if(n1<=n2){
			for(i=n1;i<=n2;i++){
				if(isprime(i)==0){
					printf("%d ",i);
					flag = 1;
				}
			}
			if(flag == 0)		//flag为0表示里面没有出现过水仙花数， 如果这里判断函数返回值，那么只是代表最后一个数（n2）不是水仙花数时输出-1 
			printf("-1\n"); 
		}
		else
			printf("-1\n");
	}
		return 0;
}
