#include<iostream>
using namespace std;

//int main(){
//	int a,b;
//	cout<<"enter no.";
//	cin>>a>>b;
//	try {
//		if(b==0){
//			throw b;
//		}
//		cout<<a/b;
//	}
//	catch(int b){
//		cout<<b<<"\n Denominator can not be zero";
//	}
//	cout<<"\n done";
//}


int main(){
	int arr[2]={20,34};
	int i;
	try{
		cout<<"Enter index \n";
		cin>>i;
		if(i>1){
			throw i;			
		}
		cout<<arr[i];
	}
	catch(int i){
		cout<<"out of range";
	}
	cout<<"bye bye";
}
