#include <iostream>
using namespace std;

class human {
public:
	string name = "���Ľ�";
	int age = 19;
};
class student:public human {//������һ����public��ʽ�̳и��������student
public:
	string schoolname = "���пƼ���ѧ";//�ڸ����name��age�Ļ�����������һ��schoolname
	void print()
	{
		cout << name << endl << age << endl << schoolname << endl;
	}
};
int main()
{
	student st;
	st.print();
    system("pause");
	return 0;
}