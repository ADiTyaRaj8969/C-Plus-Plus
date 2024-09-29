/* Given an integer array sorted in non-decreasing order, 
remove the duplicates in place such that each
unique element appears only once. The relative order of the elements should be kept the same.*/
#include<iostream>
using namespace std;

int checkDuplicates(int arr[], int n)
{
    int i = 0;
    for(int j = 1; j<n; j++){
        if(arr[j]!=arr[i]){
            i++; 
            arr[i] = arr[j];
        }
    }
    return i+1;
}
int main(){
    int arr[] = {1,1,2,3,3,4,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = checkDuplicates(arr, n);
    for (int i = 0; i < result; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}