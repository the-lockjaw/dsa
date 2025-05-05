// to find the minimum / maximum element in an integer array

#include<iostream>
#include<limits.h>
using namespace std;

int max(int arr[], int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        
    }
    return max;
    
}

int min(int arr[], int size){
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
    return min;
    
}

int main(){
    int arr[] = {2,3,42,1,4,142,142,1435,4354,64,472512,13};
    int size = sizeof(arr)/sizeof(arr[0]);
    int mini = min(arr,size);
    int maxi = max(arr,size);

    cout<<"Minimum = "<<mini<<endl;
    cout<<"Maximum = "<<maxi<<endl;
}