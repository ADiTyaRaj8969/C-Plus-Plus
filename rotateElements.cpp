//Given an array of N integers, right rotate the array by one place.
#include<iostream>
using namespace std;

void RightShift(int arr[], int size)
{
    int temp = arr[size-1];
    for(int i =size-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    
}
int main(){
    int arr[] = {1,2,3,4,5}; //51234
    int n = 5;
    RightShift(arr, n);
    for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    }

    return 0;
}