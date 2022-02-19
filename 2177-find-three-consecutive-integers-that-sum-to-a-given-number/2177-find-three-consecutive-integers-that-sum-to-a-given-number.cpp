class Solution { 
public: 
    vector<long long> sumOfThree(long long num) { 
        vector<long long> arr = {}; 
        if(num%3 != 0) 
            return arr; 
        arr.emplace_back(num/3-1); 
        arr.emplace_back(num/3); 
        arr.emplace_back(num/3+1); 
        return arr; 
    } 
};