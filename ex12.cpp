#include <iostream>
using namespace std;

int main()
{
	double r, area;
	printf("please input a radius: \n");
	scanf("%lf", &r);
	printf("The radius is %lf \n", r);
	if (r >= 0.0){
	    area=3.14159*r*r;
		printf("The area of the circle is %lf \n", area);
	}else {
		printf("A radius should be greater than 0! \n");
	}
	cout<<"Finished!";
	return 0;
}
