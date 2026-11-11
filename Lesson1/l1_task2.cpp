#include <iostream>

int point_count(const int array[], int point, int size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] <= point) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return size - left;
}

int main() {
    int point_me = 0;
    int arr[9] = {14, 16, 19, 32, 32, 32, 56, 69, 72};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Введите точку отсчета: ";
    std::cin >> point_me;

    std::cout << "Количество элементов в массиве бОльших, чем " << point_me << ": " 
              << point_count(arr, point_me, size) << std::endl;

    return 0;
}
