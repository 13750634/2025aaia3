//week06-3.cpp
//leetcode 學習計畫 simulation 模努 第1題 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; // 陣列a;
        for(string op : operations){ //c++進階迴圈
            //cout << op <<"\n";//試試會印出什麼東西
            if(op[0]=='+'){//把末兩樹相加，在塞回去
                int temp = a.back();//先記下最後1巷
                a.pop_back();//暫時吐掉它
                int temp2 = a.back();//在記下最後第2項
                a.push_back(temp);//兩數相加再塞回去
                a.push_back(temp+temp2);//把剛剛最後1項塞回去
            }
            else if (op[0]=='D'){//複製最後1位「再doubel乘2倍」再塞回去
                a.push_back(a.back()*2);
            }
            else if (op[0]=='C'){//吐掉最後1位
                a.pop_back();
            }
            else{//把stoi(op)整數，塞回去
                a.push_back(stoi(op));
            }
        }
        //用for迴圈把陣列a的值全部加起來
        int ans=0;
        for(int now:a){//c++進階迴圈，也可以用for(int i=0;i<a.size();i++){int now = a[i]}
            ans+=now;
        }
        return ans;
    }
};
