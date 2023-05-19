#include<bits/stdc++.h>
using namespace std;
bool flag = false;
void bfs(vector<vector<int>>& visited, vector<string>& maze, 
int i, int j, int r, int c) {
    if (i + 1 < r && visited[i + 1][j] == 0) {
        if (maze[i + 1][j] == '.') {
            flag = true;
        }
        visited[i + 1][j] = 1;
        bfs(visited, maze, i + 1, j, r, c);
    }
    if (i > 0 && visited[i - 1][j] == 0) {
        if (maze[i - 1][j] == '.') {
            flag = true;
        }
        visited[i - 1][j] = 1;
        bfs(visited, maze, i - 1, j, r, c);
    }
    if (j + 1 <= c && visited[i][j + 1] == 0) {
        if (maze[i][j + 1] == '.') {
            flag = true;
        }
        visited[i][j + 1] = 1;
        bfs(visited, maze, i, j + 1, r, c);
    }
    if (j > 0 && visited[i][j - 1] == 0) {
        if (maze[i][j - 1] == '.') {
            flag = true;
        }
        visited[i][j - 1] = 1;
        bfs(visited, maze, i, j - 1, r, c);
    }
    return;
}
int main() {
    int r = 0, c = 0;
    cin >> r >> c;
    vector<string> maze(r);
    string input = "";
    getline(cin, input);
    for (int i = 0; i < r; i++) {
        getline(cin, input);
        maze[i] = input;
    }
    vector<vector<int>> visited(r, vector<int>(c,0));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (maze[i][j] == 'X') {
                visited[i][j] = 1;
            } else if (maze[i][j] != '.' && maze[i][j] != ' ') {
                visited[i][j] = 2;
            }
        }
    }
    int p = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            flag = false;
            if (visited[i][j] == 2) {
                bfs(visited, maze, i, j, r, c);
            }
            if (flag) {
                p++;
            }
        }
    }
    int d = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if(visited[i][j] == 0 && maze[i][j] == '.') {
                d++;
            }
        }
    }
    cout << p << " " << d << endl;
    return 0;
}