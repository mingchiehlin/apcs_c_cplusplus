#include <iostream>
using namespace std;

int main() {
    int i, j;
    printf("Please enter the year and the month: ");
    scanf("%d %d", &i, &j);
if (i%4==0){
    printf("It is a Leap Year! \n");
    if ((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12)){
    printf("The number of days in the month is 31.");
    }
    else if ((j==4)||(j==6)||(j==9)||(j==11)){
    printf("The number of days in the month is 30.");
    }else {
    printf("The number of days in the month is 29.");
    }
    }    
else{
    printf("It is not a Leap Year! \n");
    if ((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12)){
    printf("The number of days in the month is 31.");
    }
    else if ((j==4)||(j==6)||(j==9)||(j==11)){
    printf("The number of days in the month is 30.");
    }else {
    printf("The number of days in the month is 28.");
    }
    }
    return 0;
}
