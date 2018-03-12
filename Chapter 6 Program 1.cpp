// Brady Chiles
// 6/14/17
// bmchile@dmacc.edu

/*
This program will accept the input of car accidents in each region from the user.
It will then find the region with the lowest cra accidents.
*/
#include <iostream>
#include <string>
using namespace std;

	int getNumAccidents(string);
	void findLowest(int, int, int, int, int);	
int main()
{

	//Variables
	const string north = "North";
	const string south = "South";
	const string east = "East";
	const string west = "West";
	const string central = "Central";
	int northacc = 0;
	int southacc = 0;
	int eastacc = 0;
	int westacc = 0;
	int centralacc = 0;
	
	//Function calls to get the input of accidents in each region. Calls getNumAccidents
	northacc = getNumAccidents(north);
	southacc = getNumAccidents(south);
	eastacc = getNumAccidents(east);
	westacc = getNumAccidents(west);
	centralacc = getNumAccidents(central);

	//Function call to find the lowest of the 5 regions. Uses the input of each region as its arguments.
	findLowest(northacc, southacc, eastacc, westacc, centralacc);
	
	return 0;
}

//Function that asks the user for input of the number of accidents in a given region. Will not accept input less than 0. Returns the number of acidents.
int getNumAccidents(string region)
{
	int accidents = 0;
	do{
	cout << "Please enter the number of accidents for the " << region << " region" << endl;
	cin >> accidents;
	if(accidents < 0)
		cout << "Please enter a number of accidents greater than or equal to 0" << endl;
	}while(accidents < 0);
	return accidents;
}

//Function call to find the lowest of the five regions. Accepts the arguments of 5 ints (accidents in the regions). Will output a statement declaring the lowest
//and the number of accidents. 
void findLowest(int north, int south, int east, int west, int central)
{
	
	if(north < south && north < east && north < west && north < central)
		cout << "North is the lowest with " << north << " accidents." << endl;
	else if(south < north && south < east && south < west && south < central)
		cout << "South is the lowest with " << south << " accidents." << endl;
	else if(east < north && east < south && east < west && east < central)
		cout << "East is the lowest with " << east << " accidents." << endl;
	else if(west < north && west < south && west < east && west < central)
		cout << "West is the lowest with " << west << " accidents." << endl;
	else if(central < north && central < south && central < east && central < west)
		cout << "Central is the lowest with " << central << " accidents." << endl;
		
}

