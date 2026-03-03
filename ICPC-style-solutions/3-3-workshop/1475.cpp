//#include <iostream>
#include <bits\stdc++.h>

using namespace std;

#define ll long long
#define el '\n'
#define flag(F) cout<<"flag "<<F<<el; 

const int N = (int)1e6 + 50;



int main()
{
	int q;
	ll n; cin >> q;

	while (q--) {
		cin >> n;
		while (n%2 == 0) n /= 2;
		cout << ((n > 1) ? "YES" : "NO") << el;
	}
	return 0;
}
