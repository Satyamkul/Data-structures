#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int left, int right, int x)
{
    while (left <= right) {
        int mid = left + (right - left) / 2;
        // If element is present at mid
        if (arr[mid] == x) {
            return mid;
        }
        // If element is smaller than mid, search in left half
        else if (arr[mid] > x) {
            right = mid - 1;
        }
        // If element is larger than mid, search in right half
        else {
            left = mid + 1;
        }
    }
    // If element is not present in array
    return -1;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 7, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }
    return 0;
}
