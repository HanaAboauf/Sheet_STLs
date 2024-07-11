
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

        long long x;
       bool temp= true;
       int n,t=1;
       cin>>n;
       deque<long long>q ;
    if (n%2==0) {
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (t) { q.push_back(x); }
            else q.push_front(x);
            t = 1 - t;
        }
    }
    else{
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (!t) { q.push_back(x); }
            else q.push_front(x);
            t = 1 - t;
        }

    }
    for (int i = 0; i < n; ++i) {
        cout<<q[i]<<" ";
    }

    return 0;
}
