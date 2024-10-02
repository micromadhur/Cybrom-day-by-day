#include<iostream>
using namespace std;
// SINGLE Inheritance

//class rbi{
//	int a = 90;
//	public:void show(){
//		cout<<"RBI = "<<a<<"\n";
//	}
//};
//class sbi : public rbi{
//	int d = 80;
//	public:void Fshow(){
//		cout<<"SBI = "<<d<<"\n";
//	}
//};
//int main(){
//	sbi s;
//	cout<<sizeof(s)<<"\n";
//	s.show();
//	s.Fshow();
//}



//class RBI {
//	const int rate,amount;
//	public : RBI(int rate, int amount):rate(rate),amount(amount){
//		cout<<rate<<"\n";
//		cout<<amount<<"\n";
//	}
//};
//int main(){
//	RBI sbi(10,1000000);
//	RBI ubi(12,2000000);
//}




//class RBI {
//	const int rate,amount;
//	public : RBI(int r, int a):rate(r),amount(a){
//		cout<<rate<<"\n";
//		cout<<amount<<"\n";
//	}
//};
//int main(){
//	RBI sbi(10,1000000);
//	RBI ubi(12,2000000);
//}




//class atm {
//	public : atm(int cardno){
//		cout<<"CARD NO = "<<cardno<<"\n";
//	}
//};
//class customer : public atm {
//	public : customer(int c,int pwd):atm(c){
//		cout<<"PASSWORD = "<<pwd<<"\n";
//	}
//};
//int main(){
//	customer paisa(1001,2025);
//}





//MULTILEVEL 


//class RBI{
//	public:void rmsg(){
//		cout<<"\n RBI \n";
//	}
//};
//class SBI:public RBI{
//	public:void smsg(){
//		cout<<"\n SBI \n";
//	}
//};
//class CUST:public SBI{
//	public:void Cmsg(){
//		cout<<"\n CUSTOMER \n";
//	}
//};
//
//int main(){
//	CUST c;
//	c.rmsg();
//	c.smsg();
//	c.Cmsg();
//}




//class RBI{
//	public:RBI(){
//		cout<<"\n RBI \n";
//	}
//	~RBI(){
//		cout<<"RBI DELETE";
//	}
//};
//class SBI:public RBI{
//	public:SBI(){
//		cout<<"\n SBI \n";
//	}
//	~SBI(){
//		cout<<"SBI DELETE \n";
//	}
//};
//class CUST:public SBI{
//	public:CUST(){
//		cout<<"\n CUSTOMER \n";
//	}
//	~CUST(){
//		cout<<"CUST DELETE \n";
//	}
//};
//
//int main(){
//	CUST c;
//
//}






// MULTIPLE 



//class UBI{
//	public:UBI(){
//		cout<<"\n UBI \n";
//	}
//	~UBI(){
//		cout<<"UBI DELETE";
//	}
//};
//class SBI{
//	public:SBI(){
//		cout<<"\n SBI \n";
//	}
//	~SBI(){
//		cout<<"SBI DELETE \n";
//	}
//};
//class CUST:public SBI,public UBI{
//	public:CUST(){
//		cout<<"\n CUSTOMER \n";
//	}
//	~CUST(){
//		cout<<"CUST DELETE \n";
//	}
//};
//
//int main(){
//	CUST c;
//
//}




//class UBI{
//	public: void fun(){
//		cout<<"\n UBI \n";
//	}
//
//};
//class SBI{
//	public: void fun(){
//		cout<<"\n SBI \n";
//	}
//
//};
//class CUST:public SBI,public UBI{
//	public: void cust(){
//		cout<<"\n CUSTOMER \n";
//	}
//
//};
//
//int main(){
//	CUST c;
////	c.fun();// DIMOND Problem
////	c.UBI::fun();  //Slicing
//    SBI s=c; // Type casting
//    s.fun();
//
//}









//Hierarichal inheritance

//class RBI {
//	public:RBI(){
//		cout<<"\n RBI Constructor \n";
//	}
//};
//class SBI:public RBI{
//	public: SBI(){
//		cout<<"\n SBI Constructor \n";
//	}
//};
//class UBI:public RBI{
//	public:UBI(){
//		cout<<"\n UBI Constructor \n";
//	}
//};
//class PNB:public RBI{
//	public:PNB(){
//		cout<<"\n PNB Constructor";
//	}
//};
//int main(){
//	SBI s;
//	UBI u;
//	PNB p;
//}






//HYBRID Inheritance

class A{
	public:void f1(){
		cout<<"\n A Class \n";
	}
};
class B:virtual public A{
	public:void f2(){
		cout<<"\n B Class \n";
	}
};
class C:virtual public A{
	public:void f3(){
		cout<<"\n C Class \n";
	}
};
class D:public B, public C{
	public: void f4(){
		cout<<"\n D Class \n";
	}
};

int main(){
	D d;
	d.f4();
	d.f3();
	d.f2();
	d.f1();
}












































