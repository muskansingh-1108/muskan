#include <iostream>
using namespace std;

void printOddIndexAddresses(int arr[], int size) {
    for (int i = 1; i < size; i += 2) {
        cout << "Index: " << i << " Address: " << &arr[i] << endl;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    printOddIndexAddresses(arr, size);

    return 0;
}
