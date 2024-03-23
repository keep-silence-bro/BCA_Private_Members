#include<iostream>
#include<conio.h>
using namespace std;
class add{
    int a=10,b=50;
    public:
    void input(){
        int sum;
        sum=a+b;
        cout<<"\nsum is="<<sum;
    }
};
class sub:public add{
    int x=100,y=50;
    public:
    void min(){
        int diff;
        diff=x-y;
        cout<<"\nsubstraction is ="<<diff;
    }
};
class mul:public sub{
    int p=5,q=143;
    public:
    void res(){
        int prod;
        prod=p*q;
        cout<<"\nmultiplication is="<<prod;
    }
};
int  main(){
    sub s1;
    s1.min();
    s1.input();
    mul m1;
    m1.res();
    m1.min();
    m1.input();
    return 0;
}