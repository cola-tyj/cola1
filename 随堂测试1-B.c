#include<stdio.h>
int a[10000];
is_prime(int x){
    int a, b=1;
    for (a = 2; a <=(x/2); a++){
        if (x%a==0){
            b=0;
        }
    }
    return b;
}
int main(){
    int n, m, k;
    int i, j, x;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&m,&k);
        for(i=0; i<k; i++){
            for(j=m+1;1; j++){
                if(is_prime(j)==1){
                	a[i] = j;
                	m=m+1;
                    break;
                }
                else
                m=m+1;
            }
        }
        for(i=0;i<k-1;i++){
        printf("%d ",a[i]);
        }
        printf("%d\n",a[k-1]);
    }
    return 0;
}

/*同一题目同学的做法：
#include <stdio.h>
#include <math.h>
int main(){
	int IsPrime(int x)
{
	 int i;
	 if (x <= 1)
 		 return 0;
	 for (i = 2; i <= (int)sqrt(x); i++)
 		 if (x % i == 0 && x != 2)
 		  return 0;
	 return 1;
}
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int m,k;
		int cnt = 0;
		scanf("%d %d",&m,&k);
		for(;cnt<k;){
			m++;
			if(IsPrime(m)){
				printf("%d ",m);
				cnt++;
			}
		}
		printf("\n");
		cnt=0;
	}
	return 0;
} 
*/