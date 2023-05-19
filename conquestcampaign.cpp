#include<bits/stdc++.h>
using namespace std;
int main() {
    //BFS with added starting node connected to weak points.
    int r, c, n;
    cin >> r >> c >> n;
    list<pair<int, int>> bfs;
    vector<vector<int>> visited(r, vector<int>(c, 0));
    int ix, iy;
    while(n--) {
        cin >> ix >> iy;
        bfs.push_back(make_pair(ix, iy));
        visited[ix - 1][iy - 1] = 1;
    }
    int x = 0, y = 0;
    pair<int, int> p;
    while(!bfs.empty()) {
        p = bfs.front();
        bfs.pop_front();
        x = p.first - 1;
        y = p.second - 1;
        if (p.first - 1 > 0 && !visited[x - 1][y]) {
            bfs.push_back(make_pair(p.first - 1, p.second));
            visited[x - 1][y] = visited[x][y] + 1;
        }
        if (p.first + 1 <= r && !visited[x + 1][y]) {
            bfs.push_back(make_pair(p.first + 1, p.second));
            visited[x + 1][y] = visited[x][y] + 1;
        }
        if (p.second - 1 > 0 && !visited[x][y - 1]) {
            bfs.push_back(make_pair(p.first, p.second - 1));
            visited[x][y - 1] = visited[x][y] + 1;

        }
        if (p.second + 1 <= c && !visited[x][y + 1]) {
            bfs.push_back(make_pair(p.first, p.second + 1));
            visited[x][y + 1] = visited[x][y] + 1;
        }
    }
    cout << visited[x][y] << endl;
    return 0;
}