//including libabry
#include<iostream>
using namespace std;

//funcion that has two int parameters
void funcR(int a, int b ,int &c){
	// showing the maximum
	c=a+b;
}
// drive fuction
int main(){int p,q,sum;
	//ask the user for two numners
	cout<< "Let the numbers be : ";
	cin>>p>>q;
	//call the number for arguments
	funcR(p,q,sum);
	// tell user the sum
	cout<<"The sum of the numbers "<<p<< " and " << q <<" is "<<  sum <<endl;
	
       
return 0;
}
