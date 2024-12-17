// Problem: ONEZERO
// Submission ID: 25606253
// Language: 4876

#include <stdio.h>
#include <bits/stdc++.h>
#define fin freopen("input", "r", stdin)

using namespace std;

int mod (string t, int n) {
    int r = 0;
    for (int i = 0; i < (int)t.length(); ++i) {
        r = r * 10 + (t[i] - '0');
        r %= n;
    }
    return r;
}

string sol (int n) {
    queue <string> q;
    set<int> visit;
    string t = "1";
    q.push(t);
    while (!q.empty()) {
        t = q.front(); q.pop();
        int rem = mod(t, n);
        if (rem == 0) return t;
        else if (visit.find(rem) == visit.end()) {
            visit.insert(rem);
            q.push(t + "0");
            q.push(t + "1");
        }    
    }
}

int main()
{
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        cout << sol(x) << endl;
    }


	return 0;
}