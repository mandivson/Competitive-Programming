#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,max=0;
	    cin>>n;
	    while(n--)
	    {
	        ll s,p,v;
	        cin>>s>>p>>v;
	        s++;
	        ll curr=(p/s)*v;
	        if(curr>max)
	            max=curr;
	    }
	    cout<<max<<endl;
	}
	return 0;
}