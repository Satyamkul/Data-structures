// Find missing element in an arrray
#include <iostream>
using namespace std;

int findMissingElement(int arr[], int n)
{
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        actual_sum += arr[i];
    }
    return expected_sum - actual_sum;
}

int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    int missing_element = findMissingElement(arr, n);
    cout << "The missing element is: " << missing_element << endl;
    return 0;
}
