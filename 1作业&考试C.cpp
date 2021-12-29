#include<stdio.h>
#include<string.h>
int main(){
	int x = 0, j = 0;
	scanf("%d",&j);
	for(x = 0; x < j; x++) 
	{
	char a[100];
	scanf("%s",a);			//输入字符串 
	int i=0, n=0, count;
	while(a[n] != '\0'){			//计算出字符串的长度 
		n++;
	}
//	printf("%d\n",n);
	while(a[i] != 'S' || a[i+1] != 'C' || a[i+2] != 'U'){		//检索“SCU” 
		i++;
		if( i == n)
		//printf("No\n");
		break;
	}
//	printf("%d\n",i);
	int f, l, flag = 0;	
	int c = 0;		//用来判断SCU两边A的数量是否相等，解决那个bug		
	if(i == n)
	printf("NO\n");
	else if(a[i] != '\0' || a[i+4] != '\0'){		//判断SCU的前面是否有字符，如果有，判断是否是A
	for(f = 1; f < i; f++){
		if(a[f] != 'A'){ 
		flag = 1;
		break;
		} 
		else
		c++;			//记录SCU前面A的个数 
	}
	for(l = n-1; l >= i+3; l--){		//判断SCU后面的字符是否为A   数组第一个元素编号为0，所以l（last） 应该是n-1，而不是n 
		if(a[l] != 'A'){
		flag = 1;
		break;}
		else
		c--;		//判断SCU后面的个数是否与前面相等 
	}
		if(flag == 0 && c == 0)			//如果相等c为0  
	printf("YES\n");
	else
	printf("NO\n"); 
}
}
	return 0;			//本代码有一个bug，当输入为SCUA时，输出为yes 
} 
