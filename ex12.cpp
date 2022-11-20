#include <iostream>
using namespace std;

int main()
{
	double r, area, circumference;
	printf("please input a radius: \n");
	scanf("%lf", &r);
	printf("The radius is %lf \n", r);
	if (r >= 0.0){
	    area=3.14159*r*r;
	    circumference=2*3.14159*r;
		printf("The area of the circle is %lf \n", area);
		printf("The circumference of the circle is %lf \n",  circumference);
	}else {
		printf("A radius should be greater than 0! \n");
	}
	cout<<"Finished!";
	return 0;
}
