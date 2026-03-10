//Dillon Bailey
// 10 March 2026
// ENGR 1405
// Garth Sorensen

//This program processes a sequence of integer
//values in the range of 1 through 10 read
//from the standard input device.

#include <iostream>
#include <iomanip>
using namespace std;

//calculate fun things

int main()
{
	int integer=0, total=0, count = 0, min = 10, max = 0;
	float average = 0.00;
	// Ask for numbers
	cout << "Greetings! I hope you are having a splended \n";
	cout << "day! Please enter numbers from 1-10 below. :)\n\n";
	
	//Start inserting and calculating
	cout << "Enter an integer (0 to quit): ";
	cin >> integer;

	//Insert and calculate the rest of the numbers
	while (integer != 0)
	{
		total += integer;
		if (integer < min)
		{
			min = integer;
		}
		if (integer > max)
		{
			max = integer;
		}
		count++;

		cout << "Enter another integer (0 to quit): ";
		cin >> integer;
	}

	//Calculate average
	average = total / static_cast<double>(count);

	//Output Maths
	cout << setprecision(2) << left << fixed;
	cout << endl;
	cout << "Count Min   Max   Average\n";
	cout << setw(6) << count;
	cout << setw(6) << min;
	cout << setw(6) << max;
	cout << setw(8) << average;
	cout << endl;
	
	return 0;
}