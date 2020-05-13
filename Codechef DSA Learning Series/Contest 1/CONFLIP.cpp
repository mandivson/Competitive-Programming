#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl "\n"
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
	    ll g;
	    cin>>g;
	    while(g--)
	    {
	        ll i,n,q;
	        cin>>i>>n>>q;
	        if(i%2!=0)
	        {
	            if(n%2!=0)
	            {
	                if(q%2!=0)
	                {
	                    cout<<n/2<<endl;
	                }
	                else
	                {
	                    cout<<n/2+1<<endl;
	                }
	            }
	            else
	            {
	                cout<<n/2<<endl;
	            }
	        }
	        else
	        {
	            if(n%2!=0)
	            {
	                if(q%2==0)
	                {
	                    cout<<n/2<<endl;
	                }
	                else
	                {
	                    cout<<n/2+1<<endl;
	                }
	            }
	            else
	            {
	                cout<<n/2<<endl;
	            }
	        }
	    }
	}
    return 0;
}