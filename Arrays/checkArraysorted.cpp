/*Given an array of size n, write a program to check if the
 given array is sorted in (ascending / Increasing / Non-decreasing) 
order or not. If the array is sorted then return True, Else return False.*/
#include<iostream>
using namespace std; 

bool checkArraySorted(int arr[], int size)
{
    for(int i = 1; i<size; i++){
        if(arr[i]<arr[i+1] || arr[i]==arr[i+1]){
            return true;
        }
        else{
            return false;
        }
    }
}
int main(){
    int n = 5;
    int arr[n] = {5,6,7,8,9};
    bool result = checkArraySorted(arr, n);
    cout << result << endl;
    return 0;
}
