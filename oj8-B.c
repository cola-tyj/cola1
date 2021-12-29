/*失败的代码
#include<stdio.h>
int a[100];
int main(){
    int n, k;
    int i, cnt = 0, flag = 0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&k);
        for(i=0;i<k;i++){
            scanf("%d",&a[i]);
        }
        int count = 0, min = a[0], sedmin = a[0];
        for(i=0;i<k;i++){
            if(min > a[i]){
                min = a[i];

            }

        }
        for(i=0;i<k-1;i++){
            if(min == sedmin){
                sedmin = a[i+1];
            }
            else 
            break;
        }
        for(i=0;i<k;i++){
            if(sedmin > min && sedmin > a[i]){
                sedmin = a[i];
                flag = 1;
            }
        }
        if(flag == 0) {
            printf("ERROR\n");
        }
        else
        {
            printf("%d\n",sedmin);
        }
        flag = 0;
    }
    return 0;
}
*/
#include<stdio.h>
int a[1000];
int main(){
    int n, k;
    int i, j, cnt, count = 0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&k);
        for(i = 0; i < k; i++){
            scanf("%d",&a[i]);
        }
        if(k == 1)
        printf("ERROR\n");
        else{
            for(i=0;i<k;i++){
                for(j=0;j<k-1;j++){
                    if(a[j]>a[j+1]){
                        int g=a[j+1];
                        a[j+1] = a[j];
                        a[j] = g;
                    }
                }
            }
        //    for(i=0;i<k;i++){
        //        printf("%d  ",a[i]);
        //    }
            for(i=0;i<k-1;i++){
                if(a[i+1] == a[i])
                count++;
            }
            if(count == k-1){
            printf("ERROR\n");
            count = 0;
            }
            else{
                for(i=0;i<k;i++){
                    if(a[i+1]>a[i]){
                    cnt = i+1;
                    break;
                    }
                }
                printf("%d\n", a[cnt]);
                cnt = 0;
            }
        }
    }
    return 0;
}