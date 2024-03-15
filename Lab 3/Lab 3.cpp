#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int n = 5;

    int arr[n] = { 10, 20, 30, 40, 50 };

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        else if (arr[i] > max) {
            max = arr[i];
        }
    }

    double average = (double)sum / n;

    int element = 30;
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == element) {
            found = true;
            break;
        }
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    std::cout << "Sum of all array elements: " << sum << std::endl;
    std::cout << "Minimum element: " << min << std::endl;
    std::cout << "Maximum element: " << max << std::endl;
    std::cout << "Average value of array elements: " << average << std::endl;

    if (found) {
        std::cout << "Element " << element << " found in the array!" << std::endl;
    }
    else {
        std::cout << "Element " << element << " not found in the array." << std::endl;
    }

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


