#include<iostream>
using namespace std;
//����
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
    printf("����ǰ��a=%d,b=%d\n",a,b);
    swap1(a,b);
    printf("������a=%d,b=%d\n",a,b);
    system("pause");
    return 0;

}