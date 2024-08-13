/*
Hello, I'm rostuhan, and this is my C++ code that uses OOP.
This is not my first time working with OOP, because my currently WIP (at the time of me writing this) game called "Danmaku Adventure 3" uses a Lua library called "classic", which is an OOP library for Lua.
This code is just a showcase of my skills.
*/
#include <iostream>
using namespace std;
class Foo {
    public:
        string WorldHello = "Hello, World!";
        virtual string HelloWorld() {
            return "Hello, World!";
        }
        virtual void Baz();
};
void Foo::Baz() {
    cout << "Foo Bar" << endl;
}
class Bar : Foo {
    private:
        typedef Foo super;
    public:
        string HelloWorld() {
            cout << "Hello there!" << endl;
            return super::HelloWorld();
        }
        /*overide*/ void Baz() {
            cout << "Bar Foo" << endl;
        }  
};
int main() {
    Foo Obj1;
    Bar Obj2;
    cout << Obj1.HelloWorld() << endl;
    cout << Obj2.HelloWorld() << endl;
    Obj1.Baz();
    Obj2.Baz();
    return 0;
}