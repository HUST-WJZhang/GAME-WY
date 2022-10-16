#include <iostream>
using namespace std;

int pinfang(int a)
{
    return a * a;
}
int main()
{
    int i=0;
    int sum=2;
    for(;i<4;i++)
    {
        sum=pinfang(sum);
    }
    cout <<"sum = "<<sum<<endl;
    system("pause");
    return 0;
}