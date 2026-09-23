class Solution {
  public:
    int remAnagram(string &s1, string &s2) {
        // code here
        vector<int> lower(26,0);
        for(int i=0;i<s1.size();i++){
            lower[s1[i]-'a']++;
        }
        
        for(int i=0;i<s2.size();i++){
            lower[s2[i]-'a']--;
        }
        
        int count = 0;
        for(int i=0;i<26;i++){
            count+=abs(lower[i]);
    
        }
        return count;
    }
};
