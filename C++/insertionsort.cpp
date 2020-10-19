#include <iostream>

using namespace std;

void Insertionsort(int* a)
{
	int i, j, key;
	for (size_t i = 1; i < 9; i++)
	{
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}
}

int main()
{
	int iArray[] = { 10,20,1,11,21,2,12,22,5 };
	Insertionsort(iArray);
	for (int i = 0; i < 9; i++)
	{
		std::cout << iArray[i] << ", ";
		std::cout << std::endl;
	}
}

