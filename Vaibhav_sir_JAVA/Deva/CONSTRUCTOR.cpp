#include<iostream>
using namespace std;

//DEFAULT Constructor

//class joy{
//	public:joy(){
//		cout<<"joy class \n";
//	}
//
//};
//int main(){
//	joy p;
//}

// distructor

//class joy{
//	public:joy(){
//		cout<<"joy class \n";
//	}
//	~joy(){
//		cout<<"joy clean \n";
//	}
//	public:void show(){
//		cout<<"welcome \n";
//	}
//};
//int main(){
//	joy p;
//	cout<<sizeof(p)<<"\n";
//	p.show();
//}




//Parameterized constructor 

//class atm{
//	int code,pws;
//	public:atm(int c,int p){
//		code = c;
//		pws = p;
//	}
//	void show(){
//		cout<<"code = "<<code<<"\t";
//		cout<<"pws = "<<pws<<"\t";
//	}
//};
//
//int main(){
//	int c,p;
//	cout<<"Enter code \n";
//	cin>>c;
//	cout<<"Enter pws \n";
//	cin>>p;
//	atm obj(c,p);
//	obj.show();
//}



//Constructor overloading

//class atm{
//	int code,pws;
//	public:atm(){
//		cout<<"Welcome to Atm \n";
//	}
//	atm(int c,int p){
//		code = c;
//		pws = p;
//	}
//	void show(){
//		cout<<"code = "<<code<<"\t";
//		cout<<"pws = "<<pws<<"\t";
//	}
//	~atm(){
//		cout<<"memory deleted"<<"\n";
//	}
//};
//
//int main(){
//	atm k;
//	int c,p;
//	cout<<"Enter code \n";
//	cin>>c;
//	cout<<"Enter pws \n";
//	cin>>p;
//	atm obj(c,p);
//	obj.show();
//}



//COPY Constructor

//class atm{
//	int code;
//	public:atm(int c){
//		code = c;
//		
//	}
//	void show(){
//		cout<<"code = "<<code<<"\n";
//		
//	}
//};
//
//int main(){
//
//	atm k(201);
//	k.show();
//	atm p=k;  //  implicit assignment copy constructor
//	p.show();
//	atm t(k);  // shallow copy constructor
//	t.show();
//}





//Draw back of shallow copy 

//class atm{
//	int amount,*loc;
//	public : atm(atm &t){
//		amount = t.amount;
//		loc = new int;
//		*loc = *(t.loc);
//	}
//	atm(int amt,int address){
//		amount = amt;
//		loc = new int;
//		loc = &address;
//	}
//	void transaction(int a){
//		amount = amount+a;
//		*loc = *loc+1;
//	}
//	void show (){
//		cout<<"balance = "<<amount<<"\t";
//		cout<<"location = "<<*loc<<"\n";
//	}
//};
//int main(){
//	atm mp(1000,101);
//	atm bhel(mp);
//	mp.show();
//	bhel.show();
//	mp.transaction(20000);
//	mp.show();
//	bhel.show();
//}




















