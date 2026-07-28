#include <string>
#include <sstream>
#include <vector>
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word){
            words.push_back(word);
        }

        return size(words[size(words) - 1]);
    }
};