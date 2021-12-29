#include<stdio.h>
#include<math.h>
int a[10000]={0};
int isPrime(int x)
{	int flag = 0;
	int i = 2;
	for(i = 2;i <sqrt(x);i++){
		if(x%i==0&&x!=2)
		flag = 1;
	}
	return flag;
 } 
int main(){
	int n, count=0;
	scanf("%d",&n);
	while(n--){
		int k;
		scanf("%d",&k);
		for(int i=2;i<k;i++){
			for( ; k%i==0; ){
				a[i]++;
				count++;
			}	
		}
		for(int i=0;i<k&&count>1;i++){
			if(a[i]>0){
				for(int j =a[i]; j>0;j--){
					printf("%d*",i);
				}
			}
		}
		if(count==1){
			for(int i =0;i<k;i++){
				if(a[i]>0)
				printf("%d",i);
			} 
		}
	}
	return 0;
} 
