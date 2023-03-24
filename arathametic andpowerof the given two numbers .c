#include <math.h>
#include <stdio.h>

int main() {
    double m, n, result;
    int add,sub,mul;
    float div;
    
    printf("Enter a base number: ");
    scanf("%lf", &m);
    printf("Enter an exponent: ");
    scanf("%lf", &n);
    add=m+n;
    sub=m-n;
    mul=m+n;
    div=m/n;
    printf("addition :%d\n",add);
    printf("subtraction :%d\n",sub);
    printf("multiplication :%d\n",mul);
    printf("division :%f\n",div);
    

    // calculates the power
    result = pow(m, n);
    printf("%.1lf^%.1lf = %.2lf", m, n, result);
    return 0;
}
