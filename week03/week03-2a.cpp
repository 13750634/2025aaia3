//week03-2a.cpp �G�X�@ �n�g�⦸
//leetcode �ǲ߭p�e�a8�D 1822. Sign of the Product of an Array
//��}�C���_�ӡA�ݬO���ơB�t�ơA�٬O0
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
