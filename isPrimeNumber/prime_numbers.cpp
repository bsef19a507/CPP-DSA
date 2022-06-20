/*******************************************
Find prime numbers between a and b...
*******************************************/

#include <iostream>
#include <cmath>

using namespace std;

//Function to check if number is prime or NOT...
bool isPrime(int num){
	for(int i = 2; i<=sqrt(num);i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

// Driver code
int main()
{
    int num1,num2;
    do{
    	cout<<"Enter first number: ";
		cin>>num1;
		cout<<"Enter second number: ";
		cin>>num2;
		if(num1>num2){
			cout<<"\nFirst Number must be less than second number...\n"<<endl;
		}
		
	}while(num1>num2);
	
	cout<<"List of Prime numbers between "<<num1<<" and "<<num2<<endl;
	
	for(int i = num1; i<=num2;i++){
		if(isPrime(i)){
			cout<<i<<endl;
		}
	}
	cout<<endl;

	            
    return 0;
}
