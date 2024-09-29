//second largest element and second smallest element
// better solution
#include<iostream>
using namespace std;

int Secondlargest(int arr[], int size){
    int largest = arr[0];
    int slargest = -1;
    for(int i = 1; i<size ; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    for(int i = 1; i<size ; i++){
        if(arr[i] > slargest && arr[i]!=largest){
            slargest = arr[i];
        }
    }
    return slargest;
}
int main(){
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int secondlargest = Secondlargest(arr, n);
    cout << secondlargest << endl;
    return 0;
}