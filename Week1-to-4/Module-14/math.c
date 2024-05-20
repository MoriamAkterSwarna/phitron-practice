#include<stdio.h>
#include<math.h> 
#include<stdlib.h>

int main (){
    double x; 
    scanf("%lf", &x); 
    int ans = ceil(x); 
    int flr = floor(x); 
    int rnd = round(x); 

    int y ; 
    scanf("%d", &y); 
    int sqart= sqrt(y); 
    printf("%d %d %d", ans, flr, rnd); 
    printf("%d", sqart); 


    int a,b; 
    scanf("%d %d", &a, &b); 
    int ans1= pow(a,b); 
    printf("%d\n", ans1); 
    double a1,b1; 
    scanf("%lf %lf", &a1, &b1); 
    int ans2= pow(a,b); 
    printf("%lf\n", ans2); 

    int z; 
    scanf("%d", &z); 
    int res = abs(z); 

    printf("%d", res)


}