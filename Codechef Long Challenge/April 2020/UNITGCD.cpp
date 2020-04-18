#include <bits/stdc++.h>
#define ll long long
using namespace std;

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
	    ll n,i,j=1;
	    cin>>n;
	    if(n==1)
	    {
	        cout<<"1"<<endl;
	        cout<<"1"<<" "<<"1"<<endl;
	    }
	    else if(n%2==0)
	    {
	        ll m=n/2;
	        cout<<m<<endl;
	        for(i=1;i<=m;i++)
	        {
	            cout<<"2 "<<j<<" "<<j+1<<endl;
	            j=j+2;
	        }
	    }
	    else
	    {
	        ll m=n/2;
	        cout<<m<<endl;
	        for(i=1;i<m;i++)
	        {
	            cout<<"2 "<<j<<" "<<j+1<<endl;
	            j=j+2;
	        }
	        cout<<"3 "<<j<<" "<<j+1<<" "<<n<<endl;
	    }
	}
	return 0;
}
