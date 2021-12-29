#include<stdio.h>
int a[100];
int b[100];
int main(){
    int n, i= 0;
    scanf("%d",&n);
    while(n--){
        do{
            scanf("%d",&a[i]);
            i++;
        }while(getchar() == ' ');
        int m = i;
        for(int j=0; j<m; j++){c
            if(a[j]%2 == 0){
            b[j]=a[j];
            a[j]=0;
            }
        }
    for(int k = 0; k<m;k++){
        for(int j=0; j<m-1; j++){
            if(a[j]>a[j+1]){
                int g = a[j+1];
                a[j+1]=a[j];
                a[j]=g;
            }
        }
    }
    for(int k = 0; k<m;k++){
        for(int j=0; j<m-1; j++){
            if(b[j]>b[j+1]){
                int g = b[j+1];
                b[j+1] = b[j];
                b[j] = g;
            }
        }
    }
        for(int j=0; j<m; j++){
            if(a[j] != 0)
            printf("%d ",a[j]);
        }
        for(int j=0; j<m; j++){
            if(b[j]!= 0)
            printf("%d ",b[j]);
        }
        printf("\n");
        for(i=0;i<m;i++){
        	a[i]=0;
		}
		for(i=0;i<m;i++){
        	b[i]=0;
		}
		i=0;
    }
    return 0;
}