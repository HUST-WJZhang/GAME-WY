#include <iostream>
using namespace std;
class Base
{
public:
	virtual void Examp() = 0;//纯虚函数
 
	~Base()
	{
		cout << "父类的析构函数" << endl;
	}
};
 
class Son:public Base
{
public:
	void Examp()
	{
		cout << "重写了父类的纯虚函数" << endl;
	}
	
	~Son()
	{
		cout << "子类的析构函数" << endl;
	}
};
 
int main()
{
	Son p1;
	p1.Examp();
	system("pause");
}