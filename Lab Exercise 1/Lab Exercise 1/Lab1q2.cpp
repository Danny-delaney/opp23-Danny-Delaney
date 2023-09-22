#include<iostream>

int main()
{
	int array[10] = { 0,1,2,3,4,5,6,7,8,9, };
	int* ptr = array;
	size_t arrayBytes = sizeof(array);
	size_t elementBytes = sizeof(int);
	size_t noOfElements = arrayBytes / elementBytes;
	for (int i = 0; i < noOfElements; i++)
	{
		std::cout << "element" << i << "=" << ptr[i] << "\n";
	}
	std::cout << "=======================\n";
	for (int& element : array)
	{
		element++;
	}
	for (int i = 0; i < noOfElements; i++)
	{
		std::cout << "element" << i << "=" << ptr[i] << "\n";
	}
}