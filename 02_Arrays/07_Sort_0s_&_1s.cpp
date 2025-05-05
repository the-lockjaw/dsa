#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    //just take care of this variable, i.e., where to place the next 0
    // basically, we are saying that before j, all elements are == 0
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 1, 0, 0, 1, 0, 1, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting : ";
    printArray(arr, size);
    cout << "After sorting : ";
    sort(arr, size);
    printArray(arr, size);
}