#include <bits/stdc++.h>
using namespace std;
 
int main() {
   
    string s;
    cin>>s;
    int n=s.length();
    int cntmax=1;
    int cnt=1;
    for(int i=1; i<n; i++){
        
         if(s[i]==s[i-1]){
           cnt++;
       }else{
           cnt=1;
       }
       cntmax=max(cntmax,cnt);
    }
    cout << cntmax << endl;
    return 0;
}
