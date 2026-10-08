#include<iostream>
using namespace std;
class Father{
	public:
		void Fproperty(){
			cout<<"Fathers property";
		}
};
class Mother
{
	public:
		void Mproperty(){
			cout<<"\nMothers Property";
		}
};
class Child:public Father,public Mother
{
	public:
		void Cproperty(){
			cout<<"\nChild property";
		}
};
int main(){
	Child c;
	c.Fproperty();
	c.Mproperty();
	c.Cproperty();
	
	return 0;
}
