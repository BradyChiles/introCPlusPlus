// Brady Chiles
// 6/21/17
// bmchiles@dmacc.edu

/*
This program will accept the input of rainfaill for each of the four quarter of a year. It will then calculate and display the total rainfall,
the average rainfall, as well as the lowest and the highest quarters in terms of rainfall.
*/
#include <iostream>
using namespace std;

//Function Prototypes
int findLowest(float [], int);
int findHighest(float [], int);

int main()
{
	//Variables
	int size = 4;
	float allRainfall[size] = {0,0,0,0};
	float total = 0;
	float average;
	int lowest = 0;
	int highest = 0;
	float rainfall;
	
	//Initial output of synopsis
	cout << "This program will ask you to enter the amount of rainfall for each of the four quarters in a year.";
	cout << " It will then calculate and display the total, average, highest and lowest rainfall amounts." << endl << endl;
	
	//Loop to gather inout of the quarterly rainfall. Will not accept negative numbers. Adds the quarterly rainfall to the running total.
	for(int i = 0; i < size; i++){
		do{
			cout << "Please enter the rainfall for Quarter " << i + 1 << " in inches." << endl;
			cin >> allRainfall[i];
		}while(allRainfall[i] < 0);
		
		total += allRainfall[i];
	}
	
	//Finds lowest and highest by calling their functions. And calculates average by dividing the total by the number of quarters(4).
	lowest = findLowest(allRainfall, size);
	highest = findHighest(allRainfall, size);
	average = total / 4;
	
	//Outputs the total, average, lowest and highest quarters (including the amounts).
	cout << endl << "The total annual rainfall is " << total << " inches" << endl;
	cout << "The average annual rainfall is " << average << " inches" << endl;
	cout << "The lowest quarter is Quarter " << lowest + 1 << " with " << allRainfall[lowest] << " inches" << endl;
	cout << "The highest quatrter is Quarter " << highest + 1 << " with " << allRainfall[highest] << " inches" << endl;
	
	return 0;
}

//Function to find the lowest quarter of rainfall. Returns the element location of the lowest quarter.
int findLowest(float rainfall[], int size){
	int lowest = 0;
	for(int i = 0; i < size; i++){
		if(lowest > rainfall[i]){
			lowest = i;
		}
	}
	return lowest;
}

//Function to find the highest quarter of rainfall. Returns the element location of the highest quarter.
int findHighest(float rainfall[], int size){
	int highest = 0;
	for(int i = 0; i < size; i++){
		if(highest < rainfall[i]){
			highest = i;
		}
	}
	return highest;
}

