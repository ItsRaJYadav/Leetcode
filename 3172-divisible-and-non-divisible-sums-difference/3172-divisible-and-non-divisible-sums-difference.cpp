class Solution {
public:
    int differenceOfSums(int n, int m) {
        int dSum=0, nSum=0;
        for(int i=1;i<=n; i++){
            if(i%m==0){
                dSum+=i;
            } else{
                nSum+=i;
            }

            // cout<<"dSum"<<dSum <<" "<<"nSum"<<nSum <<endl;
        }

        return nSum-dSum;
    }
};