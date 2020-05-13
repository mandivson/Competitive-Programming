#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,q;
	    cin>>n>>q;
	    string s;
	    cin>>s;
	    ll i;
	    map<char,ll> m;
	    for(i=0;i<n;i++)
	    {
	        m[s[i]]++;
	    }
	    while(q--)
	    {
	        ll c,sum=0;
	        cin>>c;
	        for(auto it: m)
	        {
	            if(c < it.second)
	            {
	                sum=sum+(it.second - c);
	            }
	        }
	        cout<<sum<<endl;
	    }
	}
	return 0;
}
