#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll getKFactors(ll n, ll k)
{
   ll i;
   vector<ll> vec;
   while(n % 2 == 0)
   {
      vec.push_back(2);
      n = n/2;
   }
   for(i = 3; i <= sqrt(n); i=i+2)
   { 
      while(n % i == 0){
         n = n/i;
         vec.push_back(i);
      }
   }
   if(n > 2){
      vec.push_back(n);
   }
   if(vec.size() < k){
         return -1;
   }
   return 1;
}

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll res=getKFactors(n,k);
	    if(res==1)
	        cout<<"1"<<endl;
	    else
	        cout<<"0"<<endl;
	}
	return 0;
}
