#include<iostream>
using namespace std;

// this code counts the number of 0's and 1's in a binary array
// to make it work for any general array, just repeat the code for 0's for 1's as well

// ALT : if it's a binary array, we can also calculate this from sum of elements.

void count(int arr[], int size){
    //initialise variables to keep count
    int zeros = 0;

    //count number of zeros
    for (int i = 0; i < size; i++)
    {
        //increment zeros if the element in question is zero
        if (arr[i]==0)
        {
            zeros++;
        }        
    }

    cout<<"Number of zeros = "<<zeros<<endl;
    //in a binary array, number of ones = size - no. of zeros
    cout<<"Number of ones = "<<size-zeros<<endl;
    
}

int main(){
    int size = 10;
    int arr[size] = {0,1,0,1,0,1,1,1,0,0};
    count(arr,size);
}