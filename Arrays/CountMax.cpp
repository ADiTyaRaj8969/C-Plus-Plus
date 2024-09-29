//Given an array that contains only 1 and 0 
//return the count of maximum consecutive ones in the array.
#include<iostream>
using namespace std;

int CountMax(int arr[], int size)
{
    int count = 0;
    int max_count = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == 1){
            count++;
        }
        else{
            count = 0;
        }
        max_count = max(max_count, count);
    }
    return max_count;

}
int main(){
    int arr[] = {1,0,1,1,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count_max = CountMax(arr, size);
    cout << count_max << endl;
    return 0;
}