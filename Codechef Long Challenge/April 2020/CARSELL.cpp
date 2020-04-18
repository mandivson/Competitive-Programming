#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],i,m=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,greater<ll>());
        ll sum=0;
        for(i=0;i<n;i++)
        {
            m=(a[i]-i);
            if(m<0)
                m=0;
            sum=sum+m;
        }
        sum=sum%1000000007;
        cout<<sum<<endl;
    }
	return 0;
}
