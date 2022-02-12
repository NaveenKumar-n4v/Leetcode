int countWords(string str)
{
    stringstream s(str);
    string word;
    int count = 0;
    while (s >> word)
        count++;
    return count;
}
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count =0;
        int mx = INT_MIN;
        for(int i=0;i<sentences.size();i++){
            mx = max(countWords(sentences[i]),mx);
        }
        return mx;
        
    }
};