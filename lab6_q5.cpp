//including libabry
#include<iostream>
using namespace std;

//funcion that has two int parameters
int func(int a, int b,int &c ){
	if(c == 1){
		int sum = a + b;
		return sum;}
	if (c == 2){
		if(a>b){
		return a;}
		else {
		return b;}}
	if(c==3){
		if(a>b){
		return b;}
		else {
		return a;}
	}
	
}
// drive fuction
int main(){int p,q,input;
	//ask the user for two numners
	cout<< "Let the numbers be : ";
	cin>>p>>q;
	//ask the user for the operation
	cout<<"Which operation do you want?"<<endl<<"For sum:type 1"<<endl<<"For maximum between the two numbers: type 2"<<endl<<"For minimum between the two numbers: type 3"<<endl;
	cin>>input;
	// tell user the minimum
	cout<<"The minimum among the numbers "<<p<< " and " << q <<" is "<<
	//call the function with number for arguments 
	func(p,q,input) <<endl;
	
       
return 0;
}
