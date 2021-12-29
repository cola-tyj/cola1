#include<stdio.h>
int main(){
	int a=0;
	int n,b=0,sum=0,su=0,s=0;
	scanf("%d",&n);
	if(n<=100&&n>=0)
{
    while (a<=n)
    {
    	sum+=a;
    	a++;
	 } 
	 printf("%d\n",sum);
	 do {
	 su+=b;
	 b++;
}while (b<=n);
    printf("%d\n",su);	
	for(a=0;a<=n;a++){
		s+=a; }
		printf("%d\n",s);	
	
}
	
	return 0;
} 
