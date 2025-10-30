// week08-1.cpp leetcode 學習計畫matrix矩陣第1題
// 1672. Richest Customer Wealth 找到嘴有錢的人，有多少錢?
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) { //左手
        int ans = 0;
        for(int i=0;i<accounts.size();i++){
            int now = 0; // 迴圈前面 now = 0
            for(int j=0;j<accounts[0].size();j++){//右手
                now += accounts[i][j];//打前加起來
            }//迴圈裡面 更新 now 陣列  左手i 右手j
            // 迴圈後面 now 拿出來
            ans = max(ans,now); //最有錢的人，更新答案
        }
        return ans;
    }
};
