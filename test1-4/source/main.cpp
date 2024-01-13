#include<iostream>
#include<string>
#include"swap.h"

using namespace std;

int main()
{
    string first_name,last_name;
    cout<<"hello Please enter youer first name :"<<endl;
    cin>>first_name;
    cout<<'\n'
        <<"Hello, "
        <<first_name
        <<"Please enter youer last name :";  
    cin>>last_name;
    cout<<'\n'
        <<"Hello, "
        <<first_name<<" "<<last_name
        <<"welcome";  
    
}
