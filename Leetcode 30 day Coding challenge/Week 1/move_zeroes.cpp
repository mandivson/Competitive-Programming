/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations.
*/

class Solution {
public:
    void moveZeroes(vector<int>& v) 
    {
        int c=0,n;
        n=v.size();
        for(auto i=v.begin();i!=v.end();i++)
        {
            if((*i)!=0)
            {
                v[c]=(*i);
                c++;
            }
        }
        while(c<n)
        {
            v[c++]=0;
        }
    }
};