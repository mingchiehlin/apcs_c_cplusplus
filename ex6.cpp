#include <stdio.h>

int main() {
    int a, b, x, y, sum, diff, product, ratio, mod, plusplusx, xplusplus, minusminusx, xminusminus;
    a = 20;
    b = 7;
    x = a;
    y = b;
 
    // Calculating product
//    product = a * b;
    sum = x + y;
    diff = x - y;
    product = x * y;
    ratio = x / y;
    mod = x % y;
    plusplusx = ++x;
    xplusplus = x++;
    minusminusx = --x;
    xminusminus = x--;
 
    printf("sum = %d,", sum);
    printf("diff = %d,", diff);
    printf("Product = %d,", product);
    printf("ratio = %d,",ratio);
    printf("mod = %d,", mod);
    printf("plusplusx = %d,", plusplusx);
    printf("xplusplus = %d,", xplusplus);
    printf("minusminusx = %d,", minusminusx);
    printf(" xminusminus = %d.",  xminusminus);
    
    return 0;
}
