// // #include<stdion.h> 
// // int main(){
// //     printf("I Love ")
// // }
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     int A;
//     long long int B; 
//     float C; 
//     char D;
//     scanf("%d", &A);
//     scanf("%lld", &B);
//     scanf("%f", &C);
//     scanf(" %c", &D);
//     printf("%d\n  %lld\n %0.2f\n %c\n", A, B, C, D );
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, N; 
    scanf("%d",&N);
    for(i=1;i<=10;i++){
        if(i%5==0){
            printf("%d Yes\n",i);
        }
        else{
            printf("%d No\n",i);
        }
    }
    return 0;
}