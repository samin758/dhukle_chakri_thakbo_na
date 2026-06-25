#include<stdio.h>
#define PI 3.14
int main(){
		
	long double r;

    scanf("%Lf", &r);

    printf("%.3Lf ", (2 * PI *r) );
    printf("%.3Lf", (PI * r * r));

    return 0;
}




#include<stdio.h>
#define PI 3.14
int main(){
		
	double r;

    scanf("%lf", &r);

    printf("%.3lf ", (2 * PI *r) );
    printf("%.3lf", (PI * r * r));

    return 0;
}
