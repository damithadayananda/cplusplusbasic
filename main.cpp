#include <iostream>

using namespace std;

void dataTypeDemo();
void variableDemo();
void variableScopeDemo();
void constantDemo();
void modifierTypeDemo();
//Global variable declaration
int g=10;
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
int main()
{
    cout << "c++ basic demo" << endl;
    //dataTypeDemo();
    //variableDemo();
    //variableScopeDemo();
    //constantDemo();
    modifierTypeDemo();
    return 0;
}
void dataTypeDemo(){
    int d = 3;
    string s ="damitha";
    float f=70.5;

    cout << "d is:" << d << endl;
    cout << "s is:" << s << endl;
    cout << "f is:" << f << endl;
}
void variableDemo(){
    int a,b;
    int c;
    float f;
    a=10;
    b=20;
    c=a+b;
    cout <<"value of c:"<< c <<endl;
    f=70.0/3.0;
    cout <<"value of f:"<<f<<endl;
}
void variableScopeDemo(){
    cout <<"global g value"<<g<<endl;
    int g=5;
    cout <<"local g value"<<g<<endl;
}
void constantDemo(){
    const int LOCAL = 20;
    int area=LENGTH*WIDTH;
    cout <<"area:"<<area<<endl;
    cout <<"local:"<<20<<endl;
}
void modifierTypeDemo(){
    signed int a;
    unsigned int b;
    long int c;
    short int d;
    a=-10;
    b=-10;
    c=-10;
    d=-10;
    cout<<"signed 10"<<a<<endl;
    cout<<"unsigned 10"<<b<<endl;
    cout<<"long 10"<<c<<endl;
    cout<<"short"<<d<<endl;
}


