#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
    while(T--) {
        long long x,y;
        cin >> y >> x;
        long long maxi=max(x,y);
        long long mini=min(x,y);
        if(maxi%2!=0){
            if(x==y){
                cout<<(maxi*maxi)-mini+1<<endl;
            }
            else if(x>y){
                cout<<(maxi*maxi)-mini+1<<endl;
            }
            else{
                cout<<(maxi*maxi)-(maxi-1)-(maxi-x)<<endl;
            }
        }else{
            if(x==y){
                cout<<(maxi*maxi)-mini+1<<endl;
            }
            else if(x>y){
                cout<<(maxi*maxi)-(maxi-1)-(maxi-y)<<endl;
            }
            else{
                cout<<(maxi*maxi)-mini+1<<endl;
            }
        }
    }
    return 0;
}
