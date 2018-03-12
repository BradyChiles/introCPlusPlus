// Brady Chiles
// 6/21/17
// bmchiles@dmacc.edu

/*
This program will accept input of starting population, birth rate, death rate, and the number of years, then will display the
new population each year.
*/

#include <iostream>
using namespace std;

int main()
{
	//Variables
	int population;
	int numYears;
	float births;
	float deaths;
	
	//Synopsis
	cout << "This program will ask for the number of years to dsiplay followed by the starting population. ";
	cout << "Then it will ask for the annual birth rate and death rate, to dislay the new annual population." << endl << endl;;
	
	//Output/input for years to display. Will not accept less than 1
	do{
		cout << "How many years would you like to display?" << endl;
		cin >> numYears;
	}while(numYears < 1);
	
	//Output/input for starting population. Will not accept less than 2
	do{
		cout << "What is the starting population?" << endl;
		cin >> population;
	}while(population < 2);
	
	//Loop to ask for the rates each year and to display the new population. Will loop for the number of years input by user.
	for(int years = 1; years <= numYears; years++){
		//Loop to ask for input of birth rate. Will not accept negative births.
		do{
			cout << "What is the birth rate for year " << years << "?" << endl;
			cin >> births;
		}while(births < 0);
		
		//Loop to ask for input of death rate. Will not accept negative deaths.
		do{
			cout << "What is the death rate for year " << years << "?" << endl;
			cin >> deaths;
		}while(deaths < 0);
	
		//Calculates the new population by adding births to the previous population and subtracting deaths.
		population = population + births - deaths;
		//Output of the new population.
		cout << "The new population for year " << years << " is " << population << endl << endl;
	}

	return 0;
}
