///week02-2b.cpp �ϥ� c++ 2011 �~�s�����r�� stoi()���\��
///�b codeblocks �̡A�����}�� setting-comiler...��c++11 ���Ĥ�
///SOIT106_ADVANCE_001 using c++
#include <iostream> ///cin cout ��J��ơB�L�X���
#include <string> ///string �r�ꪺ�\��
using namespace std;/// �ϥΡu�R�W�Ŷ��v���઺std
int main(){

	string a;///�ŧi�r��a
	cin >> a;///��J�r��a

	string ans;///�ŧi�r��ans�񵪮ץΪ�
	int N = a.length();///�r��a������
	for(int i=N-1;i>=0;i--){///�˹L�Ӫ��j��
		ans += a[i];///�b�j��̡A��a[i]���ans���᭱
	}

	cout << a << '+'<<stoi(ans) << '='
		<< stoi(a)+stoi(ans)<< endl;
} ///stoi() is " string to int "��u�r��v�ܦ��u��ơv
