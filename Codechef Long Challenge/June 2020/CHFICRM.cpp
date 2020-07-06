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
	    ll a[n],i;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    i=0;
	    ll balance=0,f=0,t=0,fif=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==5)
	        {
	            f++;
	        }
	        else if(a[i]==10)
	        {
	            if(f==0)
	            {
	                break;
	            }
	            else
	            {
	                f--;
	                t++;
	            }
	        }
	        else if(a[i]==15)
	        {
	            if(t==0  && f<2)
	            {
	                break;
	            }
	            else if(t!=0)
	            {
	                t--;
	                fif++;
	            }
	            else if(f>=2)
	            {
	                f=f-2;
	                fif++;
	            }
	        }
	    }
	    if(i==n)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
