#include<iostream>
#include"swap.h"
#include<string>

using namespace std;

int main()
{
    // string user_name;
    // cout<<"please enter your name:";
    // cin>>user_name;

    // switch (user_name.size())
    // {
    //     case 0:
    //         cout<<"Ah, the user with no name.\n";
    //         break;
    //     case 1:
    //         cout<<"A 1-character name? Hmm,have you read kafka?"
    //             <<"Hello , "<<user_name<<endl;
    //         break;
    //     default : 
    //         cout<<"Hello , "<<user_name
    //             <<" -- Happy to make you agdcquaintace!\n";
    //         break;

    // }

    int a=10,b=20;
    cout<<a<<b<<endl;
    swap(a,b);
    cout<<a<<b<<endl;
    system("pause");
    return 0;


}