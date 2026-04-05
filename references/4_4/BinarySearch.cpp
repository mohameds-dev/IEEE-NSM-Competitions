sort(v.begin(), v.end());
auto lb = lower_bound(v.begin(), v.end(), x); // first >= x
auto ub = upper_bound(v.begin(), v.end(), x); // first > x
int count = ub - lb; // occurrences of x
