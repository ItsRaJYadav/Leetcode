class Solution {
public:
    int totalFruit(vector<int>& s) {
    int ans=0;
    int i=0,j=0;
    // if(s.size()==1)return 1;
    unordered_map<int,int>mp;
    
    while(j<s.size()){
        mp[s[j]]++;
        if(mp.size()<=2){
            ans=max(ans,j-i+1);
           
        }
        else if(mp.size()>2){
            
             mp[s[i]]--;
            if(mp[s[i]]==0)mp.erase(s[i]);
            i++;
        }
        j++;
     
    }
    return ans;
    }
};