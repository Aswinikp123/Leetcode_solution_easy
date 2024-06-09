class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
int m {0};
int n {0};
vector<bool> result (candies.size(),false);
    for(int i=0;i<(candies.size()-1);i++)
        {
            for(int j=i+1;j<candies.size();j++)
            {
                if(candies.at(i)>candies.at(j)){
                m=candies.at(i);
                }
                else{
                    m=candies.at(j);
                }
            }
            if(m>n){
                n=m;
            }
            
        }     
        for(int k=0;k<candies.size();k++)
        {
            if((candies[k]+extraCandies)>=n){
            result[k]=true;
            }
            else{
            result[k]=false;
            }
        }
    
    return result;
        
    }
};