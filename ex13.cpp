#include <iostream>
using namespace std;

int main() {
    int i;
    printf("Please enter an number between 1~7: ");
    scanf("%d", &i);
    
    switch (i) {
    case 1:
        printf("This is Monday. \n");
        break;
    case 2:
        printf("This is Tuesday. \n");
        break;
    case 3:
        printf("This is Wednesday. \n");
        break;
    case 4:
        printf("This is Thursday. \n");
        break;
    case 5:
        printf("This is Friday. \n");
        break;
    case 6:
        printf("This is Saturday. \n");
        break;
    case 7:
        printf("This is Sunday. \n");
        break;
    default:
        printf("Error! The number input is not correct!");
    }

    return 0;
}
