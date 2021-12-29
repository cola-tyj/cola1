#include<stdio.h>
int a[5][5];
int main(){
    int n;
    int i, j, sum = 0;
    scanf("%d", &n);
    while(n--){
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i == j){
                sum+=a[i][j];
            }
        }
    }
    for(i=4;i>=0;i--){
        for(j=0;j<5;j++){
            if((i+j)==4)
            sum+=a[i][j];
        }
    }
    printf("%d\n",sum-a[2][2]);
    }
    return 0;
}