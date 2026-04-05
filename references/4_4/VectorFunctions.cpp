#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    // empty() → returns true if vector has no elements
    bool isEmpty = v.empty();

    // push_back() → adds element to the end
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);

    // emplace_back() → constructs element in-place at the end
    v.emplace_back(2);

    // sort(begin, end) → sorts elements in ascending order
    sort(v.begin(), v.end());

    // insert(iterator, value) → inserts value at given position
    v.insert(v.begin() + 1, 10);

    // erase(iterator) → removes element at given position
    v.erase(v.begin() + 2);

    // pop_back() → removes last element
    v.pop_back();

    // accumulate(begin, end, initial) → sum of elements + initial value
    int sum = accumulate(v.begin(), v.end(), 0);

    // count(begin, end, value) → counts occurrences of value
    int count10 = count(v.begin(), v.end(), 10);

    // partial_sum(begin, end, output_begin) → prefix sums
    vector<int> prefix(v.size());
    partial_sum(v.begin(), v.end(), prefix.begin());

    // any_of → true if any element satisfies condition
    bool anyGreaterThan5 = any_of(v.begin(), v.end(),
        [](int x) { return x > 5; });

    // all_of → true if all elements satisfy condition
    bool allPositive = all_of(v.begin(), v.end(),
        [](int x) { return x > 0; });

    // none_of → true if no elements satisfy condition
    bool noneNegative = none_of(v.begin(), v.end(),
        [](int x) { return x < 0; });

    // lower_bound → first element >= value (vector must be sorted)
    auto lb = lower_bound(v.begin(), v.end(), 3);

    // upper_bound → first element > value (vector must be sorted)
    auto ub = upper_bound(v.begin(), v.end(), 3);

    // begin() → iterator to first element
    // end() → iterator to one past last element
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        int value = *it; // access element via iterator
    }

    return 0;
}
