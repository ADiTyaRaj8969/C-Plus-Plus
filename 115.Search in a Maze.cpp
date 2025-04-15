#include<bits/stdc++.h>
using namespace std;
int rowDirections[] = {-1, 1, 0, 0};
int colDirections[] = {0, 0, -1, 1}; 
char directions[] = {'U', 'D', 'L', 'R'}; 
bool isValid(int x, int y, int n, vector<vector<int>>& mat, vector<vector<bool>>& visited) {
    return (x >= 0 && y >= 0 && x < n && y < n && mat[x][y] == 1 && !visited[x][y]);
}
void findPaths(int x, int y, int n, vector<vector<int>>& mat, vector<vector<bool>>& visited, string currentPath, vector<string>& result) {
    if (x == n - 1 && y == n - 1) {
        result.push_back(currentPath);
        return;
    }
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int newX = x + rowDirections[i];
        int newY = y + colDirections[i];
        if (isValid(newX, newY, n, mat, visited)) {
            findPaths(newX, newY, n, mat, visited, currentPath + directions[i], result);
        }
    }
    visited[x][y] = false;
}
vector<string> findAllPaths(vector<vector<int>>& mat, int n) {
    vector<string> result;
    if (mat[0][0] == 0 || mat[n-1][n-1] == 0) {
        return result;
    }
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    string currentPath = "";
    findPaths(0, 0, n, mat, visited, currentPath, result);
    sort(result.begin(), result.end());
    return result;
}
int main() {
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    int n = mat.size();
    vector<string> paths = findAllPaths(mat, n);
    if (paths.empty()) {
        cout << "-1" << endl;
    } else {
        for (const string& path : paths) {
            cout << path << " ";
        }
        cout << endl;
    }
    return 0;
}
