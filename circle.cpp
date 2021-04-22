#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
	double radius;
	cout << "Enter radius: ";
	//Add code to read user input and store in variable radius
    cin >> radius;
	//Calculate the area of the circle
    double a;
    a = 3.14*(radius*radius);
	double c = 2*3.14*radius;
	cout << "The area of a circle with radius " << radius << " is: " << a << endl;
    cout << "The circumfrence is: " << c << endl;
	return 0;
}
