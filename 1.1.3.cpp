#include <iostream>

double Average(int arr[], int size);

int main() {
    int data[] = {10, 20, 30, 40, 50}; // Example array
    int size = sizeof(data) / sizeof(data[0]); // Calculate the size of the array

    double result = Average(data, size);

    std::cout << "The average of the array is: " << result << std::endl;

    // Check if the average is double digits, single digits, or negative
    if (result >= 10) {
        std::cout << "Double digits" << std::endl;
    } else if (result < 10 && result >= 0) {
        std::cout << "Single digits" << std::endl;
    }

    if (result < 0) {
        std::cout << "Average value is in the negative" << std::endl;
    }

    return 0;
}

double Average(int arr[], int size) {
    if (size == 0) {
        return 0;
    }

    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return static_cast<double>(sum) / size;
}
