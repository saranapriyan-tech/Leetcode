class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        
        int i = 0;
        bool found = true;


        while(found){
            if (i == digits.size()) {
                digits.push_back(1);
                break;
            }else if(digits[i] == 9){
                digits[i] = 0;
                i++;
            }else{
                digits[i] += 1 ;
                found = false;        
            }
        }
    

        reverse(digits.begin(), digits.end());

        return digits;
    }
};