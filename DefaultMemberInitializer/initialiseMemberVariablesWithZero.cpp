#include<iostream>
using namespace std;
class Sample{
    int x {};
    int y {};
    public:
    Sample()=default;
    void getVal(){
        cout<<"x:"<<x<<" y:"<<y<<endl;
    }
};

int main(){
    Sample obj1;
    obj1.getVal();//Use empty braces to zero-initialize them if no other default values is sensible.
}
