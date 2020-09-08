#include<iostream>
using namespace std;

class ShallowCopy{
    private:
    char *str;
    public:
    ShallowCopy(char *x){
        cout<<"Parameterised Constr"<<endl;
        int len= sizeof(x);
        str=new char[len];
        strcpy(str,x);
    }

    void setVal(char* m){
        strcpy(str,m);
    }

    char* getVal() const{
        return str;
    }

    void display(){
        cout<<"the value of *str"<<str<<endl;
    }

    ~ShallowCopy(){}
};


int main(){
    ShallowCopy obj1("Uday");
    cout<<"obj1-->"<<obj1.getVal()<<endl;
    ShallowCopy obj2=obj1;
    cout<<"obj2-->"<<obj2.getVal()<<endl;
    ShallowCopy obj3("Resu");
    obj3=obj1;
    cout<<"obj3-->"<<obj3.getVal()<<endl;
    obj1.setVal("kishore");
    cout<<"obj1-->"<<obj1.getVal()<<endl;
    cout<<"obj2-->"<<obj2.getVal()<<endl;
    cout<<"obj3-->"<<obj3.getVal()<<endl;
}
