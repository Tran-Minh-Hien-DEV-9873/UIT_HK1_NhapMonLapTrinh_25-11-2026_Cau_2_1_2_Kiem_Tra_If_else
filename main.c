#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Câu 2: ----------------------------------------------------------------------------
	
    double a, b, c;
    double CV, P, S;

    printf("Nhap canh a (a > 0): ");
    scanf("%lf", &a);

    printf("Nhap canh b (b > 0): ");
    scanf("%lf", &b);

    printf("Nhap canh c (c > 0): ");
    scanf("%lf", &c);

    if(a + b > c && a + c > b && b + c > a)
    {
        CV = a + b + c;

        P = CV / 2;

        S = sqrt(P *(P - a) *(P - b) *(P - c));

        printf("Chu vi: %0.2f \n", CV);
        printf("Dien tich: %0.2f \n", S);
    }
    else
    {
        printf("Tam giac do khong dc xem la hop le");
    }

	return 0;
}
