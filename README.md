*****************************
        Data types
*****************************
c++ offer following data types

Boolean(bool)
Character(char)
Integer(int)
Floating point(float)
Double floating point(double)
Valueless(void)
Wide character(wchar_t)

above types can be modified using following modifiers

signed
unsigned
short
long

*****************************
    Constant(literals)
*****************************
There are two ways to define constant in c++
1)#define id = 5;
2)const char NEWLINE = '\n';

****************************
    Modifier types
****************************
signed, unsigned, long and short access modifiers can be used 
with,
char,int,double data types
****************************
    storage class
****************************
storage class define the scope and lifetime of  variable
and/or function of c++ program
ex: *auto(default type)
    *register(this variable store in register instead of ram)
    *static(static variable stay through out the programme it's
            value does't change when programme exit from function.
            when global variable declared as static it's scope will
            limit to file it declared. When class declared as static
            only one copy of object will share)
    *extern(extern used to give a reference of a global variable
            that is visible to all program files. when use extern it's 
            impossible to initialize all it does)
    *mutable