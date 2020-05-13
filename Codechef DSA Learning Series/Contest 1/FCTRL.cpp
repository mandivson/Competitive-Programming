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
	    ll n,c=0;
	    cin>>n;
	    while(n>=5)
	    {
	        n=n/5;
	        c=c+n;
	    }
	    cout<<c<<endl;
	}
    return 0;
}