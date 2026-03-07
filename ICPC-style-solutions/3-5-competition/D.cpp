#include <iostream>
using namespace std;

void run_case() {
    char c;

    // Read 64 characters
    for (int i = 0; i < 64; i++) {
        cin >> c;

        // Print only characters that are not '.'
        if (c != '.')
            cout << c;
    }

    cout << "\n";
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        run_case();
    }

    return 0;
}
