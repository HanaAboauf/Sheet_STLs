#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
        deque<int>q={0};
        int n;
        cin>>n;
        cin>>s;
    for (int i = 0; i < n; ++i) {
        if (s[i]=='L'){
            q.insert(find(q.begin(),q.end(),i),i+1);
        }
         if (s[i]=='R'){
            q.insert(find(q.begin(),q.end(),i)+1,i+1);
        }

    }

    for (int i = 0; i < q.size(); ++i) {
        cout<<q[i]<<" ";
    }

    return 0;
}

