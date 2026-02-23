#include <bits/stdc++.h>


using namespace std;

int main() {
    int distance;
    cin >> distance;

    int steps_of_5 = distance / 5;
    int additional_final_step = distance % 5; // if the distance is not divisible by 5, we need to take one more step (1 or 2 or 3 or 4)

    cout << steps_of_5 + int(additional_final_step > 0) << endl;
    return 0;
}
