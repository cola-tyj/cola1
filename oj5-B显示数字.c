#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char a[100];                //一定要记得初始化，不然得分是零
        char b[7][10000];
        for(int i=0;i<100;i++){
            a[i] = ' ';
        }
        for(int i=0;i<7;i++){
            for(int j=0;j<10000;j++){
                b[i][j] = ' ';
            }
        }
        // memset(a,0,100);
        // memset(b,0,sizeof(b));
        int k=0;            //k的用法很妙哦~
        scanf("%s",a);
        int len = sizeof(a)/sizeof(a[0]);       //看看是几位数
        for(int i=0;i<len;i++){
            if (a[i]=='0')
            {
                for(int j=0;j<7;j++){
                    b[0][1+k]=b[0][2+k]=b[0][3+k]='*';
                    b[j][0+k]=b[j][4+k]='*';
                    b[6][1+k]=b[6][2+k]=b[6][3+k]='*';
                }
                k+=7;               //因为每个字之间要空两列，所以是加7
            }
            if (a[i]=='1'){
                for(int j=0;j<7;j++){
                    b[j][4+k]='*';
                }
                k+=7;
            }
            if (a[i]=='2'){
                for(int j=0;j<7;j++){
                    if(j==0||j==3||j==6){
                        b[j][0+k]=b[j][1+k]=b[j][2+k]=b[j][3+k]=b[j][4+k]='*';
                    }
                    if(j==1||j==2){
                        b[j][4+k]='*';
                    }
                    if(j==4||j==5){
                        b[j][0+k]='*';
                    }
                }
                k+=7;
            }
            if (a[i]=='3'){
                for(int j=0;j<7;j++){
                    if(j==0||j==3||j==6){
                        b[j][0+k]=b[j][1+k]=b[j][2+k]=b[j][3+k]=b[j][4+k]='*';
                    }
                    else
                    {
                        b[j][4+k]='*';
                    }
                }
                k+=7;
            }
            if(a[i]=='4'){
                for(int j=0;j<7;j++){
                    if(j==0||j==1||j==2)
                    b[j][0+k]=b[j][4+k]='*';
                    else if(j==3)
                    b[j][0+k]=b[j][1+k]=b[j][2+k]=b[j][3+k]=b[j][4+k]='*';
                    else
                    b[j][4+k]='*';
                }
                k+=7;
            }
            if (a[i]=='5'){
                for(int j=0;j<7;j++){
                if(j==0||j==3||j==6){
                    b[j][0+k]=b[j][1+k]=b[j][2+k]=b[j][3+k]=b[j][4+k]='*';
                }
                if(j==1||j==2)
                b[j][0+k]='*';
                if(j==4||j==5)
                b[j][4+k]='*';
                }
                k+=7;
            }
            if (a[i]=='6'){
                for(int j=0;j<7;j++){
                    if(j==0||j==3||j==6){
                        b[j][0+k]=b[j][1+k]=b[j][2+k]=b[j][3+k]=b[j][4+k]='*';
                    }
                    if(j==1||j==2)
                    b[j][0+k]='*';
                    if(j==4||j==5)
                    b[j][4+k]=b[j][0+k]='*';
                }
                k+=7;
            }
            if (a[i]=='7'){
                for(int j=0;j<7;j++){
                    if(j==0){
                        b[j][0+k]=b[j][1+k]=b[j][2+k]=b[j][3+k]=b[j][4+k]='*';
                    }
                    else
                    b[j][4+k]='*';
                }
                k+=7;
            }
            if (a[i]=='8'){
                for(int j=0;j<7;j++){
                    if(j==0||j==3||j==6){
                        b[j][0+k]=b[j][1+k]=b[j][2+k]=b[j][3+k]=b[j][4+k]='*';
                    }
                    else
                    b[j][4+k]=b[j][0+k]='*';             
                }
                k+=7;
            }
            if (a[i]=='9'){
                for(int j=0;j<7;j++){
                    if(j==0||j==3||j==6){
                        b[j][0+k]=b[j][1+k]=b[j][2+k]=b[j][3+k]=b[j][4+k]='*';
                    }
                    if(j==1||j==2)
                    b[j][4+k]=b[j][0+k]='*'; 
                    if(j==4||j==5)
                    b[j][4+k]='*';
                }
                k+=7;
            }
        }
        int x=atoi(a);              //将输入的char转换成int，不要忘记库
        printf("%d:\n",x);
        for(int j=0;j<6;j++){
            for(int l=0;l<k;l++){
                printf("%c",b[j][l]);
            }
            printf("\n");           //在这里是为了防止多打印一个换行符
        }
        for(int j=0;j<k;j++){
        	printf("%c",b[6][j]);
		}
        memset(b, 0, sizeof(b));            //每次完成打印之后，要清除数组b中的数据
        printf("\n");
    }
    return 0;
}