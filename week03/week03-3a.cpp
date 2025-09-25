//week03-3a.cpp 二合一 把不是0的找出來
//leetcode 學習計畫 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(i < ans.size()) nums[i] = ans[i];
            else nums[i]=0;
        }
    }
};
