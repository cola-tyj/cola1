#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Scores               //定义结构体来存储数据
{
    char name[10];
    char identity[19];
    char score[4];
    int rank;
}Scores;
int main(){
    int n;
    int count1=0,count2=0,count=0;
    scanf("%d",&n);
    char ch[10];
    scanf("%s",ch);
    Scores infor[n];                //n组数据需要n个结构体，所以用结构体数组来存储
    for(int i=0;i<n;i++){           //进行数据的输入
        scanf("%s",infor[i].name);
        scanf("%s",infor[i].identity);
        scanf("%s",infor[i].score);
    }
    for(int i=0;i<n;i++){
        infor[i].rank =1;
    }
//    for(int i=0;i<n;i++){
//        printf("%s\n",infor[i].identity);
//    }
    int s[100]={0};         //这里定义一个新的数组来将结构体中成绩直接转化为int型，方便后期比较。问（问什么这里不能定义int s[n]）
    for(int i=0;i<n;i++){
        s[i]=atoi((const char *)infor[i].score);       //格式为n/a的转化之后为0。注意这里aoti用法和const char *要用括号
        if(s[i]!=0)
        count++;
    }
//    for(int i=0;i<n;i++){
//        printf("%d\n",s[i]);
//    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i]<s[j]&&s[i]!=0){
                infor[i].rank++;
            }
        }
    }
    // char ch[10];
    // scanf("%s",ch);
    int tempt=atoi((const char *)ch);
    //printf("%d\n",tempt);
    if(tempt!=0){
        if(strlen(ch)<=3){
            for(int i=0;i<n;i++){
            if(strcmp(ch,infor[i].score)==0){
               if(s[i]!=0)
                printf("%s %s %s %d",infor[i].name,infor[i].identity,infor[i].score,infor[i].rank);
                else
                printf("%s %s %s %s",infor[i].name,infor[i].identity,infor[i].score,infor[i].score);
            }
            }
        }
        else{
            for(int i=0;i<n;i++){
                char *h=strstr(infor[i].identity,ch);
                if(h!=NULL){
                   if(s[i]!=0)
                    printf("%s %s %s %d",infor[i].name,infor[i].identity,infor[i].score,infor[i].rank);
                    else
                    printf("%s %s %s %s",infor[i].name,infor[i].identity,infor[i].score,infor[i].score);
                }
//                else if(h==0)
//                printf("NULL\n");
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(strcmp(ch,infor[i].name)==0){
                if(s[i]!=0)
                printf("%s %s %s %d",infor[i].name,infor[i].identity,infor[i].score,infor[i].rank);
                else
                printf("%s %s %s %s",infor[i].name,infor[i].identity,infor[i].score,infor[i].score);
            }

        }
    }
    return 0;
}
