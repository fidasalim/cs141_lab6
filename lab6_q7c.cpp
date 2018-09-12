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
	int c,f,p;
	cout<<"enter any alphabet: ";
	cin>>a;
	//ask user for the type of alphabet to be displayed
	cout<< "\n Do you need uppercase display(type 1) or lowercase display(type 2)?\n";
	cin>>c;
	//type casting for the alphabets(using ascii code)
	p=int(a);
	if (c==1){
	f=upper(p);
		cout<<"\nThe uppercase of the entered character: "<<char(f-32);}
	if (c==2){
		int f=lower(p);
		cout<<"\nThe lowercase of the entered character: "<<char(f+32)<<endl;}
return 0;
}


