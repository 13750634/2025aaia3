///week05-3b.cpp part1:input , part2 : output.
///part 3:stringstream part4 :reverse反過來
///part5:火車+車廂+車廂
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
        ss>>word;
        reverse(word.begin(),word.end());
        cout <<word;
        while(ss>>word){
            reverse(word.begin(),word.end());
            cout<<" "<< word ;
            ///cout <<"讀到了" <<word <<endl;
        }
        cout <<endl;
    }
}

