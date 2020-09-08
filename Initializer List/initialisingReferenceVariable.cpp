#include<iostream> 
using namespace std; 
  
class Sample { 
    int &i; 
public: 
    Sample(int &x):i(x) {}  //Initializer list must be used 
    int getVal() { return i; } 
}; 
  
int main() { 
    int x=10;
    Sample t1(x); 
    cout<<t1.getVal()<<endl; 
    x=30;
    cout<<t1.getVal()<<endl;
    return 0; 
} 
