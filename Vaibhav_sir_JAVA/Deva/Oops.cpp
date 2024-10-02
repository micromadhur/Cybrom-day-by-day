#include <iostream>
using namespace std;
//class cybrom {
//	public :
//		void show(){
//			cout<<"first program";
//		}
//	
//	int a,b;     //  data member	
//};
//int main(){
//	cybrom obj;
//	obj.a=690;
//	cout<<obj.a;
//	obj.show();
//}





// function overloaded class

//class cybrom{
//	int a,b,c;
//	public:void sum(int x, int y){
//		a=x;
//		b=y;
//		cout<<"sum of two no = "<<a+b<<"\n";
//	}
//	
//	void sum(int x, int y,int z){
//		cout<<"sum of 3 no = "<<x+y+z<<"\n";
//	}
//	
//	void sum(){
//		cout<<"program of function overloading \n";
//	}
//};
//
//int main(){
//	cybrom c;
//	c.sum();
//	c.sum(10,20);
//	c.sum(10,20,30);
//}




// This pointer
//class cybrom{
//	int a,b;
//	public:void sum(int a, int b){
//	this ->a=a;
//	this ->b=b;
//		cout<<"sum of two no = "<<a+b<<"\n";
//	}
//	
//	void sum(int x, int y,int z){
//		cout<<"sum of 3 no = "<<x+y+z<<"\n";
//	}
//	
//	void sum(){
//		cout<<"program of function overloading \n";
//		cout<<a<<"\t"<<b;
//	}
//};
//
//int main(){
//	cybrom c;
//
//	c.sum(10,20);
//	c.sum(10,20,30);
//	c.sum();
//}


//Static data member and memeber funtion

//class cybrom {
//	static int x;
//	public : static void input(int k){
//		x=k;
//	}
//	static void show(){
//		cout<<x<<"\n";
//	}
//};
//int cybrom::x;
//
//int main(){
//	cybrom::input(10);
//	cybrom::show();
//}



//FRIEND Function

//class fri2;
//class fri1{
//	int per = 90;
//	friend void result (fri1,fri2);
//};
//class fri2{
//	int per = 80;
//	friend void result (fri1,fri2);
//};
//void result (fri1 obj1,fri2 obj2){
//	if(obj1.per>obj2.per){
//		cout<<obj1.per<<" is highest";
//	}
//	else {
//		cout<<obj2.per<<" is highest";
//	}
//}
//int main(){
//	fri1 obj1;
//	fri2 obj2;
//	result(obj1,obj2);
//}





//FRIEND  Class 

//class sbi{
//	int amount = 10000;
//	void info(){
//		cout<<"current of SBI \n";
//	}
//	friend class axis;
//};
//class axis{
//	public : void show(sbi s){
//		cout<<"Balance = "<<s.amount<<"\n";
//		s.info();
//	}
//};
//int main(){
//	sbi s1;
//	axis a;
//	a.show(s1);
//}




//COMPOSITE Class

//class client {
//	public: void virus(){
//		cout<<"Hurray!!! your system got hacked \n";
//	}
//};
//class reward {
//	client c;
//	public: void dollar(){
//		cout<<"U got $100000 \n";
//		c.virus();
//	}
//};
//int main(){
//	reward r;
//	r.dollar();
//}








// PRACTICE 


//class y;
//class x{
//	int a = 9;
//	friend void result (x,y);
//};
//class y{
//	int b = 8;
//	friend void result (x,y);
//};
//void result (x obj1,y obj2){
//	if(obj1.a>obj2.b){
//		cout<<obj1.a<<" is highest";
//	}
//	else {
//		cout<<obj2.b<<" is highest";
//	}
//}
//int main(){
//	x obj1;
//	y obj2;
//	result(obj1,obj2);
//}






class tcs{
	char name;
	int salary;
	public : tcs(char n,int s){
		name=n;
		salary=s;
	}
};


