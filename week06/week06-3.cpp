//week06-3.cpp
//leetcode �ǲ߭p�e simulation �ҧV ��1�D 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; // �}�Ca;
        for(string op : operations){ //c++�i���j��
            //cout << op <<"\n";//�ոշ|�L�X����F��
            if(op[0]=='+'){//�⥽���ۥ[�A�b��^�h
                int temp = a.back();//���O�U�̫�1��
                a.pop_back();//�ȮɦR����
                int temp2 = a.back();//�b�O�U�̫��2��
                a.push_back(temp);//��Ƭۥ[�A��^�h
                a.push_back(temp+temp2);//����̫�1����^�h
            }
            else if (op[0]=='D'){//�ƻs�̫�1��u�Adoubel��2���v�A��^�h
                a.push_back(a.back()*2);
            }
            else if (op[0]=='C'){//�R���̫�1��
                a.pop_back();
            }
            else{//��stoi(op)��ơA��^�h
                a.push_back(stoi(op));
            }
        }
        //��for�j���}�Ca���ȥ����[�_��
        int ans=0;
        for(int now:a){//c++�i���j��A�]�i�H��for(int i=0;i<a.size();i++){int now = a[i]}
            ans+=now;
        }
        return ans;
    }
};
