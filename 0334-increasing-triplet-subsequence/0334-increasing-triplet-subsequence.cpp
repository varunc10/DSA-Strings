class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int j=INT_MAX;
        int k=INT_MAX;
        for(auto i:nums){
            if(i<j){
                j=i;
            }
            else if(j<i&&i<k){
                k=i;
            }
            else if(i>k){
                return true;
            }
        }
        return false;
    }
};