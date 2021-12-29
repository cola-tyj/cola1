#include<stdio.h>
int a[100];
int b[100];
int main(){
    int n, m, max;
    int i, c = 0;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
       // printf("%d\n",i);
        scanf("%d",&a[i]);
        if(a[i] < 0){
            b[i] = -a[i];
        }
        else
        {
            b[i] = a[i];
        }
        
    }
    max = b[0];
    for(i = 0; i < n; i++){
       // printf("%d\n",b[1]);
        if(b[i] > max){
            max = b[i];
            c = i;
        }
    }
   // printf("%d\n",b[1]);
    //printf("%d\n",max);
    printf("%d",a[c]);

    return 0;
}