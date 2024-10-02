#include <iostream>
using namespace std;
//class RBI {
//	public: virtual void loan(){
//		cout<<" RBI \n";
//	}
//};
//class SBI:public RBI{
//	public: void acc(){
//		cout<<" SBI \n";
//	}
//	void loan(){
//		cout<<" 500000 \n";
//	}
//};
//class UBI:public RBI{
//	public:void accsave(){
//		cout<<"UBI \n";
//	}
//	void loan(){
//		cout<<"600000";
//	}
//};
//
//int main(){
//	RBI *p;
//	RBI t;
//	p=&t;
//	p->loan();
//	SBI s;
//	p=&s;
//	p->loan();
//	UBI u;
//	p=&u;
//	p->loan();
//}



//pure virtual fucntion 


class RBI {
	public: virtual void loan()=0;
virtual void show()=0;

};
class SBI:public RBI{
	
	void loan(){
		cout<<" 500000 \n";
	}
	public: void show(){
		cout<<" SBI \n";
	}

};


int main(){
RBI *p;
SBI s;
p=&s;
p->show();
p->loan();
}




























