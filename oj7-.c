#include<stdio.h>
int a[1000];
int main(){
    int n, m;
    int i, j;
    scanf("%d",&n);
    while (n--){
        scanf("%d",&m);
        for(i =0 ; i < m; i++){
            scanf("%d",&a[i]);
        }
        for(i =0 ; i < m; i++){
            for(j = 0; j < m-1; j++){
                if(a[j]>a[j+1]){
                    int g = a[j+1];
                    a[j+1]=a[j];
                    a[j]=g;
                }
            }
        }
        for(i=m-1 ; i>=0 ; i--){
            if(a[i]==a[i+1]){
                for(j = i;j<m-1;j++){
                    a[j]=a[j+1];
                }
                m--;
            }
        }
        if(m != 1){
        for(i = 0 ; i < m-1; i++){
            printf("%d ",a[i]);
        }
        printf("%d\n",a[m-1]);
        }
        else
        {
            printf("%d\n",a[m-1]);
        }
    }
    return 0;
}