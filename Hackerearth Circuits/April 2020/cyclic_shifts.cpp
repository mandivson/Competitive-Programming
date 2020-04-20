/*
You are given a number  represented as a binary representation of  bits. You are also given 
a number  and a character .

Determine a number  that is generated after cyclically shifting the binary representation of 
 by  positions either left if  or right is .

Input format 

The first line contains an integer  representing the number of queries.
The next  lines contain  as mentioned in the problem statement.
Output format

Print  integers in a separate line representing the answer to each query.

Constraints
 
 

SAMPLE INPUT 
2
7881 5 L
7881 3 R
SAMPLE OUTPUT 
55587
9177
Explanation
For first case :  N in binary is 0001 1110 1100 1001 and shifting it left by 5 position, it becomes
 1101 1001 0010 0011 which in decimal system is 55587

For second case : N in binary is 0001 1110 1100 1001 and shifted 3 position to right it becomes 0010 
0011 1101 1001 which in decimal system is 9177

*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

template <std::size_t N>
inline void
rotateleft(bitset<N>& b, unsigned m) 
{ 
   b = b << m | b >> (N-m); 
   cout << b.to_ulong() << '\n';
} 

template <size_t N>
inline void
rotateright(std::bitset<N>& b, unsigned m) 
{ 
   b = b >> m | b << (N-m); 
   cout << b.to_ulong() << '\n';
}  

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        char c;
        cin>>n>>m>>c;
        bitset<16> b(n);
        if(c=='L')
            rotateleft(b,m);
        else
            rotateright(b,m);
    }
    return 0;
}