//Brady Chiles
//5/23/17
//bmchiles@dmacc.edu

/*
Takes the total sales done by the company and multiples finds 58 percent (the total sales of the East Coast sales divison)
Then outputs the total of the East COast sales team.
*/

#include <iostream>
using namespace std;

int main()
{
	float salesPercent;	//Variables
	long int sales;
	double total;
	
	salesPercent = 0.58;  //Variable assignments
	sales = 8600000;
	total = 0;
	
	total = sales * salesPercent; //Arithmetic to find the total of the East Coast
	
	cout << total; //Output
	
	return 0;  //Retrun 0 to end program
	
}
