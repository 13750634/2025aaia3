//week03-4.cpp
//leetcode �Q���D 120. Triangle traingle ���̤W�����U�����̤p��
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int N = triangle.size();

        for(int i=N-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};
