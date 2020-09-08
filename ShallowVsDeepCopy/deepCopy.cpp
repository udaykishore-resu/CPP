#include<iostream>
using namespace std;

class DeepCopy{
    private:
    char *str;
    public:
    DeepCopy(char *x){
        cout<<"Parameterised Constr"<<endl;
        int len= sizeof(x);
        str=new char[len];
        strcpy(str,x);
    }

    DeepCopy(const DeepCopy& obj){
        cout<<"Copy Constructor"<<endl;
        int len=sizeof(obj.str);
        str=new char[len];
        strcpy(str,obj.str);
    }
    
    DeepCopy& operator=(const DeepCopy& obj){
        cout<<"assignment Operator"<<endl;
        if(this != &obj) 
            strcpy(str,obj.str); 
        return *this; 
    }

    void setVal(char* m){
        strcpy(str,m);
    }

    char* getVal() const{
        return str;
    }

    void display(){
        cout<<"the value of *str:"<<str<<endl;
    }
    
    ~DeepCopy(){}
};

int main(){
    DeepCopy obj1("Uday");
    cout<<"obj1-->"<<obj1.getVal()<<endl;
    DeepCopy obj2=obj1;
    cout<<"obj2-->"<<obj2.getVal()<<endl;
    DeepCopy obj3("Resu");
    obj3=obj1;
    cout<<"obj3-->"<<obj3.getVal()<<endl;
    obj1.setVal("kishore");
    cout<<"obj1-->"<<obj1.getVal()<<endl;
    cout<<"obj2-->"<<obj2.getVal()<<endl;
    cout<<"obj3-->"<<obj3.getVal()<<endl;
}
