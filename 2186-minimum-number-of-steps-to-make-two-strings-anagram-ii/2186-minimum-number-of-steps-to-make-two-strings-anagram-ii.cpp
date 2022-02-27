class Solution {
public:
    int minSteps(string s, string t) {
        int cnt=0;
int freq[26]={0};

for(int i=0;i<s.size();i++) freq[s[i]-'a']++;

for(int i=0;i<t.size();i++) freq[t[i]-'a']--;

for(int i=0;i<26;i++)
if(freq[i]>0)
    cnt+=freq[i];

swap(s,t);
for(int i=0;i<26;i++) freq[i] = 0;
for(int i=0;i<s.size();i++) freq[s[i]-'a']++;

for(int i=0;i<t.size();i++) freq[t[i]-'a']--;

for(int i=0;i<26;i++)
if(freq[i]>0)
    cnt+=freq[i];
        
return cnt;
    }
};