///week05-3b.cpp part1:input , part2 : output.
///part 3:stringstream part4 :reverse�ϹL��
///part5:����+���[+���[
///CPE ��2�D UVA483 �˹L��
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
            ///cout <<"Ū��F" <<word <<endl;
        }
        cout <<endl;
    }
}

