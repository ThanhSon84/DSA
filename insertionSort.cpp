/*Input: n = 5
12, 11, 13, 5, 6
*/
#include<iostream>

using namespace std;

/*Function to sort array using insertion sort */
void insertionSort(int arr[], int n)
{
	for (int i = 1; i < n; ++i)
	{
		int key = arr[i];
		int j = i - 1;
		/* reason i start with 1, end by n
		Move eles of arr[0..i-1]
		that are greater than key
		to one pos ahead of current pos */
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j-1;
		}
		arr[j + 1] = key;
	}
}

/* A utility function to print arr of size n */
void printArray(int arr[], int n)
{
	for (int i = 0; i< n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

/* A utility funtion to input arr of size n */
//Return a int type of pointer
int *inputArray(int &n)
{
	//Check input n with positive val
	do
	{
		cout<<"Input number of elements (With positive value): ";
		cin>>n;
	}
	while (n<=0);

	//Allocate a dynamic memory
	int *a = new int[n];
	for(int i = 0; i<n; i++)
	{
		cin>>a[i];
	}
	//return address of allocation of memory
	return a;
}

//Driver method
int main()
{
	int n;
	//Receive address form input function
	int * arr= inputArray(n);

	insertionSort(arr, n);
	printArray(arr, n);

	//Release allocated memory
	delete[] arr;
/* Input direct array:
	    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
*/
	return 0;
}
