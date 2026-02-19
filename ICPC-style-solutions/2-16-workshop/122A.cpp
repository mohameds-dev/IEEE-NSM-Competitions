#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    for (auto &c:a) c = tolower(c);
    for (auto &c:b) c = tolower(c);

    if (a == b) cout << "0" << endl;
    else if (a < b) cout << "-1" << endl;
    else cout << "1" << endl;

    return 0;
}