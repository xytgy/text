#include <bits/stdc++.h>
using namespace std;
int a[2000005];
int main(int argc, char *argv[])
{
    int n, m,id;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=m; i++)
    {
        cin>>id;
        cout<<a[id]<<endl;
    }
    return 0;
}