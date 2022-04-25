#include <iostream>
#include <conio.h>
using namespace std;
class BData;
class AData{
	int a;
	public:
		void get(){
			cout<<"Enter a number: "<<endl;
			cin>>a;
		}
		void display(){
			cout<<"a = "<<a<<endl;
		}
		void swap(BData B);
};
class BData{
	int b;
	public:
		void get(){
			cout<<"Enter a number: "<<endl;
			cin>>b;
		}
		void display(){
			cout<<"b = "<<b<<endl;
		}
		friend void AData::swap(BData B);
};
void AData::swap(BData B){
	int temp;
	temp=a;
	a=B.b;
	B.b=temp;
}
int main(){
	AData A;
	BData B;
	A.get();
	B.get();
	A.display();
	B.display();
	A.swap(B);
	A.display();
	B.display();
	getch();
	return 0;
}
