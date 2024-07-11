#include "bits/stdc++.h"
using namespace std;

int main(){
    string s;
    int q;
    cin>>s>>q;
    deque<char> ss(s.begin(), s.end());
    bool reversed = false;
    while(q--){
        int ti;
        cin>>ti;
        if(ti==1){
            reversed= !reversed;
        }
        else if(ti==2){
            int fi;
            char c;
            cin>>fi>>c;
            if(fi==1 ){
                if(reversed)
                   ss.push_back(c);
                else
                    ss.push_front(c);
            }
            else if(fi==2){
                if(reversed)
                   ss.push_front(c);
                else
                    ss.push_back(c);
            }
        }
    }
   if(reversed)
       reverse(ss.begin(),ss.end());
   for(char c:ss)
        cout<<c;
}