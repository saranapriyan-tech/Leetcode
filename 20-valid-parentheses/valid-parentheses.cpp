#include <string>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        vector<char> st ;
        string open_brackets = "({[";
        string close_brackets = ")}]";
        unordered_map<char,char> bracket_pairs;
        bracket_pairs['('] = ')';
        bracket_pairs['{'] = '}';
        bracket_pairs['['] = ']';
        for(int i = 0; i < size(s); i++){
            if(open_brackets.contains(s[i])){
                st.push_back(s[i]);
            }else if(close_brackets.contains(s[i])){
                if(st.empty()){
                    return false;
                }else if(bracket_pairs[st.back()] != s[i]){
                    return false;
                }else if(bracket_pairs[st.back()] == s[i]){
                    st.pop_back();
                }
            }
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }
};