#include<iostream>
using namespace std;
class Animal{
	public:
		void eat(){
			cout<<"Animal eats";
		}
};
class Dog:public Animal
{
	public:
		void bark(){
			cout<<"\nDog Barks";
		}
};
int main(){
	Dog d;
	d.eat();
	d.bark();
	
	return 0;
}





                           





















