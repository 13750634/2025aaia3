///week03-1.cpp
///file-save as �s�ɮɡA�n���ɦW�g��
#include <iostream>///c++��cin cout
#include <vector>///c++���}�C vector
using namespace std;

int main(){

    vector<int> a(2);///���Ӱ}�C�A�̭���2��(�}�C��size�j�p�O2)


    for(int i=0;i<a.size();i++) cout<<a[i]<<' ';///�L�X�}�C
    cout << endl;///����

    a.push_back(99);///��99����}�Ca����᭱ push_back()
    a.push_back(77);///��77����}�Ca����᭱

    for(int i=0;i<a.size();i++) cout<<a[i] <<' ';///�L�X�}�C
    cout << endl;///����
}
