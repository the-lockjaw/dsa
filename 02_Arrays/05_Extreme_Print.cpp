// for an array like 1,2,3,4,5
// we need to print : 1 5 2 4 3
// basically print left, then right and so on

#include <iostream>
using namespace std;

void extreme_print(int arr[], int size)
{
    cout << "Extreme print = ";
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        cout << arr[left] << " ";
        cout << arr[right] << " ";
        left++;
        right--;
    }

    // in case of odd size, the middle element will be left as left == right, not <
    if (left == right)
    {
        cout << arr[left] << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    extreme_print(arr, size);
}