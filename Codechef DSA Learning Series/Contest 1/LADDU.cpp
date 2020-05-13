#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll activities;
	    string nationality;
	    cin>>activities>>nationality;
	    ll limit = 400;
	    ll total_laddus = 0;
	    if(nationality == "INDIAN")
	    {
	        limit=200;
	    }
	    while(activities--)
	    {
	        string activity;
	        cin>>activity;
	        if(activity == "CONTEST_WON")
	        {
	            ll rank;
	            cin>>rank;
	            ll bonus = 0;
	            if(rank <= 20)
	            {
	                bonus = 20 - rank;
	            }
	            total_laddus += 300 + bonus;
	        }
	        else if(activity == "TOP_CONTRIBUTOR")
	        {
	            total_laddus += 300;
	        }
	        else if(activity == "BUG_FOUND")
	        {
	            ll severity;
	            cin>>severity;
	            total_laddus += severity;
	        }
	        else
	        {
	            total_laddus += 50;
	        }
	    }
	   cout<<total_laddus/limit<<endl;
	}
	return 0;
}
