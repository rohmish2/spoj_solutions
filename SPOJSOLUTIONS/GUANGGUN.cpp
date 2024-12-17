// Problem: GUANGGUN
// Submission ID: 25873743
// Language: 4632

#include <iostream>
using namespace std;
int main() {
    for (;;) {
        long long n; cin >> n;
        if (cin.eof()) return 0;
        long long foo = 9*(n/9);
        cout << 9*foo + (n-foo)*(n-foo) << endl;
    }
}