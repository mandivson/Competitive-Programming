#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl "\n"
int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        ll c=0,last=a[0];
        for(i=0;i<n;i++)
        {
           if(last>=a[i])
           {
                c++;
                last=a[i];
           }
        }
        cout<<c<<"\n";
    }
    return 0;
}