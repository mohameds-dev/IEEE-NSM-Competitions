#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> row_sum(n + 1, vector<int>(m + 1, 0));

    // Read grid and build prefix sums for each row
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char c;
            cin >> c;
            row_sum[i][j] = row_sum[i][j - 1] + (c == '1');
        }
    }

    int ans = 0;

    // Try every starting cell
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            // Try every possible width
            for (int w = 0; j + w <= m; w++) {

                bool valid = true;

                // Extend rectangle downward
                for (int h = 0; i + h <= n && valid; h++) {

                    int ones = row_sum[i + h][j + w] - row_sum[i + h][j - 1];

                    if (ones != 0)
                        valid = false;

                    if (valid) {
                        int perimeter = 2 * ((h + 1) + (w + 1));
                        ans = max(ans, perimeter);
                    }
                }
            }
        }
    }

    cout << ans << endl;
}
