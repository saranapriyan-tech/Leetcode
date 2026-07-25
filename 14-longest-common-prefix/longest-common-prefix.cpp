#include <string>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        string common = strs[0];

        for (int i = 1; i < size(strs); i++) {
            string word = strs[i];
            string newcommon = "";

            int len = min(size(common), size(word));

            for (int j = 0; j < len; j++) {
                if (common[j] == word[j]) {
                    newcommon += word[j];
                } else {
                    break;
                }
            }

            common = newcommon;

            if (common.empty()) {
                return "";
            }
        }

        return common;
    }
};