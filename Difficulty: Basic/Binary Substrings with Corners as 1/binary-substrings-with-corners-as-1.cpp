class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
         int count1 = 0;

         for(int i = 0; i < s.size(); i++) {
             if(s[i] == '1') {
                 count1++;
             }
         }

         return count1 * (count1 - 1) / 2;

    }
};