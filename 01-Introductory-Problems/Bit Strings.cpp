#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
   long long ans=1;
   long long base=2;
   while(n>0){
       if(n%2==1){
           ans=(ans*base)%1000000007;
       }
       base=(base*base)%1000000007;
       n/=2;
   }
   cout<<ans<<endl;
    return 0;
}
