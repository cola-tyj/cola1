#include<stdio.h>
int a[100], b[100], c[200];
void sort(int a[], int b[], int c[], int num1, int num2){           //学会并记忆此种比较方法：合并两个有序数列
    int i = 0, j = 0;
    while(i < num1 && j < num2){
        if(a[i] < b[j]){
            c[i + j] = a[i];
            i++;
        }
        else{
            c[i + j] = b[j];
            j++;
        }
    }
    while(i < num1){
        c[i + j] = a[i];
        i++;
    }
    while(j < num2){
        c[i + j] = b[j];
        j++;
    }
}
int main(){
    int m, n;
    scanf("%d %d",&m,&n);
    for(int i = 0; i < m; i++){
        scanf("%d",&a[i]);
    }
    for(int j = 0; j < n; j++){
        scanf("%d",&b[j]);
    }
    sort(a, b, c, m, n);
    for(int k = 0; k < (m+n); k++){
        printf("%d ",c[k]);
    }
    return 0;
}