class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int number =0;
        for(auto i : operations){
            if(i[1]=='+'){
                number++;
            }
            else if(i[1]=='-')
            {
                number--;
            }
        }
        return number;
        
    }
};