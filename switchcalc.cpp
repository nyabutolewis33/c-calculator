// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
int num1;
int num2;
double results;
 
 char operation;
 cout<<"enter an operation (+, -, /, *): ";
 cin>>operation;
 cout<<"enter num1 and num2: ";
 cin>>num1;
 cin>>num2;
 
 switch(operation) {
     case '+':
     results= num1+num2;
     break;
     
     case '-':
     results= num1-num2;
     break;
     
     case '*':
     results= num1*num2;
     break;
     
     case '/':
     
     if(num2 != 0){
        results=num1/num2;
     }else {
     	cout<<"you cant divid by 0";
     	return 0;
	 }
     break;
     
     default:
     cout<<"invalid number";
     return 0;
     
 }
     
     cout<<"results: "<<results;
 
 
 return 0;
}

    
