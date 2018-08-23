//Question :  Write a c++ program to enter base and height of a triangle and find its area
// first include in the library
#include<iostream>
using namespace std;
//Write the main function
int main()
{
	float base,height,area ; // Declaring the required variable.
	cout  <<  " What is the base of the triangle ? "  <<endl;
	//read the required value.
	cin >> base ;
	cout << " What is the height of the triangle ?" <<endl;
	//read the required value.
	cin >> height ;
	cout << " The base and the height of the triangle are " << base << " and " << height << " respectively. " <<endl;
	area = (( base*height )/2);//calculating the area
	cout << " The area of the triangle is " << area <<endl; 
	return 0;
}
