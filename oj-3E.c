#include<stdio.h>
#include<string.h>
char a[10000];
char b[10000];
int main(){
    int n, count = 0;
    while(gets(a)){
        n = strlen(a);
        for(int i = 0; i < n; i++){
            b[i] = a[i];
        }
        break;
    }
    for(int i = 0; i < n+1; i++){
        if((b[i]>64&&b[i]<92)||(b[i]>96&&b[i]<124)){
            count++;
        }
        else{
        	int m=1;\
            for(int j = i-count; j < i; j++){
                b[j] = a[i-m];
                m++;
            }
            for( int j = i-count; j < i; j++){
                a[j]=b[j];
            }
            count = 0;
        }
    }
    puts(a);
    return 0;
}