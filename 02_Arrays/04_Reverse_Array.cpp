#include <iostream>
using namespace std;

void revArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    //swap left and right
    while (left < right)
    {
        swap(arr[left], arr[right]);

        //increment left and decrement right
        left++;
        right--;
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
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "original array : ";
    printArray(arr, size);

    cout << "reversed array : ";
    revArray(arr, size);
    printArray(arr, size);
}