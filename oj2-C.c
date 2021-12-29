#include<stdio.h>
#include<string.h>
int a[100][100];
char s[5];
int main(){
    int k, v, win;
    int i, j, m, n;
    int d;
    scanf("%d %d",&m,&n);   //用数组来存储数据
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&d);
    while(d--){
    scanf("%s",s);   //判断是哪一个命令
    if(strcmp(s,"SR") == 0){
        scanf("%d %d",&k,&v);         //继续输入命令
        for(i=0;i<n;i++){
            win=a[k-1][i];               //先将要替换的任意一行数据存储到win里面
            a[k-1][i]=a[v-1][i];               //然后把另一行放进来
            a[v-1][i]=win;                 //通过win把刚刚那行的数据替换过去
        }
    }
    if(strcmp(s,"SC") == 0){
        scanf("%d %d",&k,&v);
        for(j=0;j<n;j++){
            win=a[j][k-1];                //如果是交换列，思路和交换行一致
            a[j][k-1]=a[j][v-1];
            a[j][v-1]=win;
        }
    }
    if(strcmp(s,"DR") == 0){
        scanf("%d",&k);
        for(i=k-1;i<m-1;i++){
            for(j=0;j<n;j++){
                a[i][j]=a[i+1][j];          //删除第k行：依次将k以下的行中数据存储到上一行中，实现删除
            }
        }
        m--;
    }
    if(strcmp(s,"DC") == 0){
        scanf("%d",&k);
        for(i=k-1;i<n-1;i++){
            for(j=0;j<m;j++){
                a[j][i]=a[j][i+1];              //同理，一个不好的地方就是这里仍然采用了i代表列，使用j比较恰当
            }
        }
        n--;
    }
    if(strcmp(s,"IR") == 0){
        scanf("%d",&k);
        for(i=m;i>k-1;i--){
            for(j=0;j<n;j++){
                a[i][j]=a[i-1][j];          //同样的，先将k行以及k行以下的行中数据向下移动，最后使第k行数据赋值为0
            }
        }
        for(j =0;j<n;j++){
            a[k-1][j]=0;
        }
        m++;
    }
    if (strcmp(s,"IC") == 0){
        scanf("%d",&k);
        for(j=n;j>k-1;j--){
            for(i=0;i<m;i++){
                a[i][j]=a[i][j-1];              //同理
            }
        }
        for(i=0;i<n;i++){
            a[i][k-1]= 0;
        }
        n++;
    }
    }
	for (i=0; i<m;i++) //打印操作后的表格 
	{
		for (j=0;j<n-1;j++)
		{
			printf("%d ",a[i][j]); // 每一行的前c-1个数 
		}
		printf("%d\n",a[i][n-1]); // 每一行最后一个数单独打印，并换行 
    }
    
    return 0;
}