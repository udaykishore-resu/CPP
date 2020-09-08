#include<iostream>
using namespace std;
class Sample{
    int x=4;
    int y {5};
    public:
    Sample(int a):x{a} {}
    Sample()=default;
    void getVal(){
        cout<<"x:"<<x<<" y:"<<y<<endl;
    }
};

int main(){
    Sample obj1(20);
    obj1.getVal();
    Sample obj2;
    obj2.getVal();
}
