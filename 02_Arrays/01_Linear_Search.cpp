#include<iostream>
using namespace std;

int linear_search(int arr[], int size, int target){
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            ans = i;
        }        
    }    
    return ans;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int target = 3;
    int ans = linear_search(arr,size,target);
    cout<<"Target found at index "<<ans<<endl;
}