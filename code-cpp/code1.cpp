#include<bits/stdc++.h>
using namespace std;
 
const int maxn=1000005;
int ne[maxn], n, m;
string t,s;
 
int main() {
    cin>>n>>t>>m>>s;
    ne[0]=-1;
    for(int i=1,j=-1; i<n; i++) {
        while(j!=-1 && t[i]!=t[j+1]) {
            j=ne[j];
        }
        if(t[i]==t[j+1]) j++;
        ne[i]=j;
    }
    for(int i=0,j=-1; i<m; i++) {
        while(j!=-1 && s[i]!=t[j+1]) {
            j=ne[j];
        }
        if(s[i]==t[j+1]) j++;
        if(j==n-1) {
            cout<<i-j<<" ";
            j=ne[j];
        }
    }
 
    return 0;
}