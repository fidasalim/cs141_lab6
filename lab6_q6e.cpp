//including libabry
#include<iostream>
using namespace std;
//funcion to show the outputs the sum of all even numbers between firstNumber and secondNumber.
//looping
int sumEven(int num1,int num2){
	int sum=0;
	for (int i=num1+1;i<num2;i++){
		if(i%2==0){
			sum+=i;}}
	return sum;
}
//funcion to show the outputs the sum of all odd numbers between firstNumber and secondNumber.
//looping
int sumOdd(int num1,int num2){
	int sum=0;
	for (int i=num1+1;i<num2;i++){
		if(i%2==1){
			sum+=i;}}
	return sum;
}
int sumSquareEven(int num1,int num2){
	int sum=0;
	for (int i=num1+1;i<num2;i++){
		if(i%2==0){
			sum+=i*i;}}
	return sum;
}
int sumSquareOdd(int num1,int num2){
	int sum=0;
	for (int i=num1+1;i<num2;i++){
		if(i%2==1){
			sum+=i*i;}}
	return sum;
}
		
//main function
int main() {
	int num1,num2,c;
//ASK USER
	cout<<"Let the two numbers be ";
	cin>>num1;
	cin>>num2;
	cout<< "\n Which function you would like to get? "<<"\nFor the function : "<<
	"\n Adding even numbers between the numbers : Type 1"<<
	"\n Adding odd numbers between the numbers : Type 2"<<
	"\n Adding square of even numbers between the numbers : Type 3"<<
	"\n Adding square of odd numbers between the numbers : Type 4";
	cin>>c;cout<<endl;
if(c==1){	
	//PROVIDING THE SUM OF even NUMBERS
	cout<<"the sum of even numbers between "<<num1<<" and "<<num2<<" is " <<sumEven(num1,num2)<<endl;}
if(c==2){
	//PROVIDING THE SUM OF odd NUMBERS
	cout<<"the sum of odd numbers between "<<num1<<" and "<<num2<<" is " <<sumOdd(num1,num2)<<endl;}
if(c==3){
	//PROVIDING THE SUM OF squares of even NUMBERS
	cout<<"the sum of squares of even numbers between "<<num1<<" and "<<num2<<" is " <<sumSquareEven(num1,num2)<<endl;}
if(c==4){
	//PROVIDING THE SUM OF squares of odd NUMBERS
	cout<<"the sum of  squares of odd numbers between "<<num1<<" and "<<num2<<" is " <<sumSquareOdd(num1,num2)<<endl;}
	return 0;
}	
