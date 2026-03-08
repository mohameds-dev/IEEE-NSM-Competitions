#include <iostream>
using namespace std;
 
int greatest_common_divisor(int a, int b) {
    int g = 1;
    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            g = i;
        }
    }
    return g;
}
 
int main() {
    int tests;
    cin >> tests;
    while(tests--){
        int k;
        cin >> k;
        cout << 100 / greatest_common_divisor(k, 100) << endl;
    }
    return 0;
}
