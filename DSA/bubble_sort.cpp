// Optimized implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
int i, j;
bool swapped;
for (i = 0; i < n-1; i++)
{
	swapped = false;
	for (j = 0; j < n-i-1; j++)
	{
		if (arr[j] > arr[j+1])
		{
		swap(&arr[j], &arr[j+1]);
		swapped = true;
		}
	}

	// if no two elements were swapped by inner loop, then break
	if (swapped == false)
		break;
}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout <<" "<< arr[i];
	cout <<" n";
}

int main()
{
  int n;
  cin>>n;
	int arr[n];
  for(int i = 0; i < n; i++) {
    cin>>arr[i];
  }
 	bubbleSort(arr, n);
	cout <<"Sorted array: \n";
	printArray(arr, n);
	return 0;
}

//stdin
//Line 1: size of the array
//Line 2: elements in the array(space seperated integers)
