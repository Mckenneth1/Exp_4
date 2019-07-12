#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int size, array[1000], elements, j, temp;
	cout << "Enter Array Size: "; cin >> size;
	
	cout << "Enter Elements in Array: " << endl;
	for (elements = 0; elements < size; elements++)
	{
		cin >> array[elements];	
	}
	
	cout << "Sorted array" << endl;
	
	for (elements = 0; elements < size; elements++)
	{
		for (j = elements+1; j < size; j++)
		{
			if (array[elements] > array[j])
			{
				temp = array[elements];
				array[elements] = array[j];
				array[j] = temp;
			}
		}
	}
	
	for (elements = 0; elements < size; elements++)
	{
		cout << array[elements] << " ";
	}
	
	getch();
	return 0;
}
