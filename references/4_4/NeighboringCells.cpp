#include <bits/stdc++.h>
using namespace std;

int main() {
    const int n = 4, m = 5;  // dimensions of the grid
    int grid[n][m];           // 2D array

    // initialize grid with zeros
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            grid[i][j] = 0;

    // ---------------- DIRECTIONS ----------------
    // 4-directional (Up, Right, Down, Left)
    int dx4[] = {-1, 0, 1, 0};
    int dy4[] = {0, 1, 0, -1};

    // 8-directional (includes diagonals)
    int dx8[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy8[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    // ---------------- ITERATE OVER NEIGHBORS ----------------
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            // Example: 4-directional neighbors
            for (int dir = 0; dir < 4; dir++) {
                int ni = i + dx4[dir]; // neighbor row
                int nj = j + dy4[dir]; // neighbor col

                // check bounds
                if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                    int neighbor_value = grid[ni][nj];
                    // process neighbor_value as needed
                }
            }

            // Example: 8-directional neighbors
            for (int dir = 0; dir < 8; dir++) {
                int ni = i + dx8[dir];
                int nj = j + dy8[dir];

                if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                    int neighbor_value = grid[ni][nj];
                    // process neighbor_value as needed
                }
            }
        }
    }

    return 0;
}
