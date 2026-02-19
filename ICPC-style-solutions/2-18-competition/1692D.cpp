#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(const string &digits) {
    return digits[0] == digits[3] and digits[1] == digits[2];
}

string convert_minutes_to_str_digits(int minutes) {
    string hh = to_string(minutes / 60);
    string mm = to_string(minutes % 60);

    // add leading zeroes
    if (hh.size() == 1) hh = "0" + hh;
    if (mm.size() == 1) mm = "0" + mm;

    return hh + mm;
}

int parse_time_to_minutes(const string &s) {
    int hours = (s[0] - '0') * 10 + s[1] - '0'; // first digit * 10 + second digit
    int minutes = (s[3] - '0') * 10 + s[4] - '0'; // same thing, but accounting for the ':' character

    return hours * 60 + minutes; // return in minutes
}


int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        string s;
        cin >> s;
        int added_minutes;
        cin >> added_minutes;

        // convert to minutes and then to string, stripping away the ':' and leading zeroes.
        int minutes = parse_time_to_minutes(s);
        string initial_time_str = convert_minutes_to_str_digits(minutes);

        // initialize a counter for palindromes and a string for the new time
        int palindrome_counter = 0;
        string new_time_str = initial_time_str;

        do {
            if (is_palindrome(new_time_str)) {
                palindrome_counter += 1;
            }
            minutes += added_minutes;
            minutes %= (60 * 24); // resets every day
            new_time_str = convert_minutes_to_str_digits(minutes);
        } while (new_time_str != initial_time_str);

        cout << palindrome_counter << endl;
    }
}
