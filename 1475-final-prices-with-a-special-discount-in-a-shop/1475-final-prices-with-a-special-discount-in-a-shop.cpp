class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>answer;
        for(int i=0;i<prices.size();i++){
            bool found =false;
            for(int j=1;j<prices.size();j++){
                
                    if( j > i && prices[j] <= prices[i]){
                        prices[i]=prices[i]-prices[j];
                        answer.push_back(prices[i]);
                        found= true;
                        break;
                    }
                    

                
            }
            if(found== false){
                  answer.push_back(prices[i]);

            }
        }
      return answer;  
    }
};