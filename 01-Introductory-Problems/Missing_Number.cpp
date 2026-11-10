#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    int mp[n + 1]={};
 
    for(int i=1;i<=n-1;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
 
    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            cout<<i<<endl;
            break;
        }
    }
 
    return 0;
}
