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
	    ll a[n],i,prev=-1,curr=-1,f=0;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==1 && curr==-1)
	            curr=i;
	        else if(a[i]==1 && curr!=-1)
	        {
	            prev=curr;
	            curr=i;
	            if((curr-prev)<6)
	            {
	                f=1;
	                break;
	            }
	        }
	    }
	    if(f==1)
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}
