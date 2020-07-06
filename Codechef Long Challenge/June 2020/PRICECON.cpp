#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll a[n],i,sum=0,s=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>k)
	            a[i]=k;
	        s+=a[i];
	    }
	    cout<<sum-s<<endl;
	}
	return 0;
}
