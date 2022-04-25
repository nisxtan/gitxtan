#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class university{
	protected:
	char name[50];
	char location[50];
	public:
	university(char *n,char*l){
		strcpy(name,n);
		strcpy(location,l);
	}
	void display(){
		cout<<"Name of University:"<<name<<endl<<"Adress:"<<location<<endl;
	}
};
class affi:public virtual university{
	protected:
		char afname[50];
		char address[50];
		char program[50];
	public:
		affi(char *n,char*l,char *af,char *ad,char *p):university(n,l){
			strcpy(afname,af);
			strcpy(address,ad);
			strcpy(program,p);
		}
    void display(){
    	cout<<"Name of affiliated college:"<<afname<<endl;
    	cout<<"Address:"<<address<<endl;
    	cout<<"Program is "<<program<<endl;
	}
};
class cons:public virtual university{
	protected:
		char school[50];
		char dean[50];
		char prog2[50];
	public:
		cons(char *n,char *l,char *s,char *d,char *p2):university(n,l){
			strcpy(school,s);
			strcpy(dean,d);
			strcpy(prog2,p2);
		}
		void display(){
			cout<<"School:"<<school<<endl<<"Name of dean:"<<dean<<endl<<"Program:"<<prog2<<endl;
		}
		
};
class student:public affi,public cons{
	char sname[50],sprogram[50];
	int years;
	public:
		student(char *n,char *l,char *af,char *ad,char *p,char *s,char *d,char *p2,char *sn,char *sp,int y):university(n,l),affi(n,l,af,ad,p),cons(n,l,s,d,p2){
			strcpy(sname,sn);
			strcpy(sprogram,sp);
			years=y;
		}
		void display(){
			cout<<"Name:"<<sname<<endl<<"program:"<<sprogram<<endl<<"Years of enrollment:"<<years<<endl;
		}
	
};
int main(){
	student s("Nepal University","Nepal","PU","Pokhara","BEIT","NCIT","Abis","BEIT","Nischal Tandukar","BEIT",10);
	s.university::display();
	s.affi::display();
	s.cons::display();
	s.display();
	getch();
}
