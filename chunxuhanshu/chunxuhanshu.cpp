#include <iostream>
using namespace std;
class Base
{
public:
	virtual void Examp() = 0;//���麯��
 
	~Base()
	{
		cout << "�������������" << endl;
	}
};
 
class Son:public Base
{
public:
	void Examp()
	{
		cout << "��д�˸���Ĵ��麯��" << endl;
	}
	
	~Son()
	{
		cout << "�������������" << endl;
	}
};
 
int main()
{
	Son p1;
	p1.Examp();
	system("pause");
}