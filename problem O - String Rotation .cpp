#include "bits/stdc++.h"
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    char c;
    if (s1.size()==s2.size()) {
        for (int i = 0; i < s1.size(); ++i) {
            s1.insert(s1.begin(),s1[s1.size()-1]);
            s1.pop_back();

            if (s1==s2){
                cout<<"Yes";
                return 0;
            }
        }
    }
     cout<<"No";

    return 0;
}
