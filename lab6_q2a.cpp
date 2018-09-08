//including libabry
#include<iostream>
using namespace std;

//funcion that has two int parameters
int func(int a, int b){
	// showing their sum
	int sum = a + b;
	return sum;
}
// drive fuction
int main(){int c,d;
	//ask the user for two numners
	cout<< "Let the numbers be : ";
	cin>>c>>d;
	// tell user the sum
	cout<<"The sum of the numbers "<<c<< " and " << d <<" is "<< 
	//call function for numbers as arguments
        func(c,d) <<endl;
return 0;
}
