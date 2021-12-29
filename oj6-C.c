//最小的数
#include<stdio.h>
int main(){
    int a[10]={0};
    int flag=0;
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    for(int i=1; i<10; i++){
        if(a[i]!=0){
            printf("%d",i);
            a[i]--;
            flag=1;
        }
        if(flag)
        break;
    }
    while(a[0]!=0){
        printf("0");
        a[0]--;
    }
    for(int i=1; i<10;i++){
        while(a[i]!=0){
            printf("%d",i);
            a[i]--;
        }
    }
    return 0;
}