
#include<stdio.h>
#include<string.h>
char a[100]; 
int main(){
	int k;
	scanf("%d",&k);
	while(k--)
	{
	scanf("%s",&a); 
	int n = strlen(a), j = 0, count = 0, m = n;
//	printf("%d\n",n);
	while(a[j] == a[m-1]){
		j++;
		m--;
		count++;
		if(j == n/2+1)
		break;
	}
	
	if( count == n / 2 + 1 )
	printf("Yes\n");
	else
	printf("No\n");
	}
	return 0;
} 
/*
#include<stdio.h>
#include<string.h>
char a[100];
int main()
{
	int i,j,len,cnt,k;
	scanf("%d",&k);
	while(k--)
	{
		cnt=0;
		scanf("%s",a);
		len=strlen(a);
		if(len%2==1)
		{
			for(i=0,j=len-1;i<len/2+1,j>len/2;i++,j--)
			{
				if(a[i]==a[j])
				cnt++;
			}
			if(cnt==len/2)
			printf("Yes\n");
			else
			printf("No\n");
		}
		else
		{
			for(i=0,j=len-1;i<=len/2-1,j>=len/2;i++,j--)
			{
				if(a[i]==a[j])
				cnt++;
			}
			if(cnt==len/2)
			printf("Yes\n");
			else
			printf("No\n");
		}	
	} 
	return 0;
}
*/
