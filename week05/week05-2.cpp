///week05-2.cpp
///熟悉stringstram
#include <iostream>
#include <sstream>///stringstream 需要它
#include <string>
using namespace std;
int main(){

    cout <<"請輸入一段英文，裡面可以有空格:";
    string s;
    getline(cin ,s);
    cout <<"讀到了s字串:" <<s <<endl;

    stringstream ss(s);
    string word;
    while(ss >>word){
        cout << "有1個字:" <<word <<endl;
    }

}
