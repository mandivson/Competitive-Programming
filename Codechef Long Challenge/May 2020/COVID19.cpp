
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i,j,k,max=INT_MIN,min=INT_MAX,l=0,r=0,sum=0;
	    cin>>n;
	    ll a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    for(i=0;i<n;i++)
	    {
	        l=0;
	        r=1;
	        for(j=i;j+1<n;j++)
	        {
	            ll x=abs(a[j]-a[j+1]);
	            if(x<=2)
	                r++;
	            else
	                break;
	        }
	        //cout<<r<<" ";
	        for(k=i;k-1>=0;k--)
	        {
	            if(abs(a[k]-a[k-1])<=2)
	                l++;
	            else
	                break;
	        }
	        //cout<<l<<endl;
	        sum=l+r;
	        if(sum < min)
	            min=sum;
	        if(sum > max)
	            max=sum;
	    }
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
