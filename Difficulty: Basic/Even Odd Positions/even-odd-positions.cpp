class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        int result = 0;
        if(date %2 ==0){
            for(int i=0;i<car.size();i++){
                if(car[i]%2==1){
                    result +=fine[i];
                }
            }
        }else{
             for(int i=0;i<car.size();i++){
                if(car[i]%2==0){
                    result +=fine[i];
                }
            }
            
        }
        return result;
    }
};