/*
You are given a string  of  characters comprising of  and . You can choose any index  and change  to either  or .

Find the minimum number of changes that you must make to string  such that the resulting string is of the following format:

        

where 

In other words, your task is to determine the minimum number of changes such that string  has  number of  in the beginning, followed by the remaining  number of .

Input format

First line: A single integer  denoting the number of test cases
For each test case:
First line contains a single integer  denoting the size of the string
Second line contains string 
Output format

For each test case, print a single line containing one integer that represents the minimum number of changes you need to make in string  as mentioned in the question.

Constraints


Note: Sum of  overall test cases does not exceed 

SAMPLE INPUT 
4
3
AAB
5
AABAA
1
B
4
BABA

SAMPLE OUTPUT 
0
1
0
2

Explanation
For the string  we don't need to make any changes.

For the string  we can change  to  and get the string in the required form.

For the string  we don't need to make any changes.

For the string  we need to make atleast 2 changes to get the string in required form. One possible way is 

*/


#include<iostream>
#include<bits/stdc++.h>
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
        string s;
        cin>>s;
        ll i,a=0,b=0;
        int ar[n],br[n];
        for(i=0;i<n;i++)
        {
            if(s[i]=='A')
                a++;
            else
                b++;
        }
        if(a==n || b==n)
            cout<<"0"<<endl;
        else if((a==1 && s[0]=='A')||(b==1 && s[n-1]=='B'))
            cout<<"0"<<endl;
        else if(a==1 || b==1)
            cout<<"1"<<endl;
        else 
        {
            for(i=0;i<n;i++)
            {
                if(s[i]=='A')
                {
                    a--;
                    ar[i]=a;
                }
                else
                {
                    ar[i]=a;
                }
            }
            for(i=n-1;i>=0;i--)
            {
                if(s[i]=='A')
                {
                    br[i]=b;
                }
                else
                {
                    b--;
                    br[i]=b;
                }
            }
            ll min=INT_MAX;
            for(i=0;i<n;i++)
            {
                ll x=ar[i]+br[i];
                if(x<min)
                    min=x;
            }
            cout<<min<<endl;
        }
    }
    return 0;
}