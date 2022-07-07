#include <iostream>
using namespace std;

int main()
{
	double redius;                   //declaration of variable of type double
	const double PI = 3.14159;        //declaration of constant double
	//contant must be defined at the same line

	//step 1: read the radius
	redius = 20;

	//step 2: compute the area
	double area = redius * redius * PI;

	//step 3: display the area 
	cout << "the area is ";
	cout << area << endl;
}