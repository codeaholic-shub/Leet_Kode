class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
       int k=0;
       for(auto it:s){
           nums[k]=(it);
           k++;
       }
       
        return s.size();
    }
};