//本题心得：在通过s[]比较scores时注意不仅要交换infor[]还要交换s[]，另外，比较首字母时要用name[0]不然比较的是名字整体
//当最低分数相同人数和最高分数相同人数相等时，不一定代表所有人的成绩都相等。
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Scores               //定义结构体来存储数据
{
    char name[10];
    char identity[19];
    char score[4];
}Scores;
int main(){
    int n;
    int count1=0,count2=0,count=0;
    scanf("%d",&n);
    Scores infor[n];                //n组数据需要n个结构体，所以用结构体数组来存储
    for(int i=0;i<n;i++){           //进行数据的输入
        scanf("%s",infor[i].name);
        scanf("%s",infor[i].identity);
        scanf("%s",infor[i].score);
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
    Scores trans=infor[0];                  //此处定义一个中间变量，来进行排序
    int g=s[0]; 
//    printf("%s %s\n",trans.name,trans.identity);
    for(int j=0;j<n;j++){                   //采用冒泡排序法，通过两个循环实现
        for(int i=0;i<n-1;i++){
            if(s[i]<s[i+1]){                //这里成绩采用的转化为int型的数组来进行比较
                trans=infor[i+1];
                infor[i+1]=infor[i];
                infor[i]=trans;
                g=s[i+1];
                s[i+1]=s[i];
                s[i]=g;
            }
        }
    }
    for(int i=0;i<n-1;i++){                //从头开始判断是否出现多个最高分
        if(strcmp(infor[i].score,infor[i+1].score)==0)
        count1++;
        else
        break;
    }
    for(int i=n-1;i>0;i--){             //从末尾开始判断是否出现多个最低分
        if((strcmp(infor[i].score,infor[i-1].score)==0)&&s[i]!=0)
        count2++;
        else
        break;
    }
    Scores trans2 = infor[0];       //同理，用来排序的中间变量
    if((count1==count2!=0)&&(count1+count2)!=count){             //说明所有同学分数一样高
        for(int j =0; j<n; j++){
            for(int i=0;i<n-1;i++){
                if(infor[i].name>infor[i+1].name){      //按照姓名典序降序排序
                    trans2 = infor[i+1];
                    infor[i+1]=infor[i];
                    infor[i]=trans2;
                	g=s[i+1];
                	s[i+1]=s[i];
                	s[i]=g;
                }
            }
        }
    }
    else if(count1>0){              //有多个最高分
        for(int j =0; j<n; j++){
            for(int i=0;i<n-1;i++){
                if(infor[i].name[0]>infor[i+1].name[0]){      //降序
                    trans2 = infor[i+1];
                    infor[i+1]=infor[i];
                    infor[i]=trans2;
                    g=s[i+1];
                	s[i+1]=s[i];
                	s[i]=g;
                }
            }
        }
    }
    if(count2>0){               //多个最低分
        for(int j =0; j<n; j++){
            for(int i=0;i<n-1;i++){
                if(infor[i].name[0]>infor[i+1].name[0]){            //仍采用降序，这样最后一个人便是姓名典序最大的
                    trans2 = infor[i+1];
                    infor[i+1]=infor[i];
                    infor[i]=trans2;
                    g=s[i+1];
                	s[i+1]=s[i];
                	s[i]=g;
                }
            }
        }
    }
/*
    for(int i=0;i<n;i++){       //没有看清题目，把所有同学全部输出了
        if(s[i]!=0){
            printf("%s %s\n",infor[i].name,infor[i].identity);
        }
    }
*/
    for(int i=0;i<n;i++){
        if(s[i]!=0){                //输出成绩最高者
            printf("%s %s\n",infor[i].name,infor[i].identity);
            break;
        }
    }
   for(int i=n-1;i>=0;i--){
        if(s[i]!=0){            //输出成绩最低者
            printf("%s %s\n",infor[i].name,infor[i].identity);
            break;
        }
    }
    return 0;
}


/*看助教是如何排序的：
	for(i = 1; i <= n; i++){
		for(j = i+1; j <= n; j++){
			if(strcmp(a[i].score, "n/a") != 0 && strcmp(a[j].score, "n/a") != 0 && strcmp(a[i].score, a[j].score) == 0){ //分数相当判断姓名
				if(strcmp(a[i].name, a[j].name) > 0){
					//交换 
					struct stu t; 
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
				
			}else if(strcmp(a[i].score, "n/a") != 0 && strcmp(a[j].score, "n/a") != 0 && atoi(a[i].score) < atoi(a[j].score)){
				//交换  atoi将字符串转换成int 
					struct stu t; 
					t=a[i];
					a[i]=a[j];
					a[j]=t;
			}
			
		}
	}
	//printf("%s %s\n",a[n].name,a[n].id);
	
	i = 1;
	while(i <= n) {
		if(strcmp(a[i].score, "n/a") != 0){
			printf("%s %s\n",a[i].name,a[i].id);
			break;
		}
		i++;
	}
	
	i = n;
	while(i >= 1) {
		if(strcmp(a[i].score, "n/a") != 0){
			printf("%s %s\n",a[i].name,a[i].id);
			break;
		}
		i--;
	}
*/