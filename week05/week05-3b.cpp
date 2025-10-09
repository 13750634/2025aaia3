///week05-3b.cpp part1:input , part2 : output.
///part 3:stringstream part4 :reverse反過來
///CPE 第2題 UVA483 倒過來
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){

    string line;
    while(getline(cin,line)){
        stringstream ss(line);
        string word;
        while(ss>>word){
            reverse(word.begin(),word.end());
            cout <<"讀到了" <<word <<endl;
        }
        cout <<line <<endl;
    }
}

