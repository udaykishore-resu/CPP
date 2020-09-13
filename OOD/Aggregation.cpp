#include<iostream>
#include<string>
using namespace std;

class Address{
	string street,city,state;
	public:
	Address(street_c,city_c,state_c):street(street_c),city(city_c),state(state_c){}
};

class Student{
	int roll_no;
	string name;
	public:
	Student(rno,name_c):roll_no(rno),name(name_c){}
	void display(Address &obj){
		cout<<roll_no<<" :"<<name<<" "<<obj->street<<obj->city<<obj->state<<endl;
	}
};

int main(){
	Address a1("Madhapur", "Hyderabad", "Telangana");
	Student s1(101,"Udaykishore");
	s1.display(a1);
}