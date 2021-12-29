#include<stdio.h>
#include<math.h>
double is_prime(double x){
    double y = sqrt(x);
    return y;
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        double x;
        scanf("%lf",&x);
        if(x>=0){
        printf("%.2f\n",is_prime(x));
        }
        else
        {
            printf("ERROR\n");
        }   
    }
    return 0;
}