///week07-2.cpp ���e�P�P�@��
///�e�X�W�j������ΡA�Ʀr�]�_��
///TAICA ��j��¦�{���]�p(c++) �������D ��6�D
#include <iostream>
#include <cmath>///�N�Oc��math.h �̭���sin() cos()
using namespace std;
int main(){

    int n; ///part 2:input
    cin >>n;
    for(int i=1;i<=n*2;i++){///part 2:output
            ///�L�X�Ӥ���A�o�{�����ߪ�1�ܦ��N��/���I�F��!!
        for(int j=1;j<n*2;j++){
            int d = max(abs(i-n),abs(j-n));
            cout <<d+1;
        }
        cout <<endl;///"�{�bi�O:"<<i<<endl; ///�Ӽh������
    }
}///2�|��3�h�A3�|��5�h�A4�|��7�h�A5�|��9�h


