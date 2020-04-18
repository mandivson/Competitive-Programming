/*
You are given a chemical equation of the following format:


Your task is to calculate the balancing factor b1, b2, and b3 such that the number of atoms of each of the elements is equal on both sides.

Note: The answer must be in a reduced form.

Input format

The first line consists of four integers x, y, p, and q.

Output format

The output must contain b1, b2, and b3.

Constraints


SAMPLE INPUT 
2 3 4 5
SAMPLE OUTPUT 
6 5 3
Explanation
Given chemical equation is :

C2  +  H3     -------->    C4 H5

The balanced chemical equation is:

6 C2  + 5 H3     -------->    3 C4 H5

*/


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x,y,p,q,lh,lc,l;
    cin>>x>>y>>p>>q;
    lc=(x*p)/(__gcd(x,p));
    lh=(y*p)/(__gcd(y,p));
    l=(lc*lh)/(__gcd(lc,lh));
    ll a,b,c,g;
    c=l;
    a=(c*p)/x;
    b=(c*q)/y;
    g=__gcd(__gcd(a,b),c);
    a=a/g;
    b=b/g;
    c=c/g;
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    return 0;
}
