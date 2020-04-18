/*   

Given an array of strings, group anagrams together.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
Note:

All inputs will be in lowercase.
The order of your output does not matter.
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m;
        for(string s:strs)
        {
            string s1=s;
            sort(s1.begin(),s1.end());
            m[s1].push_back(s);
        }
        vector<vector<string>> v;
        for(auto pp:m)
        {
            v.push_back(pp.second);
        }
        return v;
    }
};