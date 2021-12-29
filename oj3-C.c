#include<stdio.h>
int isprime(int k){
    int v ;
    for(v = 2; v <= k/2; v++){
        if(k % v == 0)
        return 1;
    }
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    int i = 0;
    if(n % 2 ==0 && n > 4){
        for(i = 2; i <= n / 2; i++){
            if(isprime(i) == 0 && isprime(n-i) == 0){
                printf("%d %d\n",i,n-i);
            }
        }
    }
    else{
        printf("ERROR\n");}

    return 0;
}