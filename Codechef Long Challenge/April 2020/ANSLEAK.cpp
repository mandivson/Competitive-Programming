#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define endl "\n"

ll likhdokuchbhi(ll alia,ll katrina)
{
    ll ret=(rand() % (katrina -alia +1))+alia;
    return ret;
}

ll printMode(ll a[], ll n) 
{ 
    ll b[n]; 
    ll max = *max_element(a, a + n); 
    ll t = max + 1; 
    ll count[t]; 
    for (ll i = 0; i < t; i++) 
        count[i] = 0; 
    for (ll i = 0; i < n; i++) 
        count[a[i]]++; 
    ll mode = 0; 
    ll k = count[0]; 
    for (ll i = 1; i < t; i++) 
    { 
        if (count[i] > k) { 
            k = count[i]; 
            mode = i; 
        } 
    } 
    return mode;
} 

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m,k,i,j;
	    cin>>n>>m>>k;
	    ll c[n][k];
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<k;j++)
	            cin>>c[i][j];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            ll ans=printMode(c[i],k);
	            cout<<ans<<" ";
	        }
	        else
	        {
	            ll print=likhdokuchbhi(1,m);
	            cout<<print<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
