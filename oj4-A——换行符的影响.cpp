#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int a, b, c, d,t;
		scanf("%d %d %d %d",&a, &b, &c, &d);	//本来想采用插入排序，但是后面有点乱，先写出来之后，根据调试的结果又改了一下 
		if(a>b){		//先比较a与b的大小 ,将较小的数字放在a的位置 
			t=b;
			b=a;
			a=t;
			t=c;	
		}
	//	printf("%d %d %d %d",a,b,c,d);
		if(b>c){		// 比较b与c的大小，同样的，谁小谁往前放 
			t=c;
			c=b;
			b=t;
			t=b;
		}
	//	printf("%d %d %d %d\n",a,b,c,d);
		if(a>b){		//比较完b与c的大小之后，再来比较一下a与b 
			t=b;
			b=a;
			a=t;
			t=d;	
		}
	//	printf("%d %d %d %d\n",a,b,c,d);
		if(c>d){		//然后比较c与d的大小，同样的，比较完之后，再次比较b与c、a与b的大小 
		 
			t=d;
			d=c;
			c=t;
			t=c;
		}
	//	printf("%d %d %d %d\n",a,b,c,d);
		if(b>c){
			t=c;
			c=b;
			b=t;
		//	t=b;
		}
		//printf("%d %d %d %d\n",a,b,c,d);
		if(a>b){
			t=b;
			b=a;
			a=t;
		//	t=d;	
		}
		printf("%d %d %d %d\n",a,b,c,d); 		//注意最后加一个\n，不然光标停在数字后面，会影响输出（一般无特殊要求最好都加上，结果不对时也想着检查这个问题） 
		
	}
	return 0;
} 
