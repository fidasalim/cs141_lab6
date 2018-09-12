//include library
#include <iostream>
using namespace std;
//main function
char lower(int p){
	int q;
	//giving condition
	for(int i=65;i<=90;i++){
		if(p==i){
		q=i;}}
return q;				
}
//driving the function
int main(){
	//declaring variables
	char a;
	cout<<"enter any alphabet in uppercase: ";
	cin>>a;
	//type casting for the alphabets(using ascii code)
	int p=int(a);
	int f=lower(p);
	cout<<"The lowercase of the entered character: "<<char(f+32)<<endl;
return 0;
}

