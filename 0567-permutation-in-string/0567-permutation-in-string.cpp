class Solution {
public:
    bool checkInclusion(string s1, string s) {
        //same as 438 Find all anagrams in a string
        if(s1.size()>s.size())return 0;
        unordered_map<char,int>m;
        vector<int>v;
        for(int i=0;i<s1.size();i++)m[s1[i]]++;//storing the occ. of string p in the map
        // cout<<m.size();
        int count=m.size(),i=0,j=0,k=s1.size();
        while(j<s.size()){
            if(m.find(s[j])!=m.end()){  //calculation part
                m[s[j]]--;
                if(m[s[j]]==0)count--;
            }
            if(j-i+1<k) j++; //window length not achived yet
            else if(j-i+1==k){ //window length achived, 

                if(count==0)return 1; //one of the ans will be calculated  
                
                if(m.find(s[i])!=m.end()){  //remove calculation part
                    m[s[i]]++;
                    if(m[s[i]]==1)count++;
                }
                i++;   //slide the window
                j++;
            }
        }
        return false;   //return ans
    }
};