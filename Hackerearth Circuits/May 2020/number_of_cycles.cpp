/*

Number of cycles
Max. Marks: 100
You are given an N-sided regular polygon. You have connected the center of the polygon with all the vertices, thus dividing the polygon into N equal parts.

Your task is to find the count of simple cycles that exist in the modified structure of the polygon.

Input format

The first line contains an integer  denoting the number of queries.
The second line contains an integer  denoting the number of sides in the regular polygon.
Output format

Print the count of simple cycles corresponding to each query in a separate line.

Constraints
 

 

SAMPLE INPUT 
2
3
4
SAMPLE OUTPUT 
7
13
Explanation
No Explanation Provided

*/


#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll q;
   cin>>q;
   while(q--)
   {
       ll n;
       cin>>n;
       cout<<n*(n-1)+1<<endl;
   }
    return 0;
}