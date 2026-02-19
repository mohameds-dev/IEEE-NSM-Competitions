#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

int n;
bool is_present[N];
int last_day[N];
int people_currently_present = 0;
int current_day = 1;
int day_events = 0;
bool valid = true;


void check_in(int id) {
    if (is_present[id] or last_day[id] == current_day) {
        valid = false;
    } else {
        is_present[id] = true;
        last_day[id] = current_day;
        people_currently_present += 1;
    }
}

void check_out(int id) {
    if (not is_present[id]) {
        valid = false;
    } else {
        is_present[id] = false;
        people_currently_present -= 1;
    }
}

int main() {
    cin >> n;

    int id;
    vector<int> events;
    for (int i = 0; i < n; ++i) {
        cin >> id;
        day_events += 1;

        if (id > 0) check_in(id);
        else check_out(-id);

        if (people_currently_present == 0) {
            events.push_back(day_events);
            day_events = 0;
            current_day += 1;
        }
    }

    if (people_currently_present > 0)
        valid = false;
    

    if (valid) {
        cout << events.size() << endl;
        for (int i : events) cout << i << " ";
    }
    else cout << "-1\n";
}
