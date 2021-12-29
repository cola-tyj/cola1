#include<stdio.h>
#include<string.h>
char str[80];
int main(){
    int n;
    while(gets(str)){               //学习gets的用法，以及在while里面用是什么作用，思考为什么scanf不行
        n = strlen(str);
    for (int i = 0; i < n; i++) {
        if(str[i] >= 65 && str[i] <= 90){           //A的asc码为65，Z为90，a为92
            str[i] = 155-str[i];
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    break;
    }
    return 0;
}