#include<iostream>
using namespace std;
class person{
	public: 
	person(int value){
		cout<<"person called "<<value<<endl;
		
	}
	person(){
		cout<<"default person called "<<endl;
	}
};
class student:virtual public person{
	public:
		student(int value):person(value){
			cout<<"student called "<<value<<endl;
		}
};

class faculty:virtual public person{
	public:
		faculty(int value):person(value){
			cout<<"faculty called "<<value<<endl;
		}
};

class TA:public student,public faculty{
	public:
	   TA(int value):student(value),faculty(value),person(value){
			cout<<"TA called "<<value<<endl;
		}
};
int main(){
TA ta(10);	
}
