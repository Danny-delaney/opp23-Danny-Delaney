#include <iostream>

int sumSquares(int t_array[], size_t size);

int main()
{
    int array[10] = { 2,2,2,2,2,2,2,2,2,2 };
    int Squared = sumSquares(array, sizeof(array) / sizeof(array[0]));
    std::cout << Squared;
}

int sumSquares(int t_array[], size_t size)
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += t_array[i] * t_array[i];
    }
    return sum;
}