#include <iostream>
using namespace std;

int main() {
    int i;
    printf("Please enter the year: ");
    scanf("%d", &i);
if (i%4==0){
    printf("It is a Leap Year!");
    }    
else{
    printf("It is not a Leap Year!");
    }
    return 0;
}
