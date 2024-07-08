#include <iostream>
#include <deque>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        deque<int>d;
        int permutation;
        cin>>permutation;
        for(int i=0;i<permutation;++i){
            int x;
            cin>>x;
            if(x<d[0] || d.empty())
                d.push_front(x);
            else
                d.push_back(x);
        }
        for(int item:d)
            cout<<item<<" ";
        cout<<"\n";

    }
}