
class Solution {
  public:
    int countWays(int n) {
        // your code here
        if(n==0)
        return 1;
        if(n==1 || n==2){
            return n;
        }
    
        return countWays(n-1)+countWays(n-2)+countWays(n-3);
    }
};
