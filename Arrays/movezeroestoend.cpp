/*You are given an array of integers, your task is to move all the zeros in the array to the 
end of the array and move non-negative integers to the front by maintaining their order.*/
#include<iostream>
using namespace std;

void removeZero(int arr[], int n)
{
    int j = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
         
    }
    for(int i = j+1; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
        if (j == -1){
            return;
        }
    }
}
int main(){
    int arr[] = {1,0,2,5,0,0,6};
    int n = 7;            //sizeof(arr)/sizeof(arr[0])
    removeZero(arr, n);
    for (auto &it : arr) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}