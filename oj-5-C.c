/*
#include<stdio.h>
#include<string.h>
//A blockhouse is a small castle that has four openings through which to shoot.
int main(){
    void sort(char name[][100], int n);
    int i=0, count=0, j=0, max = 0, cnt,falg;
    char word[1000][100], str[1000] , s[1000][1000];
    char *p;
    while(gets(s[i]))
	{
		strcat(str,s[i]);
		i++;
	}
    p=str;// 将输入值得地址赋值给指针
    for(;*p!=0; p++){
        if(*p!=' ' && *p != ',' &&  *p != '.'){//分割单词
            if(*p>='A'&& *p<='Z') //大写变小写
               *p += 32;
            word[count][j++]=*p;
        }
        //遇到空格、逗号、句号
        else{
            if(j!=0){
                word[count][j++]='\0';//单词结束标志
                count++;
                j=0;
            }
        }
    }
    //将分割后的单词排序
    sort(word,count);
    int sum = 1;
    for(i=0;i<count; i++){
        if(strcmp(word[i],word[i+1])== 0)
            sum++;
        else{
        	
            if(sum>=max) 
			{
				max = sum;
				cnt = i;
//				if(falg=1)
//				{
//            		cnt = i;
//        			falg = 0;
//        		}
			}
			sum = 1;
        }  
    }
    printf("%s %d",word[cnt],max);
    return 0;
}
 
void sort(char name[][100], int n){
    char temp[100];
    int i, j, k;
    for(i=0; i<n-1; i++){
        k=i;
        for(j=i+1; j<n; j++){
            if(strcmp(name[k], name[j]) > 0) k=j;
        }
        if(k != i){
            strcpy(temp, name[i]);
            strcpy(name[i], name[k]);
            strcpy(name[k], temp);
        }
    }
 
}
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
char p[100][100];           //***问题，该处如果定义为指针数组，就不行了，输入一串单词后，enter之后程序就终止了
int main(){
    int c = 0;
    while(scanf("%s",p[c])!=EOF){           //记忆这种输入方法，可以换行，可以空格，EOF指ctrl+Z然后再enter
        c++;
    }
    for(int i = 0; i < c; i++){             //先把所有的字符都转化成大写
        for(int j = 0; j < strlen(p[i]); j++){
            p[i][j]=toupper(p[i][j]);
            if(!(p[i][j]>='A'&&p[i][j]<='Z'))           //去掉标点符号***********重点，满分了
            p[i][j]=0;
        }
    }
    char word[100]={0};         //定义一个数组，存放出现次数最多的单词
    int count = 0, tempt=0;
    // int flag = 0;
    for(int i = 0; i < c; i++){     //遍历数组
            for(int j = 0; j <c;j++){
                if(strcmp(p[i],p[j])==0)
                count++;                //记录出现的次数，因为要和自身比较，所以初始化为0
            }
            if(count>tempt){            //在第一次之后，比较本次出现多次的单词和上次出现多次的单词哪个次数更多\
                                        第一次就直接存入一个单词
                strcpy(word,p[i]);
                tempt=count;            //将出现次数更多的单词次数给tempt
            }
            if (count==tempt)           //表示本次检索的单词和存放的那个单词出现次数一样
            {
                if(word[0]<p[i][0]){        //那么久比较单词首字母的大小顺序
                   strcpy(word,p[i]);       //谁大存谁
                }
            }
            count=0;                    //相当于释放一下count，方便记录下一个检索单词出现次数
        
    }
    for(int j = 0; j <strlen(word); j++){   //将大写变为小写
//        if(!(word[j]>='a'&&word[j]<='z'))
        word[j]-='A'-'a';
    }
    char nword[100];            //防止字符数组中含有非字母元素
    for(int i=0;i<strlen(word);i++){
    	if(word[i]>='a'&&word[i]<='z')
    	nword[i]=word[i];
	}
    printf("%s %d",nword,tempt);
    return 0;
}
//********************问题：本题所用输入方式是否合适？如果两个单词之间没有用空格或者换行符分开，那么会被存放到一个数组里面。