#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

// Function to generate an array of random integers
int* generate(int t_howMany) {
    int* arr = new int[t_howMany]; // Allocate dynamic array

    // Seed the random number generator with current time
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Fill the array with random numbers between 1 and 100
    for (int i = 0; i < t_howMany; ++i) {
        arr[i] = (std::rand() % 100) + 1;
    }

    return arr;
}

int main() {
    int howMany = 10; // You can change this to the desired array size

    int* randomArray = generate(howMany); // Call the generate function

    // Print the array contents
    std::cout << "Generated array: ";
    for (int i = 0; i < howMany; ++i) {
        std::cout << randomArray[i] << " ";
    }
    std::cout << std::endl;

    // Delete the dynamically allocated array
    delete[] randomArray;

    return 0;
}
