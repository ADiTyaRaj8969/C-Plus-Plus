#include<iostream>
using namespace std;
void Reverse(int *arr,int size){
    cout<<"The Entered Element:-"<<endl;
    for(int i = 0;i<size;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
     int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed array:-"<<endl;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    }
int main(){
    int size;
    cout<<"Enter Size of Element:-"<<" ";
    cin>>size;
    int arr[size];
    for(int i = 0;i<size;i++){
    cout<<"Enter element at index "<<i<<":-"<<" ";
    cin>>arr[i];
    }
    Reverse(arr,size);
    return 0;
}