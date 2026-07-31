class Solution {
  public:
    int remAnagram(string &s1, string &s2) {
        // code here
        vector<int> alpha(26,0);
        int count = 0;
        for(int i=0;i<s1.size();i++){
            alpha[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            alpha[s2[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            count +=abs(alpha[i]);
        }
        return count;
    }
};
