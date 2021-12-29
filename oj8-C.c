#include <stdio.h>
#include <math.h>
int main()
{
    int n,m;
    scanf("%d",&m);
    while(m--)            //输入不为EFO
    {
        scanf("%d",&n);
        int i,j,flag=1;
        for(i=2;i<=sqrt(n);i++)             //
        {
            if(n%i==0)
            {
                
                if(flag)                //flag用来判断需不需要打印*
                {                        
                    flag=0;
                }
                else
                {
                    printf("*");                    
                }
                printf("%d",i);             //打印出因数
                int count=0;
                while(n%i==0)           //i能够被整除，也就是说是n的一个因数
                {
                    count++;            //count来记录n可以除以i除几次
                    n/=i;
                }
                if(count>1)
                {
                 for(j=1;j<count;j++)
                    {
                    printf("*%d",i);
                    }   
                }
            }
        }
        if(n>1)                 //在n除以多次i之后，如果n还大于1而不是等于1，说明没有其他因数了，只剩下本身
        {
            if(flag)            //还是用flag来判断*的输出，如果上述循环中if不成立，即本身就是最小的因数了
            {
                printf("%d",n);     //那么就直接打印
            }
            else            //否则，是进行了上述操作之后的，是一串数字的最后一个，需要打印出*
            {
                printf("*%d",n);
            }
        }
        printf("\n");
    }
    return 0;
} 