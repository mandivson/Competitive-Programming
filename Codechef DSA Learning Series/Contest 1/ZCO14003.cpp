#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll n,i;
	cin>>n;
	vector<ll> v;
	while(n--)
	{
	   ll k;
	   cin>>k;
	   v.push_back(k);
	}
	sort(v.begin(),v.end());
	ll max=INT_MIN;
	for(i=0;i<v.size();i++)
	{
	    ll x=v[i]*(v.size()-i);
	    if(x>max)
	        max=x;
	}
	cout<<max<<endl;
	return 0;
}
