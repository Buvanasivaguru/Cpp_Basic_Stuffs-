// Sorting_Algorithms.cpp : Defines the entry point for the console application.
//

#include "SortingAlgorithmClass.h"

int main()
{
	int selection;
	int unsortedArray[] = { 54,35,53,89,27,41,69 };
	//int unsortedArray[] = { 4,3,2 };
	int arraySize = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

	SortingAlgorithmClass sortAlg;

	cout << "Select the Sorting Algorthim..." << endl;
	cout << "1.Bubble Sort" << endl;
	cout << "2.Selection Sort" << endl;
	cout << "3.Insertion Sort" << endl;
	cout << "4.Merge Sort" << endl;
	cout << "5.Quick Sort" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1: 
		cout << "Bubble Sort" << '\n' << endl;
		sortAlg.BubbleSort(unsortedArray, arraySize);
		break;
	
	case 2:
		cout << "Selection Sort" << '\n' << endl;
		sortAlg.SelectionSort(unsortedArray, arraySize);
		break;

	case 3:
		cout << "Insertion Sort" << '\n' << endl;
		sortAlg.InsertionSort(unsortedArray, arraySize);
		break;

	case 4:
		cout << "Merge Sort" << '\n' << endl;
		sortAlg.MergeSort(unsortedArray, 0, arraySize-1);
		break;

	case 5:
		cout << "Quick Sort" << '\n' << endl;
		sortAlg.QuickSort(unsortedArray, 0, arraySize - 1);
		cout << '\n' << "Quick Sorted Array is..." << endl;
		sortAlg.printsortedArray(unsortedArray, arraySize);
		break;

	default:
		cout << "Invaild Selection..!" << endl;
		break;
	}
	

	return 0;
}

