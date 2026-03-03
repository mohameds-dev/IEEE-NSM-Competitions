#include <bits/stdc++.h>


using namespace std;

int main() {
    int distance;
    cin >> distance;
    int steps_of_5 = distance / 5;
    int additional_final_step = distance % 5;
    cout << steps_of_5 + (additional_final_step > 0? 1 : 0) << endl;
    return 0;
}
