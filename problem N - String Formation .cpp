#include "bits/stdc++.h"
#include <algorithm>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s;
    int t;
    cin>>s>>t;
    int r = 0;
    deque<char>q(s.begin(),s.end());
    while(t--){
        int x;
        cin>>x;
        if(x==1){
            r=1-r;
        }
        else if(x==2){
            int y;
            char c;
            cin>>y>>c;
            if(y==1 ){
                if(r)
//                    s=s+c;
                q.push_back(c);
                else
//                    s=c+s;
                q.push_front(c);
            }
            else if(y==2){
                if(r)
                    q.push_front(c);
//                    s=c+s;
                else
                    q.push_back(c);
//                    s=s+c;
            }
        }
    }
    if(r) {
        for (int i = q.size()-1; i>=0; --i) {
            cout<<q[i];
        }
        return 0;
    }
    else {
        for (int i = 0; i < q.size(); ++i) {
            cout << q[i];
        }
    }
    return 0;
}
