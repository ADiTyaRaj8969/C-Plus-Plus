//Given an array of N integers, left rotate the array by one place.
#include<iostream>
using namespace std;

void LeftRotate(int arr[], int size)
{
    int temp = arr[0];
    for(int i =0; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    arr[size - 1] = temp;
    for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    LeftRotate(arr, n);

    return 0;
}