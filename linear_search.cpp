
#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[],int size, int target) {
    for (int i = 0; i <size ; ++i) {
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int numbers[6] = {5, 2, 8, 1, 9, 4};
    int targetValue = 9;

    int result = linearSearch(numbers,6, targetValue);

    if (result != -1) {
       cout << "Element " << targetValue << " found at index: " << result << std::endl;
    } else {
        cout << "Element " << targetValue << " not found in the array." << std::endl;
    }


    return 0;
}
