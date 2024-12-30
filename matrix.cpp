#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows, cols;

    // Ask the user for the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    // Create a 2D vector (matrix)
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Fill the matrix with natural numbers
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = (j * rows)+ i + 1 ; 
        }
    }

    // Display the filled matrix
    cout << "\nThe filled matrix is:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// void print_vector(vi &v){
//     for(int i : v){
//         cout << i << " ";
//     }
//     cout << "\n";
// }
// void print_matrix(vvi &matrix){
//     int m = matrix.size(), n = matrix[0].size();
//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n; ++j){
//             print_vector(matrix[i]);
//         }
//     }
// }
// void solve(){

// }
// int main(){
//     solve();
//     return 0;
// }
