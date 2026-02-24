#include <bits/stdc++.h>


using namespace std;

int main() {
    char vowels[] = {'a', 'o', 'y', 'e', 'u', 'i'};

    string s;
    cin >> s;
    for (char c : s){
        c = (char) tolower(c);

        bool is_vowel = false;
        for (char vowel : vowels) if (vowel == c) is_vowel = true;

        if (not is_vowel) cout << "." << c;
    }
    return 0;
}
