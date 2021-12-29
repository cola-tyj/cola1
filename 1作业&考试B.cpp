/*
#include<stdio.h>
int main(){
	int a[5],i;
	scanf("%d",&a);
	while(a[i]!=0){
		scanf("%d",&a);
	}
		int m1=a[1]-a[2];
		int m2=a[2]-a[3];
		int n1=a[1]/a[2];
		
		if(m1==m2){
			int b[5];
			for(i=0;i<5;i++){
				b[i]=a[5]+m1*i;
			}
			printf("case one\n");0
			printf("%d",b);
		}
		else{
			if(n1==n2){
			int b[5];
			for(i=0;i<5;i++){
				b[1]=a[5]/n;
				b[i]=b[i-1]/n;
			}
			printf("case two\n");
			printf("%d",b);
			}
        }
	return 0;

}
*/ 
//上面都是错的 
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    while(1){
    	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    	if(a==0&&b==0&&c==0&&d==0&&e==0)
    	break;
        if(e-d==d-c&&d-c==c-b&&c-b==b-a){
		int m=e-d;
		printf("case one\n%d %d %d %d %d\n",e+m,e+2*m,e+3*m,e+4*m,e+5*m);
	    }
		if(a*c==b*b&&b*d==c*c&&c*e==d*d){
		int n=e/d;
		printf("case two\n%d %d %d %d %d\n",e*n,e*n*n,e*n*n*n,e*n*n*n*n,e*n*n*n*n*n);
	    }
	    if(c==a+b&&d==c+b&&e==d+c){
	    	printf("case three\n%d %d %d %d %d\n",d+e,2*e+d,3*e+2*d,5*e+3*d,8*e+5*d);
		}
    }
    return 0;
}
