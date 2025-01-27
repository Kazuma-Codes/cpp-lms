#include<iostream>
class A {
public:
    void hel(){
        std::cout<< "yahallo" << std::endl;
    }
};
class B : public A{
    public:
    void hell(){
        std::cout<< "ulala";

    }

};
class C : public B{

};
int main(){
C c;
    //B b;
    //b.hel();
    c.hel();
    c.hell();
}