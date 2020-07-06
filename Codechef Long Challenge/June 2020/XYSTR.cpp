#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    ll i,c=0;
	    for(i=0;i<s.length();i++)
	    {
	       if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x'))
	       {
	           c++;
	           i++;
	       }
	    }
	    cout<<c<<endl;
	}
	return 0;
}