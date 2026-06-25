//Clarification: the 4 number problem mentioned in cpsacademy is wrong. I solved the problem mnentioned in codeforces


#include<stdio.h>
int main(){
     
     long long a, b;
     
     if(scanf("%lld%lld", &a, &b)==2){
     
     printf("%lld + %lld = %lld\n", a, b, a + b);
     printf("%lld * %lld = %lld\n", a, b, a * b);
     printf("%lld - %lld = %lld\n", a, b, a - b);
     }
     return 0;
}
