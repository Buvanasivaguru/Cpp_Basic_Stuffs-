#include "SortingAlgorithmClass.h"

SortingAlgorithmClass::SortingAlgorithmClass()
{
}


SortingAlgorithmClass::~SortingAlgorithmClass()
{
}

void SortingAlgorithmClass::swap(int * a, int * b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

void SortingAlgorithmClass::printsortedArray(int * inputArray, int arraySize)
{
	//print the array status
	for (int i = 0; i < arraySize; i++)
	{
		cout << inputArray[i] << " | ";
	}
	cout << endl;
}

//Bubble Sorting

int * SortingAlgorithmClass::BubbleSort(int * inputArray, int arraySize)
{
	int i, j;
	bool swapped;

	for (i = 0; i < arraySize - 1; i++)
	{
		swapped = false;
		cout << "Iteration " << i << " Starts" << endl << "-----------------------" << endl;
		for (j = 0; j < arraySize - i - 1; j++)
		{
			if (inputArray[j] > inputArray[j + 1])
			{
				swap(&inputArray[j], &inputArray[j + 1]);
				swapped = true;
			}
			printsortedArray(inputArray, arraySize);
		}
		cout << "Iteration End" << endl << "-----------------------" << endl;

		if (swapped == false)
			break;
	}

	cout << '\n' << "Bubble Sorted Array is..." << endl;
	printsortedArray(inputArray, arraySize);

	return inputArray;
}

int * SortingAlgorithmClass::SelectionSort(int * inputArray, int arraySize)
{
	return nullptr;
}

int * SortingAlgorithmClass::InsertionSort(int * inputArray, int arraySize)
{
	return nullptr;
}

int * SortingAlgorithmClass::MergeSort(int * inputArray, int arraySize)
{
	return nullptr;
}
int *SortingAlgorithmClass::QuickSort(int * inputArray, int arraytSize)
{
	return nullptr;
}