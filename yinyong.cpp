#include<iostream>
using namespace std;
//引用
void swap1(int& a,int& b)
{
    int t;
    t=a;
    a=b;
    b=t;

}
int main()
{
    int a=1;
    int b=11;
    printf("交换前：a=%d,b=%d\n",a,b);
    swap1(a,b);
    printf("交换后：a=%d,b=%d\n",a,b);
    system("pause");
    return 0;

}