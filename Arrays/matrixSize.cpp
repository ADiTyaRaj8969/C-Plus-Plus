#include<iostream>
using namespace std;

int main(){
    int matrix[3][3] = {{1,1,1},{1,0,1},{1,1,1}};
    int rows = sizeof (matrix) / sizeof (matrix[0]);   
    int cols = sizeof (matrix[0]) / sizeof(int); 
    cout << rows << " " << cols ;
    return 0;
}