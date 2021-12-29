#include<stdio.h>
int a[30] = {0};
int b[30] = {0};
int main(){
    int n, i, x;
    int count = 0;
    scanf("%d ", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x);
        if(x >= 0){
            a[x]++;
        }
        else{
            b[-x]++;
        }
    }
    for(i=0; i<30; i++){
        if(a[i] >= 1)
        count++;
        if(b[i] >= 1)
        count++;
    }
    printf("%d", count);
    return 0;
}