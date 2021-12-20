#include<iostream>
#include<initializer_list>

using namespace std;

void error_msg(initializer_list<string> i1)
{
    for(auto &beg:i1)
   {
       cout<<beg<<" ";
   }
   cout<<endl;
}

int main()
{
    string a("hello"), b("world");
    if(a==b)
    error_msg({"functionX", a, b});
    else
    error_msg({"functionX", "okay"});
    return 0;
}