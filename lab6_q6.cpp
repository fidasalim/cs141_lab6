//including libabry
#include<iostream>
using namespace std;
//funcion to show the outputs the sum of all even numbers between firstNumber and secondNumber.
//looping
int sumEvenNumbers(int num1,int num2){
	int sum=0;
	for (int i=num1+1;i<num2;i++){
		if(i%2==0){
			sum+=i;}}
	return sum;
}
//funcion to show the outputs the sum of all odd numbers between firstNumber and secondNumber.
//looping
int sumOddNumbers(int num1,int num2){
	int sum=0;
	for (int i=num1+1;i<num2;i++){
		if(i%2==1){
			sum+=i;}}
	return sum;
}
int sumSquareEvenNumbers(int num1,int num2){
	int sum=0;
	for (int i=num1+1;i<num2;i++){
		if(i%2==0){
			sum+=i*i;}}
	return sum;
}
int sumSquareOddNumbers(int num1,int num2){
	int sum=0;
	for (int i=num1+1;i<num2;i++){
		if(i%2==1){
			sum+=i*i;}}
	return sum;
}
		
//main function
int main() {
	int num1,num2;
//ASK USER
	cout<<"Let the two numbers be ";
	cin>>num1;
	cin>>num2;
//PROVIDING THE SUM OF even NUMBERS
	cout<<"the sum of even numbers between "<<num1<<" and "<<num2<<" is " <<sumEvenNumbers(num1,num2)<<endl;
//PROVIDING THE SUM OF odd NUMBERS
	cout<<"the sum of odd numbers between "<<num1<<" and "<<num2<<" is " <<sumOddNumbers(num1,num2)<<endl;
//PROVIDING THE SUM OF squares of even NUMBERS
	cout<<"the sum of squares of even numbers between "<<num1<<" and "<<num2<<" is " <<sumSquareEvenNumbers(num1,num2)<<endl;
//PROVIDING THE SUM OF squares of odd NUMBERS
	cout<<"the sum of  squares of odd numbers between "<<num1<<" and "<<num2<<" is " <<sumSquareOddNumbers(num1,num2)<<endl;
	return 0;
}	
