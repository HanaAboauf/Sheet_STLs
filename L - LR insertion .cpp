//Hana Hany
#include <iostream>
#include <deque>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    deque<int>d;
    d.push_back(n);

    for(int i=s.size()-1;i>=0;--i){
        if(s[i]=='L') {
            d.push_back(i);

        }
        else if(s[i]=='R'){
            d.push_front(i);
        }
        }

        for(int item:d)
            cout<<item<<" ";
        cout<<"\n";

    }
