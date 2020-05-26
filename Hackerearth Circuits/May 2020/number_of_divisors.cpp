#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	cout.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        ll tsum=(n*(n+1))/2;
        ll m=k;
        while(m<=n)
        {
          ll d=n/m;
          tsum=tsum-(k-1)*(d*(d+1))/2;
          m=m*k;
        }
        cout<<tsum<<endl;
    }
    return 0;
}