#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Min(int* a, const int size)
{
	int min; 
	int imin = -1; 
	for (int i = 0; i < size; i++)
		if (a[i] % 2 != 0)
		{
			min = a[i]; 
			imin = i; 
			break; 
		}
	if (imin == -1)
	{
		cerr << "немаЇ елемент≥в, €к≥ задовольн€ють умов≥" << endl;
		return 0;
	}
	for (int i = imin + 1; i < size; i++)
		if (a[i] < min && a[i] % 2 != 0)
			min = a[i];
	return min;
}


int main()
{
	srand((unsigned)time(NULL)); 
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];
	int Low ;
	cout << "Low= "; cin >> Low;
	int High;
	cout << "High = "; cin >> High;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "min = " << Min(a, n) << endl;
	return 0;
}