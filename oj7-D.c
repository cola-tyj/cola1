#include<stdio.h>
long long Product(int i){
    long long j,g;
    g=j=i;
    for ( j = i; j > 1; j--){
    	g = g * (j-1);
    }
    return g;
}
int main(){
    int k, n;
    long long sum = 0;
    scanf("%d",&k);
    while(k--){
        scanf("%d",&n);
        if(n > 1){
        	for(int i = n; i >= 1; i--){
        		long long product = Product(i);
        		sum += product; 
        }
        long long output = sum % 1000000;
        printf("%ld\n",output);
        sum = 0;
    	}
    	else
    	printf("%ld\n",n);
    }
    return 0;
}