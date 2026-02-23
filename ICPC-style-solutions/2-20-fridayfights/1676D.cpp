#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 1.5e5 + 10;
int candies[N];
int prefix_sum[N];


int binary_search_candies(int n_candies, int sugar) {
    int l = 0, r = n_candies - 1, answer = -1, mid;

    while (l <= r) {
        mid = (l + r) / 2;

        if (prefix_sum[mid] >= sugar){
            answer = mid + 1;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    return answer;
}


// an alternative to the above function is using the built-in lower_bound function:
int binary_search_builtin(int n_candies, int sugar){
    // lower_bound returns a pointer to the first element >= the given element
    auto ptr = lower_bound(prefix_sum, prefix_sum + n_candies, sugar);

    // if the pointer is at the end of the array, the element was not found
    if (ptr == prefix_sum + n_candies)
        return -1;
    else
        // subtracting array beginning from ptr gives offset (0-based index)
        // we add +1 to get the count
        return ptr - prefix_sum + 1;
}

int main() {
    int test_cases;
    cin >> test_cases;

    int n_candies, queries;
    while (test_cases--) {
        cin >> n_candies >> queries;

        for (int i = 0; i < n_candies; ++i) {
            cin >> candies[i];
        }

//        we'll sort the candies in reverse order.
//        why? because consuming the greater values first gives the minimum number of candies
        sort(candies, candies + n_candies, greater<>());

        // alternatively, you can sort then reverse:
//        sort(candies, candies + n_candies);
//        reverse(candies, candies + n_candies);

//        for vectors, we can use reverse iterators like so:
//        sort(v.rbegin(), v.rend());


        // calculate prefix sum: at index (i), it gives the sum of all previous elements
        for (int i = 0; i < n_candies; ++i) {
            prefix_sum[i] = candies[i];
            if (i > 0) prefix_sum[i] += prefix_sum[i - 1];
        }

        // process queries
        int sugar;
        while(queries--){
            cin >> sugar;
            cout << binary_search_candies(n_candies, sugar) << endl;

//            alternatively, we can use built-in lower_bound function
//            check the function definition above
//            cout << binary_search_builtin(n_candies, sugar) << endl;


        }
    }
    return 0;
}