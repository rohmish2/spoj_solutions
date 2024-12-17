// Problem: ADAQUEUE
// Submission ID: 26152862
// Language: 5412

#include<bits/stdc++.h>
using namespace std;
deque <int> qu;

int main() {


    int n, m, num, tc, t = 1;

    scanf("%d", &num);

    char str[100];
    int cnt = 0, temp = 0;
    while(num--) {
        scanf("%s", str);

        if(str[0] == 'b') {
            if(qu.empty()) {
                printf("No job for Ada?\n");
            }
            else {
                if(cnt & 1) {
                    cout << qu.front() << '\n';
                    qu.pop_front();
                }
                else {
                    cout << qu.back() << '\n';
                    qu.pop_back();
                }
            }
        }
        else if(str[0] == 'f') {
            if(qu.empty()) {
                printf("No job for Ada?\n");
            }
            else {
                if(cnt & 1) {
                    cout << qu.back() << '\n';
                    qu.pop_back();
                }
                else {
                    cout << qu.front() << '\n';
                    qu.pop_front();
                }
            }
        }
        else if(str[0] =='r') cnt++;
        else if(str[0] == 'p') {
            scanf("%d", &temp);
            if(cnt & 1) qu.push_front(temp);
            else qu.push_back(temp);
        }
        else if(str[0] == 't') {
            scanf("%d", &temp);
            if(cnt & 1) qu.push_back(temp);
            else qu.push_front(temp);
        }
    }
}
