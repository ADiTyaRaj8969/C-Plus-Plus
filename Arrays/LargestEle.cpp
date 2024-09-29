//largest element using recursive function
// optimal solution
#include<iostream>
using namespace std;

int largestelement(int arr[], int size){
    int largest = arr[0];
    for(int i = 1 ; i<size; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    int n = 5;
    int arr[n] = {4,2,5,1,3};
    int max = largestelement(arr, n);
    cout << "largest element is: " << max << endl;
    return 0;
}
