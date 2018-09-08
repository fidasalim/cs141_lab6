//including libabry
#include<iostream>
using namespace std;

//funcion that has two int parameters
int func(int a, int b ){
	if(a>b){
	return b;}
	else {
	return a;}
}
// drive fuction
int main(){int p,q;
	//ask the user for two numners
	cout<< "Let the numbers be : ";
	cin>>p>>q;
	//call the function with number for arguments
	func(p,q);
	// tell user the minimum
	cout<<"The minimum among the numbers "<<p<< " and " << q <<" is "<< func(p,q) <<endl;
	
       
return 0;
}
