//矩阵的幂
#include<stdio.h>
int main(){
    int n, k;
    scanf("%d %d",&n,&k);
    long long int a[n][n];            //定义两个数组一个存储输入的数据，另一个存储计算结果
    long long int b[n][n];
    long long int c[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j] =0;
            b[i][j] =0;
            c[i][j] =0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            scanf("%ld",&a[i][j]);
        }
    }
    if(k==1){                   //如果k等于1，也就是说结果是出入数组的1次幂，即本身，那么直接输出
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            b[i][j]=a[i][j];
        }
    }
    }
    else if(k-1>=1){        //如果k大于等于2，那么需要先计算出数组a的二次幂，存到数组b中
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            long long int sum=0;
            for(int l=0; l<n; l++){
                sum+=a[i][l]*a[l][j];       //计算矩阵的幂
            }
            b[i][j]=sum;
            c[i][j]=sum;
        }
    }
    k--;
    }
    while(k-1>0){               //如果k大于2，b中此时的结果是二次幂，进行3次以及以上次幂的计算时，数组b要参与计算
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            long long int sum=0;
            for(int l=0; l<n; l++){
                sum+=a[i][l]*c[l][j];       //b是a的二次幂，继续*a,得到a的三次幂······
            }
            b[i][j]=sum;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            c[i][j]=b[i][j];
        }
    }
    k--;             
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%ld ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}