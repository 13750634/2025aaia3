//week05-1.cpp
// leetcode 學習計畫 Built-In Functions 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);// 把字串，變成之前教的 cin iostram
        string word;
        /*ss >> word;
        cout <<"讀到了" <<word <<"\n";*/
        /*ss >> word;
        cout <<"讀到了" <<word <<"\n";*/
    while(ss >> word){
    }
        return word.length();
    }
};
