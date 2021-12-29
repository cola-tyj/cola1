//中值滤波
#include<stdio.h>
int main(){
    int w,n;
    while(scanf("%d %d",&w,&n)!=EOF){
        int a[n];           //初始化数组----oj系统不接受这样进行初始化，改成for循环进行初始化就可以了
        for(int i=0;i<n;i++){
            a[i]=0;
        }
        for(int i=0;i<n;i++){       //给数组赋值
            scanf("%d",&a[i]);
        }
        if(w%2==0)      //如果w是个偶数
    	printf("ERROR\n");
        else{
        int c[n];       //定义一个临时数组，存储未更改的数据
        for(int i=0;i<n;i++){
            c[i]=0;
        }
        for(int i=0;i<n;i++){
        	c[i]=a[i];
		}
        int m=0, count=w/2;     //count作为交换值，即组数中中间的那个值
        while(n-m>=w){          //确保窗口内有w个数
            int b[w];
            for(int i=m;i<m+w;i++){
                b[i]=c[i];      //赋值给b
            }
            int trans=b[0];
            for(int i=m;i<w+m;i++){     //进行排序
                for(int j=m;j<w+m;j++){
                    if(b[i]<b[j]){
                        trans=b[i];
                        b[i]=b[j];
                        b[j]=trans;
                    }
                }
            }
            a[count]=b[count];      //进行中值“过滤”
            m++;
            count++;                //count加1就会变为下一组的中值
        }
        for(int i=0;i<n-1;i++){
            printf("%d ",a[i]);         //printf出来
        }
        printf("%d\n",a[n-1]);             //最后一个单独处理，防止出现多余空格，添加换行符
    }
    }
    return 0;
}