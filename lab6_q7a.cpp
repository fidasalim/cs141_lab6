//include library
#include <iostream>
using namespace std;
//main function
char upper(int p){
	int q;
	//giving condition
	for(int i=97;i<=122;i++){
		if(p==i){
		q=i;}}
return q;				
}
//driving the function
int main(){
	//declaring variables
	char a;
	cout<<"enter any alphabet in lowercase:";
	cin>>a;
	//type casting for the alphabets(using ascii code)
	int p=int(a);
	int f=upper(p);
	cout<<"The uppercase of the entered character:"<<char(f-32)<<endl;
return 0;
}


