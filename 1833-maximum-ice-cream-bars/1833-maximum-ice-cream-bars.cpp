class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        stable_sort(costs.begin(), costs.end());
        int ans=0,count=0;
        if(coins==0)return 0;
        for(int i=0;i<costs.size();i++){
            if(coins<costs[i])break;
            coins-=costs[i];
            count++;
        }
        return count;
    }
};