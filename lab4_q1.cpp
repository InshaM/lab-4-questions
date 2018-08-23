//Question :  Write a c++ program to enter length in centimeter and convert it into kilometer. 
// first include in the library
#include<iostream>
using namespace std;
//Write the main function
int main()
{
	float km , met , cent ; // Declaring the required variable.
	cout  <<  " What is the length of the wire in cm ? "  <<endl;
	cin  >> cent; //read the required value.
	cout << " The length of the wire is "<<cent<< " cm "<<endl;
	met = (cent/100);//Assigning the convertion from centimeter to meter.
	km = (met/1000);// Assigning the conversion from meter to kilometer.
	cout << " The length of the wire is "<<met<< " m "<<endl;
	cout << " The length of the wire is "<<km<< " km "<<endl;
	return 0;
}
