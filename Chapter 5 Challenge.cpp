// Brady Chiles
// 6/7/17
// bmchiles@dmacc.edu

/*
This program will ask for the user to input quarterly rain totals for a number of years determined by the user.
After the rain totals have all been added it will average the rainfall for the allotted years. 
Finally it will output the total quarters, the total rainfall, and the average quarterly rainfall.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	//Variables
	int years = 0;
	int quarters = 0;
	bool yearInput = false;
	bool rainInput = false; 
	float totalRainfall = 0;
	float averageRainfall = 0;
	float quarterlyRainfall = 0;
	
	//Description and output manipulation
	cout << "This program will determine the total rainfall over a number of years, as well as the average quarterly rainfall." << endl << endl;
	cout << setprecision(2) << fixed;

	//Asks for input of years, rejects any years less than 1
	do{
		cout << "Please enter the number of years." << endl;
		cin >> years;
		if(years >= 1)
			yearInput = true;
		else
			cout << "Please enter a value of 1 or more for years." << endl;
	}while(yearInput == false);
	
	//Sets the amount of quarters
	quarters = years * 4;
	
	//Outer year loop
	for(int y = 1; y <= years; y++){
		cout << "Year " << y << endl;
		
		//Inner quarter loop
		for(int q = 1; q <= 4; q++){
			rainInput = false;
			
			//Asks for the quarterly rainfall. Rejects negative rainfall.
			do{
				cout << "Please enter the rainfall for quarter " << q << " in inches." << endl;
				cin >> quarterlyRainfall;
				
				if(quarterlyRainfall > 0)
					rainInput = true;
				else
					cout << "Please enter positive rainfall." << endl;
			}while(rainInput == false);
			//Adds the quarterly rainfall to the total.
			totalRainfall = totalRainfall + quarterlyRainfall;
		}		
	}
	
	//Calculates average rainfall
	averageRainfall = totalRainfall / quarters;
	
	//Output for the number of quarters, total rainfall, and average rainfall. 
	cout << "Quarters: " << quarters << endl;
	cout << "Total rainfall: " << totalRainfall << " in." << endl;
	cout << "Average rainfall: " << averageRainfall << " in." << endl;

	return 0;
}
