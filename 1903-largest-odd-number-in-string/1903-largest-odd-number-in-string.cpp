class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.size()-1;
		//Find the rightmost odd number
        while(i>=0 and (num[i--]-'0')%2==0) num.pop_back();
        return num;
    }
};