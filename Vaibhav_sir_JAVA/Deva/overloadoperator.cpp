#include<iostream>
using namespace std;
//class cybrom{
//	int a;
//	public:cybrom(int b){
//		a=b;
//	}
//	void operator++(){
//		a++;
//		cout<<a<<"\n";
//	}
//};
//int main(){
//	cybrom obj(20);
//	++obj;
//	obj.operator++();
//}





//class weight{
//	int kg,grm;
//	public:weight(int k=0,int g=0){
//		kg=k;
//		grm=g;
//	}
//	weight operator +(weight &w){
//		weight tmp;
//		tmp.kg=kg+w.kg;
//		tmp.grm=grm+w.grm;
//		return tmp;	
//	}
//	void show(){
//		cout<<"killogram = "<<kg<<" & "<<"gram = "<<grm<<"\n";
//	}
//};
//int main(){
//	weight w1(200,30);
//	weight w2(190,32);
//	weight w3=w1+w2;
//	w3.show();
//}







class weight{
	int kg,grm;
	public:weight(int k=0,int g=0){
		kg=k;
		grm=g;
	}
	void operator +(weight &w){
		kg=kg+w.kg;
	    grm=grm+w.grm;
	
			
	

		cout<<"killogram = "<<kg<<" & "<<"gram = "<<grm<<"\n";
	}
};
int main(){
	weight w1(200,30);
	weight w2(190,32);
    w1+w2;
	
}




























