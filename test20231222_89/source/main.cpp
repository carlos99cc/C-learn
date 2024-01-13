#include<iostream>

using namespace std;
int as;



void func(int& a)
{
    cout<<"funnc (int&a)的调用"<<endl;
}
void func(const int& a)
{
    cout<<"funnc (const int&a)的调用"<<endl;
}

int main()
{
    int a =10;
    func(a);

    system("pause");
    return 0;
}

