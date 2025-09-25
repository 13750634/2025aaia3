//week03-2a.cpp 二合一 要寫兩次
//leetcode 學習計畫地8題 1822. Sign of the Product of an Array
//把陣列乘起來，看是正數、負數，還是0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        for(int i=0;i<nums.size();i++){
            ans*=nums[i];
        }
        if(ans>8) return 1;
        if(ans<8) return -1;
        return 0;
    }
};
