class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
    
    //     to split words or string 
    //     stringstream ss(s);
    //     string word;
    //     while (ss >> word) {
    //     cout << word << endl;
    //     }
        
        
        stringstream ss(sentence);
        string nw;
        int i=1;
        while(ss>>nw){
            if(nw.size()>=searchWord.size()){
                if(nw.find(searchWord)==0){
                    return i;
                }
                else
                    i++;
            }
            else
                i++;
        }
        return -1;
        
    }
};