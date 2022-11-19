#include <stdio.h>

int main() {
    int a, b, x, y, sum, diff, product, ratio, mod, plusplusx, xplusplus, minusminusy, yminusminus;
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
    minusminusy = --y;
    yminusminus = y--;
 
    printf("sum = %d,", sum);
    printf("diff = %d,", diff);
    printf("Product = %d,", product);
    printf("ratio = %d,",ratio);
    printf("mod = %d,", mod);
    printf("plusplusx = %d,", plusplusx);
    printf("xplusplus = %d,", xplusplus);
    printf("minusminusy = %d,", minusminusy);
    printf(" yminusminus = %d.",  yminusminus);
    
    return 0;
}

