#include <iostream>  //used for cin, cout
#include <cmath>
using namespace std;

//Problem 1
// write a function that populates an array of doubles 
// with random intergers between 0 and 200.

// Input(s): number of elements (integer), the array of doubles
// Output(s): the array of doubles

void populateArray(double A[], int N);


//Problem 2
//write a function that prints an array of doubles
//Input(s):  the array of doubles, number of elements (integer)
//Output(s): none (print to the screen)

void printArray(double A[], int N);

//Problem 3

//Write a function that searches an array for a given value
// it will return true if it is found and false if it is not found

//input(s) : an array of doubles, number of elements (integer)
//           the value searching for (double)
//output(s) : true/false (boolean)

bool searchArray(double A[], int N, double x);

//Problem 4 

//write a function that when given an array of doubles will return
//its maximum and minimum values
//inputs: array of doubles, number of elements (integer)
//outputs: min value(double), max value(double)

void getMinMax(double A[], int N, double& min, double& max);

//Problem 5

// Write a function that return a sum of the elements in an array of doubles
//inputs: Array of doubles, number of elements
//outputs: One number

double getTotal(double A[], int N);

//Problem 6 

//Write a function that sorts an array of doubles aand returns true if succesful

bool sortArray(double A[], int N);


int main()
{
	const int maxSize = 100;
	int n = 20;
	double A[maxSize];

	populateArray(A, n);
	printArray(A, n);
	double x = 28;
	if (searchArray(A, n, x))
		cout << "Found" << endl;
	else
		cout << "Not found" << endl;

	double minV, maxV;
	getMinMax(A, n, minV, maxV);
	cout << "The smallest number in ther array is " << minV << endl;
	cout << "The largest number in ther array is " << maxV << endl;

	cout << "The sum of the elements is " << getTotal << endl;
	
	cout << "Sorted array " << endl;
	sortArray(A, n);
	print: 

	system("pause");
	return 0;
}

void populateArray(double A[], int N)
{
	double x;
	int i = 0;
	while (i < N)
	{
		x = rand() % 201;
		A[i] = x;
		i++;
	}
}

void printArray(double A[], int N)
{
	cout << "{";
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << ", ";
	}
	cout << "}" << endl;
}

bool searchArray(double A[], int N, double x)
{
	for (int i = 0; i < N; i++)
	{
		if (A[i] == x)
			return true;
	}
	return false;
}

void getMinMax(double A[], int N, double& min, double& max)
{
	min = A[0];					//initialize min
	max = A[0];					//initialize max
	for (int i = 0; i < N; i++)
	{
		if (A[i] < min)
			min = A[i];
		if (A[i] > max)
			max = A[i];
	}
}

double getTotal(double A[], int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
		{
		sum += A[i];
		}
	return sum;
}

bool sortArray(double A[], int N)
{
	//take the smallest and put it in the beginning and thake the second smallest and out it second...
	for (int i = 0; i < N - 1; i++)
	{
		//find smallest starting from position i
		int minInd = i; 
		for (int j = i; j < N; j++)
		{
			if (A[j] < A[minInd])
				minInd = j;
		}
		if (minInd > i)
		{
			double temp = A[minInd];
			A[minInd] = A[i];
			A[i] = temp;
		}
	}
	return true;
}
