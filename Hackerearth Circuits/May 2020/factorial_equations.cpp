/*

Factorial equations
Max. Marks: 100
You are given two numbers  and . Your task is to find the last digit of the following equation: 

Input format

The first line contains two integers  and .

Output format

Print the last digit of the given equation.

Constraints


SAMPLE INPUT 
5 2
SAMPLE OUTPUT 
5
Explanation
factorial of (2) is 2*1=2  ,So 5^2=25 the last digit in 25 is 5

*/


#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x,n;
    cin>>x>>n;
    ll p=0,ans=-1;
    if(n==0 || n==1)
        p=1;
    else if(n==2)
        p=2;
    else if(n==3)
        p=6;
    else if(n==4)
        p=4;
    else
    {
        p=0;
    }
    ans=x%10;
    ans=pow(ans,p);
    ans=ans%10;
    cout<<ans<<endl;
    return 0;
}