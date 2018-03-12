/*
This program takes input for the length and width of two rectangles and finds their area.
It will then determine which of the two areas is greater or if they're equal.
*/
/*
Brady Chiles
6/1/17
bmchiles@dmacc.edu
*/

#include <iostream>
using namespace std;

int main()
{

//Variables
	float length1;
	float length2;
	float width1;
	float width2;
	float area1;
	float area2;
	
//Introductory statement
	cout << "You will be asked to enter the length and width of 2 rectangles" << endl << endl;
	
//Input length 1
	cout << "Please enter the length of rectangele 1" << endl;
	cin >> length1;

//Input width 1	
	cout << "Please enter the width of rectangele 1" << endl;
	cin >> width1;

//Area calculation and output for rectangle 1	
	area1 = length1 * width1;
	cout << "The area of rectagle 1 is: " << area1 << endl << endl;

//Input for length 2	
	cout << "Please enter the length of rectangele 2" << endl;
	cin >> length2;

//Input for width 2	
	cout << "Please enter the width of rectangele 2" << endl;
	cin >> width2;

//Area calculation and output for rectangle 2	
	area2 = length2 * width2;
	cout << "The area of rectagle 2 is: " << area2 << endl << endl;

//If else statement to determine which rectagle is greater or if they're equal

//Rectangle 1 greater		
	if(area1 > area2)
		cout << "Rectangle 1 is greater." << endl;
//Rectangle 2 greater
	else if(area2 > area1)
		cout << "Rectangle 2 is greater." << endl;
//Equal
	else
		cout << "The rectangles are equal." << endl;
		
	

	return 0;
}
