// Bubble_Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void swap(int*a, int*b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

void bubble_sort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++)
	{
		swapped = false;	
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}

void printarray(int arr[], int n)
{
	cout << "Bubble Sorted array..." << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
}

int main()
{
	int arr[] = { 54,35,53,89,27,41,69 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, n);
	printarray(arr, n);
	return 0;
}

