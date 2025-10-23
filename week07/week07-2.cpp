///week07-2.cpp 像畫星星一樣
///畫出超大的正方形，數字包起來
///TAICA 交大基礎程式設計(c++) 期中考題 第6題
#include <iostream>
#include <cmath>///就是c的math.h 裡面有sin() cos()
using namespace std;
int main(){

    int n; ///part 2:input
    cin >>n;
    for(int i=1;i<=n*2;i++){///part 2:output
            ///印出來之後，發現正中心的1很有意思/有點東西!!
        for(int j=1;j<n*2;j++){
            int d = max(abs(i-n),abs(j-n));
            cout <<d+1;
        }
        cout <<endl;///"現在i是:"<<i<<endl; ///樓層的概念
    }
}///2會有3層，3會有5層，4會有7層，5會有9層


