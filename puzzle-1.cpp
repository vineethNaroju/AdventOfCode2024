#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cout.precision(10);

    int cnt = 1000, x, y, res = 0;
    priority_queue<int> q1, q2;

    while(cnt-- > 0) {
        cin >> x >> y;
        q1.push(-x);
        q2.push(-y);
    }

    while(!q1.empty()) {
        res += abs(q1.top() - q2.top());
        q1.pop(); q2.pop();
    }

    cout << res << '\n';
    
    return 0;
}