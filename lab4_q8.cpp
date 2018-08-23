//Question :  Write a c++ program to enter marks of five subjects ,their total,average , percentage .
// first include in the library
#include<iostream>
using namespace std;
//Write the main function
int main()
{
	float cs , bio , chem , phy ,maths , total , avg , perc ; // Declaring the required variable.
	cout << " What is your mark in Computer Science out of 100 ? " <<endl;
	cin >> cs ;//read the required value.
	cout << " What is your mark in Biology out of 100? " <<endl;
	cin >> bio ;//read the required value.
	cout << " What is your mark in Chemistry out of 100 ? " <<endl;
	cin >> chem ;//read the required value.
	cout << " What is your mark in Physics out of 100 ? " <<endl;
	cin >> phy ;//read the required value.
	cout << " What is your mark in Mathematics out of 100 ? " <<endl;
	cin >> maths ;//read the required value.
	total = (cs+bio+chem+phy+maths);
	cout << " Your total mark : " << total <<endl; // shows the total mark.
	avg = ( total/5);
	cout <<" Your average mark : " << avg << endl; // shows the average.
	perc = ((total/500)*100);
	cout <<" Your percentage : " << perc << endl; // shows your percentage.
	return 0 ;
}
