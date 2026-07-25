#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> values;

        values['I'] = 1;
        values['V'] = 5;
        values['X'] = 10;
        values['L'] = 50;
        values['C'] = 100;
        values['D'] = 500;
        values['M'] = 1000;

        reverse(s.begin(), s.end());

        int total = values[s[0]];  

        for (int i = 1; i < s.size(); i++) {
            if (values[s[i]] < values[s[i - 1]]) {
                total -= values[s[i]];
            } else {
                total += values[s[i]];
            }
        }

        return total;
    }
};