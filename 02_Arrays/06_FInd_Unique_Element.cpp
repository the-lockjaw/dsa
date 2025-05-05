// the 'unique' element appears once while all others appear twice

#include <iostream>
using namespace std;

int unique_element(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        // a ^ 0 = a
        // a ^ a = 0
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = unique_element(arr, size);
    cout << "the unique element is " << ans << endl;
}