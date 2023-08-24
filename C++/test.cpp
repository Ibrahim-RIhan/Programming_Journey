/*Submitted by A F Tamim.
  Dept. of CSE COU-16*/
 
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(v) v.begin(),v.end()
using namespace std;

 
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin>>x;
        int n = x;
        string s="";
        int sum = 0;
        for (int i = 9; i >= 1; i--)
        {
          if(x>=i) {
            x -= i;
            sum += i;
            s = char(('0'+i)) + s;
          }
        }
        if(sum==n) cout<<s<<endl;
        else cout<<-1<<endl;

        
    }

    return 0;
}