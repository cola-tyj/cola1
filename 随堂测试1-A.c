#include<stdio.h>
int a[100];
int main(){
    int n, d, m;
    int i = 0, count = 0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&d);
        for(i=0;i<d;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<d;i++){
            if(a[i]==0){
                count++;
                d--;
                m=i;
                for(int j=m;j<d;j++){
                    a[j]=a[j+1];
                }
            }
        }
        for(i=0;i<d;i++){
            printf("%d ",a[i]);
        }
        for(i=0;i<count-1;i++){
            printf("0 ");
        }
        printf("0\n");
    }
    return 0;
}