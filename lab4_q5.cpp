//Write a c++ program to enter two angles of a triangle and find the third angle.
//include in the library
#include <iostream>
//Write the main function
using namespace std;
int main() 
{
	float angp , angq , angr; // Declaring the variables.
	cout << " What are the two angles of the triangles ? "  <<endl;
	//read the required angles.
	cin >> angp;
	cin >> angq;
	cout << " The two angles of the triangle PQR are " << angp <<" and "  << angq << "." <<endl ;
	angr = (180 - (angp + angq )); //Assigning the third angle.
	cout << " The third angle of the triangle is " << angr  <<endl ;
	return 0 ;
}
