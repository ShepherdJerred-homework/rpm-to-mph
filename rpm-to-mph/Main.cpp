#include <iostream>
#include <iomanip>

// computeMPH
// Jerred Shepherd

using std::cout;
using std::cin;
using std::endl;

double PI = 3.141;
int INCHES_IN_MILE = 63360;

/**
    Prompts a user for the diameter of a HDD

    @return Diameter in inches
*/
double getDiameter() {
	double diameter;
	cout << "What is the diameter of the HDD (inches)" << endl;
	cin >> diameter;
	return diameter;
}

/**
    Prompts a user for the speed of a HDD

	@return Speed in RPM
*/
int getRpm() {
	int rpm;
	cout << "How fast is the HDD (RPM)" << endl;
	cin >> rpm;
	return rpm;
}

/**
    Prompts a user for a diameter, then converts it to circumference in miles

	@return Circumference of a HDD in miles
*/
double getCircumferenceInMiles() {
	double diameter = getDiameter();
	double diameterInMiles = diameter / INCHES_IN_MILE;
	double circumference = diameterInMiles * PI;
	return circumference;
}

/**
    Prompts a user for a speed, then converts it to RPH

	@return Rotations per hour of a HDD
*/
int getRotationsPerHour() {
	int rpm = getRpm();
	return rpm * 60;
}

/**
    Prints the speed of a HDD

	@param speed The speed of the HDD in miles
*/
void printSpeed(double speed) {
	cout << std::setprecision(2) << std::fixed << "This HDD runs at " << speed << " MPH" << endl << endl;
}

/**
    Prompts the user for a diameter and rotations, then outputs the speed in MPH
*/
void main() {
	do {
		double circumference = getCircumferenceInMiles();
		int rotationsPerHour = getRotationsPerHour();

		double speed = rotationsPerHour * circumference;
		printSpeed(speed);
	} while (true);
	system("pause");
}
