#include<stdio.h>
#include<string.h>
char a[200];
int main(){
	int n;
	scanf("%d\n",&n);
	fgets(a, 200, stdin);
	int cnt = strlen(a);
//	printf("%d\n",cnt);
	for(int i = cnt-2; i >= 0; i--){
		a[i+n] = a[i];
	}
	for(int j = 0 ; j <= n-1; j++){
		a[n-1-j] = a[cnt-2+n-j];
		a[cnt-2+n-j] = 0;
	}
//	printf("\n");		//感觉样例输出有一个空行，但是注释掉此行依然是零分 
	printf("%s",a);
	return 0; 
}
