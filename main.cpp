//Ryan Bollard
//I certfiy this is entirely my own work

#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
	int array[] = { 7, 5, 16, 8 }; //Array we will sort

	cout << "Pre-sort \n";

	for (int i = 0; i < 4; i++) { //Display pre-sort
		cout << array[i] << '\n';
	}

	
	
	//BEGIN CALLING FUNCTIONS
	//insertionSort(array, 4);
	//selectionSort(array, 4);
	//bubbleSort(array, 4);
	mergeSort(array, 1, 4); //Error in merge sort
	
	
	
	
	cout << endl;
	cout << "Post-sort \n";
	for (int i = 0; i < 4; i++) { //Display post sort
		cout << array[i] << '\n';
	}

	system("pause");

	return 0;
}