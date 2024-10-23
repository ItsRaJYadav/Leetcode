class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
      int n = chalk.size();
      long sum = 0;
      
      // sum the array and take it's modulo with k to remove all the full circles
      for(auto &i: chalk) sum += i;
      k = k % sum;
      
      // now we start from 0th student and keep of going ahead
      // until a student has shortage of chalks
      int i = 0;
      while(i <= n){
        if(k < chalk[i]) return i;
        k -= chalk[i];
        i++;
      }
       
      return 0;
    }
};