#include <bits/stdc++.h>
using namespace std;

int main(){
    int size,ser=0,dima=0,turn=0;
    cin>>size;
    vector<int>v(size);
    for(int i=0;i<size;++i)
        cin>>v[i];
    int right=0,left=size-1,mx=INT_MIN;
    while(right<=left){
        if(v[right]>v[left]){
            mx=v[right];
            right++;
        }
        else{
            mx=v[left];
            left--;
        }
        if(turn%2==0)
            ser+=mx;
        else
            dima+=mx;
        turn++;

    }
    cout<<ser<<" "<<dima;
}