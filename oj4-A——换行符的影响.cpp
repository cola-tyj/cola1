#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int a, b, c, d,t;
		scanf("%d %d %d %d",&a, &b, &c, &d);	//��������ò������򣬵��Ǻ����е��ң���д����֮�󣬸��ݵ��ԵĽ���ָ���һ�� 
		if(a>b){		//�ȱȽ�a��b�Ĵ�С ,����С�����ַ���a��λ�� 
			t=b;
			b=a;
			a=t;
			t=c;	
		}
	//	printf("%d %d %d %d",a,b,c,d);
		if(b>c){		// �Ƚ�b��c�Ĵ�С��ͬ���ģ�˭С˭��ǰ�� 
			t=c;
			c=b;
			b=t;
			t=b;
		}
	//	printf("%d %d %d %d\n",a,b,c,d);
		if(a>b){		//�Ƚ���b��c�Ĵ�С֮�������Ƚ�һ��a��b 
			t=b;
			b=a;
			a=t;
			t=d;	
		}
	//	printf("%d %d %d %d\n",a,b,c,d);
		if(c>d){		//Ȼ��Ƚ�c��d�Ĵ�С��ͬ���ģ��Ƚ���֮���ٴαȽ�b��c��a��b�Ĵ�С 
		 
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
		printf("%d %d %d %d\n",a,b,c,d); 		//ע������һ��\n����Ȼ���ͣ�����ֺ��棬��Ӱ�������һ��������Ҫ����ö����ϣ��������ʱҲ���ż��������⣩ 
		
	}
	return 0;
} 
