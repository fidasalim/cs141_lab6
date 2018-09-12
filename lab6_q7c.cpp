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
	int f,p;
	cout<<"enter any alphabet: ";
	cin>>a;
	p=int(a);
	//auto change of alphabet
	if (int(a)>=97 && int(a)<=122){
	//type casting for the alphabets(using ascii code)to print uppercase
	f=upper(p);
		cout<<"\nThe uppercase of the entered character: "<<char(f-32);}
	if(int(a)>=65 && int(a)<=90){
	//type casting for the alphabets(using ascii code)to print lowercase
		int f=lower(p);
		cout<<"\nThe lowercase of the entered character: "<<char(f+32)<<endl;}
return 0;
}

