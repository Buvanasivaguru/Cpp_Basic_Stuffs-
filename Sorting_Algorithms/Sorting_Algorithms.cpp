// Sorting_Algorithms.cpp : Defines the entry point for the console application.
//

#include "SortingAlgorithmClass.h"

int main()
{
	int unsortedArray_1[] = { 54,35,53,89,27,41,69 };
	int unsortedArray_2[] = { 25,45,15,35,95,65,75 };
	int arraySize = sizeof(unsortedArray_1) / sizeof(unsortedArray_1[0]);

	SortingAlgorithmClass sortAlg;
	sortAlg.BubbleSort(unsortedArray_1, arraySize);

	return 0;
}

