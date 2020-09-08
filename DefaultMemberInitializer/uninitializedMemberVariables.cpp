#include<iostream>
using namespace std;
class Sample{
    int x;
    int y;
    public:
    Sample()=default;
    void getVal(){
        cout<<"x:"<<x<<" y:"<<y<<endl;
    }
};

int main(){
    Sample obj1;
    obj1.getVal();//No initialization means your member variables possibly contain garbage values.
}
