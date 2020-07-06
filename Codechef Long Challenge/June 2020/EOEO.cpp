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
	    ll ts,i,total=0;
	    cin>>ts;
	    if(ts%2!=0)
	    {
	        total=ts/2;
	    }
	    else
	    {
	        ll s=__builtin_popcount(ts);
	        if(s==1)
	        {
	            total=0;
	        }
	        else if(ts%2==0 && ts%4!=0)
	        {
	            total=ts/4;
	        }
	        else
	        {
	            ll c=0,n=ts;
	            while(n%2==0)
	            {
	                c++;
	                n=n/2;
	            }
	            c++;
	            ll p=pow(2,c);
	            total=ts/p;
	        }
	    }
	    cout<<total<<endl;
	}
	return 0;
}
