#include <algorithm>
#include <unordered_map>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> lastseen;
        int start = 0;
        int longest = 0;

        for(int end = 0; end < s.size(); end++){
            char ch = s[end];

            if(lastseen.find(ch) != lastseen.end()){
                start = max(start, 1 + lastseen[ch]);
            }

            lastseen[ch] = end;

            longest = max(longest, end - start + 1);
        }
        return longest;        
    }
};