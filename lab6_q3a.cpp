//including libabry
#include<iostream>
using namespace std;

//funcion that has two int parameters
int func(int a, int b ){
	if(a>b){
	return a;}
	else {
	return b;}
}
// drive fuction
int main(){int p,q;
	//ask the user for two numners
	cout<< "Let the numbers be : ";
	cin>>p>>q;
	//call the function with number for arguments
	func(p,q);
	// tell user the maximum
	cout<<"The maximum among the numbers "<<p<< " and " << q <<" is "<< func(p,q) <<endl;
	
       
return 0;
}
