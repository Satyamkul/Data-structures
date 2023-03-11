#include <iostream>
using namespace std;

// Function to perform sequential search
int sequentialSearch(int arr[], int n, int x)
{
    // Iterate through each element in the array
    for (int i = 0; i < n; i++)
    {
        // If the element is found, return its index
        if (arr[i] == x)
        {
            return i;
        }
    }
    // If the element is not found, return -1
    return -1;
}

int main()
{
    int arr[] = {2, 4, 1, 7, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    int result = sequentialSearch(arr, n, x);
    if (result == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index " << result << endl;
    }
    return 0;
}
