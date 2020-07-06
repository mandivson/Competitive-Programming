#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i,j,l=1;
	    cin>>n;
	    for(i=1;i<=n;i++)
	    {
	        if(i%2!=0)
	        {
	            ll c=n,j=l;
	            while(c--)
	            {
	                cout<<j<<" ";
	                j++;
	            }
	            j--;
	            l=j+n;
	            cout<<endl;
	        }
	        else
	        {
	            ll c=n,j=l;
	            while(c--)
	            {
	                cout<<j<<" ";
	                j--;
	            }
	            j++;
	            l=j+n;
	            cout<<endl;
	        }
	    }
	}
	return 0;
}
