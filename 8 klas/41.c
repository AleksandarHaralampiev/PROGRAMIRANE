//ax^2+bx+c=0
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int urav(float a, float b, float c, float *px1, float *px2) {
    if(a == 0){
        if(b == 0) {
            if(c == 0) {
                return 3;
            }
            else {
                return 1;
            }
        }
        else {
            *px1 = -c/b;
            return 4;

        }
    }
    float D = b * b - 4 * a * c;
    if(D > 0) {
        *px1 = (-b + sqrt(D)) / (2 * a);
        *px2 = (-b - sqrt(D)) / (2 * a);
        return 5;
    }
    else if(D == 0) {
        *px1 = (-b + sqrt(D)) / (2 * a);
        return 4;
    }
    else {
        return 2;
    }

}


int main() {
    float a, b, c;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    float x1, x2;
    float *px1 = &x1;
    float *px2 = &x2;
    int sl = urav(a, b, c, px1, px2);
    switch(sl) {
        case 1:
            printf("Nqma reshenie");
            break;
        case 2:
            printf("Nqma realni koreni");
            break;
        case 3:
            printf("Vsqko x e reshenie");
            break;
        case 4:
            printf("%.2f", *px1);
            break;
        case 5:
            printf("x1 = %.2f, x2 = %.2f", *px1, *px2);
            break;

    }
}