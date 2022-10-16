#include <iostream>
using namespace std;

class human {
public:
	string name = "张文杰";
	int age = 19;
};
class student:public human {//定义了一个以public方式继承父类的子类student
public:
	string schoolname = "华中科技大学";//在父类的name和age的基础上增加了一个schoolname
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