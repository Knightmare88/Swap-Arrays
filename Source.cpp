#include <iostream>
using namespace std;
bool switchArrays(double arr1[], double arr2[]);
int main()
{
	double arr1[3]{ 3,6,9 }, arr2[3]{ 4,8,1 };
	switchArrays(arr1, arr2);

	return 0;
}

bool switchArrays (double arr1[], double arr2[])
{
	int arrSize1 = sizeof(arr1)/sizeof(arr1[0]), arrSize2 = sizeof(arr2)/sizeof(arr2[0]);
	bool arrEquality;
	if (arrSize1 != arrSize2)
	{
		arrEquality = false;
		cout << "ERROR: Array sizes not equal";
		return arrEquality;
	}
	else
	{
		int i = arrSize1;
		for (int j = 0; j != i; j++)
		{
			if (arr1[j] < arr2[j])
			{
				arr1[j] = sqrt(arr2[j]);
			}
			else
				arr1[j] = arr1[j];
		}
		for (int j = 0; j != i; j++)
		{
			cout << arr1[j];
		}
		return arrEquality;
	}
}