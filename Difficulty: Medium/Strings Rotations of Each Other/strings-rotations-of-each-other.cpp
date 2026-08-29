class Solution {
  public:
  void rightrotations(string &s1){
      char temp = s1[s1.size()-1];
      for(int i=s1.size()-2;i>=0;i--){
          s1[i+1] = s1[i];
      }
      s1[0] = temp;
  }
//   void leftrotations(string &s1){
//       char temp = s1[0];
//       for(int i=1;i<s1.size();i++){
//           s1[i-1] = s1[i];
//       }
//       s1[s1.size()-1] = temp;
//   }
    bool areRotations(string &s1, string &s2) {
        
        
        // if(s1.size()!=s2.size())
        // return false;
        // // code here
        // string p = s1;
        // for(int i=0;i<s1.size();i++){
        //      rightrotations(p);
        //      if(p == s2){
        //       return true;
        //       break;
        //      }
        // }
    //   }else {
    //       int k = 0;
    //       while(k<s1.size()){
    //           leftrotations(p);
    //           if(p == s2){
    //               return true;
    //               break;
    //           }
    //           k++;
    //       }
    
    
    if(s1.size() != s2.size())
        return false;

    string temp = s1 + s1;

    return temp.find(s2) != string::npos;
    //   return false;
    }
};