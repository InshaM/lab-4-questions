//Question :  Write a c++ program to enter temperature in celsius and convert it into farenheit.
// first include in the library
#include<iostream>
using namespace std;
//Write the main function
int main()
{
	float cel , faren ; // Declaring the required variable.
	cout  <<  " What is the room temperature of the room in degree celsius ? "  <<endl;
	cin >> cel ; //read the required value. 
	cout << " The temperature of the room is " <<cel<< " degree celsius " <<endl ;
	faren = ((cel*9/5)+32) ; // convering celsius scale to farenheit.
	cout << " The temperature of the room is " <<faren<< " degree farenheit " <<endl ;
	return 0;
}
