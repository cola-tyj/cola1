#include<stdio.h>
int main(){
	int n, x, sum = 0;
	scanf("%d",&n);
	int m = n;
	while(m--){
		scanf("%d",&x);
		sum += x;
	}
	float average = 1.0 * sum / n ; 
	printf("%.2f",average);
	
	return 0;
}
