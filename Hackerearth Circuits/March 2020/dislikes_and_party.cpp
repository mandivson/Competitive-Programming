/*
You have organized a party and invited other  friends to the party. Therefore, there are total  friends. Everyone must shake hands with every other person except the people he or she dislikes. There are only 10 people at the party who dislike the other 9 people. The remaining people like everyone who is present at the party. Each friend has its own unique identity number.

Two friends shake hands only if both like each other. In other words, if any of them dislike others, then they cannot shake hands. You must calculate the number of handshakes done at the party.

Input format

The first line contains a single integer  ().
The next 10 lines contain 10 integers each. The first integer in a line represents the unique identity of a friend and the other 9 integers represent the identity number of people it dislikes.
Output format

Print a single integer denoting the total number of handshakes.

 

 

SAMPLE INPUT 
11
7 3 11 4 5 6 1 2 8 9
1 11 10 5 6 8 3 7 4 2
9 3 2 7 5 8 10 4 1 11
8 2 5 10 3 6 4 7 9 1
3 10 2 11 7 9 1 5 6 4
5 11 1 3 8 10 4 6 2 9
11 1 8 7 3 2 10 6 5 9
4 1 5 11 10 6 3 2 9 7
2 1 9 11 8 6 7 10 3 4
10 5 4 1 3 6 2 11 7 8
SAMPLE OUTPUT 
1
Explanation
Only for explanation purposes, test cases will have only 10*10 dislike matrix.

Input - 
10
1 2 4 5 6
2 1 3 8 10
3 1 2 4 10
 

Output -

35
 

In the given test case -

1 dislikes 2,4,5,6

2 dislikes 1,3,8,10

3 dislikes 1,2,3,10

so, 1 can handshake with 7,8,9,10 (Not with 3 as 3 dislikes 1 even if 1 likes 3)

Total number of handshakes- 36

*/

#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
typedef pair<int,int> pairs;
 
struct custom_comparator{
	bool operator()(const pair<int, int>& a,
                    const pair<int, int>& b) const
    {
        return less_comparator(minmax(a.first, a.second),
                               minmax(b.first, b.second));
    }
 
    less<pair<int, int>> less_comparator;
};
int main()
{
    ll n;
		cin>>n;
		ll a[10][10],i,j,l;
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				cin>>a[i][j];
			}
		}
		ll th=((n-1)*(n))/2;
		set<pairs,custom_comparator> s;
		for(i=0;i<10;i++)
		{
			for(j=1;j<10;j++)
			{
				pairs x=make_pair(a[i][0],a[i][j]);
				s.insert(x);
			}
		}
		l=s.size();
		//cout<<th<<" "<<l<<endl;
		cout<<th-l<<endl;
    return 0;
}