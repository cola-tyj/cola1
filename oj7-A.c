#include<stdio.h>
#include<stdlib.h>
int is_prime(int a, int b, int c) {                                 //该函数用于计算两个日期的时间差，此处没有判断是否为闰年
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sum = 0;
    if(a == c){
        if( a == b)
        sum = 0;
        else if(a>b){
        for (int i = b; i < a - 1;i++){
        sum += month[i];
        }
        sum = sum - b + a;}
        else{
            for (int i = a; i <b - 1;i++){
                sum += month[i];
            }
            sum = sum - b + a;
        }
    }
    if ( a > c){
    sum = (a - c)*365; 
    for (int i = 0; i < b - 1; i++){
        sum += month[i];
    }
    for (int i = 0; i < a - 1; i++){
        sum -= month[i];
    }
    sum = sum + c - b;
    }
    if(a < c){
        sum = (c - a)*365;
        for (int i = 0 ;i < a - 1; i++){
            sum += month[i];
        }
        for (int i = 0; i < b - 1; i++){
            sum -= month[i];
        }
        sum = sum + b - c;
    }
    return sum;
}
int is_prime2(int a){                   //该函数来判断是否为闰年
    int cnt = 0, cnt2 = a;
    if((cnt2 % 4 ==0 && cnt2 % 100 != 0)||cnt2 % 400 == 0)
    cnt = 1;
    return cnt; 
}
int main(){
    int m, d, y;
    scanf("%2d/%2d/%2d",&m, &d, &y);
    int Sum = is_prime(m , d, y);       //两个日期之间除闰年数之外的差值
//    char str[12][100]={"January","February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    if(m>12 || Sum == 0){                   //此时，输入的数据只是代表一个日期，所以直接输出
    	switch (d){
		case 1 : printf("January"); break;
		case 2 : printf("February"); break;
		case 3 : printf("March"); break;
		case 4 : printf("Apirl"); break;
		case 5 : printf("Mat"); break;
		case 6 : printf("June"); break;
		case 7 : printf("July"); break;
		case 8 : printf("August"); break;
		case 9 : printf("September"); break;
		case 10 : printf("October"); break;
		case 11 : printf("November"); break;
		case 12 : printf("December"); break;
	}
    //    for(int i = 0; i < 15; i++){
    //    printf("%c",str[d-1][i]);
    //    }
        printf(" %d, %d\n",y, 2000+m);
    }
    else if(d>12 || y>31 ){
        switch (m){
		case 1 : printf("January"); break;
		case 2 : printf("February"); break;
		case 3 : printf("March"); break;
		case 4 : printf("Apirl"); break;
		case 5 : printf("Mat"); break;
		case 6 : printf("June"); break;
		case 7 : printf("July"); break;
		case 8 : printf("August"); break;
		case 9 : printf("September"); break;
		case 10 : printf("October"); break;
		case 11 : printf("November"); break;
		case 12 : printf("December"); break;
	}
    //    for(int i = 0; i < 100 - 1; i++){
    //    printf("%c",str[m-1][i]);
    //    }
        printf(" %d, %d\n",d,2000+y);
    }
    else{                   //如果可以表示为两个日期，那么进行以下计算
        int count = 0;
        if(m<y){             
            for(int i = 2000+m+1; i <2000+y; i++){            //判断两个日期年份之间是否有闰年
                if(is_prime2(i))
                count++;                                    //有的话计数一下
            }
            if(is_prime2(2000+y) && m>2)
            count++;
            if(is_prime2(2000+m) && d>2)                //日期小的那一年如果已经度过了2月且为闰年，需要再多减去一天
            count--;
        }
        if(m > y ){             //先在是另一种情况，比较二者的大小是用来判断那种表示方式下的时间更大
            for(int i = 2000+y+1; i < 2000+m; i++){
                if(is_prime2(i))                //考虑该年份是否度过2月
                count++;
            }
            if(d>2 && is_prime2(2000+m))
            count++;
            if(m>2 && is_prime2(2000+y))
            count--;
        }
        if(m == y){
            if(is_prime2(m+2000)){
                if(d>2 && m>2)
                count = 0;
                if((d>2 && m <= 2) || (m>2 && d<=2))
                count++;
            }
        }
        printf("%d",Sum+count);     //最后输出结果
    }
    return 0;
}
/*----------------------------------------------------------------
switch case;语句可以用数组指针来代替（ ）
如下：
const char*month[13]={
    "", "January", "February", "March", "April","May", "June", "July","August", "September", "October", "November","December",
};
*/


/*这是用字符数组存储月份的代码，输出时有问题
#include<stdio.h>
#include<stdlib.h>
int is_prime(int a, int b, int c) {                                 //该函数用于计算两个日期的时间差，此处没有判断是否为闰年
    int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int sum = 0;
    if(a == c){
        if( a == b)
        sum = 0;
        else if(a>b){
        for (int i = b; i < a - 1;i++){
        sum += month[i];
        }
        sum = sum - b + a;}
        else{
            for (int i = a; i <b - 1;i++){
                sum += month[i];
            }
            sum = sum - b + a;
        }
    }
    if ( a > c){
    sum = (a - c)*365; 
    for (int i = 0; i < b - 1; i++){
        sum += month[i];
    }
    for (int i = 0; i < a - 1; i++){
        sum -= month[i];
    }
    sum = sum + c - b;
    }
    if(a < c){
        sum = (c - a)*365;
        for (int i = 0 ;i < a - 1; i++){
            sum += month[i];
        }
        for (int i = 0; i < b - 1; i++){
            sum -= month[i];
        }
        sum = sum + b - c;
    }
    return sum;
}
int is_prime2(int a){                   //该函数来判断是否为闰年
    int cnt = 0, cnt2 = a;
    if((cnt2 % 4 ==0 && cnt2 % 100 != 0)||cnt2 % 400 == 0)
    cnt = 1;
    return cnt; 
}
int main(){
    int m, d, y;
    int Sum = is_prime(m , d, y);       //两个日期之间除闰年数之外的差值
    scanf("%2d/%2d/%2d",&m, &d, &y);
    char str[12][100]={"January","February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    if(m>12 || Sum == -1){                   //此时，输入的数据只是代表一个日期，所以直接输出
        for(int i = 0; i < 10; i++){
        printf("%c",str[d-1][i]);
        }
        printf(" %d, %d\n",y, 2000+m);
    }
    else if(d>12 || y>31 ){
        for(int i = 0; i < 10;i++){
        printf("%c",str[m-1][i]);
        }
        printf("%d, %d\n",d,2000+y);
    }
    else{                   //如果可以表示为两个日期，那么进行以下计算
        int count = 0;
        if(m<y){             
            for(int i = 2000+m+1; i <2000+y; i++){            //判断两个日期年份之间是否有闰年
                if(is_prime2(i))
                count++;                                    //有的话计数一下
            }
            if(is_prime2(2000+y) && m>2)
            count++;
            if(is_prime2(2000+m) && d>2)                //日期小的那一年如果已经度过了2月且为闰年，需要再多减去一天
            count--;
        }
        if(m > y ){             //先在是另一种情况，比较二者的大小是用来判断那种表示方式下的时间更大
            for(int i = 2000+y+1; i < 2000+m; i++){
                if(is_prime2(i))                //考虑该年份是否度过2月
                count++;
            }
            if(d>2 && is_prime2(2000+m))
            count++;
            if(m>2 && is_prime2(2000+y))
            count--;
        }
        if(m == y){
            if(is_prime2(m+2000)){
                if(d>2 && m>2)
                count = 0;
                if((d>2 && m <= 2) || (m>2 && d<=2))
                count++;
            }
        }
        printf("%d",Sum+count+1);     //最后输出结果
    }
    return 0;
}
*/