/*
You are given an array  of  integers. Determine the minimum value of the following expression for all valid :

, where .

Input format

First line: A single integer  denoting the number of test cases
For each test case:
First line contains a single integer , denoting the size of the array
Second line contains  space-separated integers 
Output format

For each test case, print a single line containing one integer that represents the minimum value of the given expression

Constraints


Note: Sum of  overall test cases does not exceed 

SAMPLE INPUT 
2
5
1 2 3 4 5
3
2 4 7

SAMPLE OUTPUT 
1
3

Explanation
For test case #1, we can select elements  and , the value of the expression is , which is the minimum possible value. Another possible pair is 4 and 5.

For test case #2, we can select elements 4 and 7, the value of the expression is , which is the minimum possible value.

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
        ll n,min=INT_MAX;
        cin>>n;
        ll a[n],i,r;
        for(i=0;i<n;i++)
           cin>>a[i];
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
          r=((a[i] & a[i-1]) ^ (a[i] | a[i-1]));
          if(r<min)
             min=r;
        }
        cout<<min<<endl;
    }
    return 0;
}

