#include <iostream>
using namespace std;

int main() {
    int i;
    printf("Please enter the grade: ");
    scanf("%d", &i);
if (i<60){
    printf("Your grade is E! \n");
    }
    else if ((i>=60)&&(i<70)){
    printf("Your grade is D! \n");
    }
    else if ((i>=70)&&(i<80)){
    printf("Your grade is C! \n");
    }
    else if ((i>=80)&&(i<90)){
    printf("Your grade is B! \n");
    }
    else if ((i>=90)&&(i<101)){
    printf("Your grade is A! \n");
    }
    else {
    printf("The number input is not right!");
    }
    return 0;
}
