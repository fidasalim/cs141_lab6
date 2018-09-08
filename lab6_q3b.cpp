//including libabry
#include<iostream>
using namespace std;

//funcion that has two int parameters
void funcR(int a, int b, int &c ){
	if(a>b){
	c = a;
	}
	else {
	c = b;
	}
}
// drive fuction
int main(){int p,q,max;
	//ask the user for two numners
	cout<< "Let the numbers be : ";
	cin>>p>>q;
	//call the numbers for argument
	funcR(p,q,max);
	// tell user the maximum
	cout<<"The maximum among the numbers "<<p<< " and " << q <<" is "<< max <<endl;
	
       
return 0;
}
