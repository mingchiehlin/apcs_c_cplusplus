#include <iostream>
using namespace std;

int main()
{
	float r, area;
	printf("please input a radius: \n");
	scanf("%f", &r);
	printf("The radius is %f \n", r);
	if (r >= 0.0){
	    area=3.14159*r*r;
		printf("The area of the circle is %lf \n", area);
	}else {
		printf("A radius should be greater than 0! \n");
	}
	cout<<"Finished!";
	return 0;
}
