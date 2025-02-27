#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Directions for moving up, down, left, right
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

pair<int, int> solve(int n, int m, vector<vector<int>> &sharks, vector<vector<int>> &timeMatrix, int initialStrength, pair<int, int> start, pair<int, int> dest) {
    vector<vector<int>> minTime(n, vector<int>(m, INT_MAX));
    vector<vector<int>> maxStrength(n, vector<int>(m, -1));

    using State = tuple<int, int, int>; // {time, x, y}
    priority_queue<State, vector<State>, greater<State>> pq;

    pq.push({0, start.first, start.second});
    minTime[start.first][start.second] = 0;
    maxStrength[start.first][start.second] = initialStrength;

    while (!pq.empty()) {
        auto [curTime, x, y] = pq.top();
        pq.pop();

        if (make_pair(x, y) == dest) {
            return {curTime, maxStrength[x][y]};
        }

        if (curTime > minTime[x][y]) continue;

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (isValid(nx, ny, n, m)) {
                int requiredStrength = sharks[nx][ny];
                int remainingStrength = maxStrength[x][y] - requiredStrength - 1;
                int newTime = curTime + timeMatrix[nx][ny];

                if (remainingStrength >= 0 && (remainingStrength > maxStrength[nx][ny] || newTime < minTime[nx][ny])) {
                    maxStrength[nx][ny] = remainingStrength;
                    minTime[nx][ny] = newTime;
                    pq.push({newTime, nx, ny});
                }
            }
        }
    }

    return {-1, -1};
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> sharks(n, vector<int>(m));
    vector<vector<int>> timeMatrix(n, vector<int>(m));

    pair<int, int> start, dest;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            string cell;
            cin >> cell;
            if (cell == "S") {
                start = {i, j};
                sharks[i][j] = 0;
            } else if (cell == "D") {
                dest = {i, j};
                sharks[i][j] = 0;
            } else {
                sharks[i][j] = stoi(cell);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> timeMatrix[i][j];
        }
    }

    int initialStrength;
    cin >> initialStrength;

    pair<int, int> result = solve(n, m, sharks, timeMatrix, initialStrength, start, dest);

    if (result.first == -1) {
        cout << "Not Possible" << endl;
    } else {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
