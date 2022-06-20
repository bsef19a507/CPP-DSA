/*******************************************
sum_of_first_n_natural_numbers
*******************************************/

#include <iostream>

using namespace std;

//Function to check if number is prime or NOT...
int sumOfNumbers(int num){
	int sum = 0;
	for(int i = 0; i<=num;i++){
		sum += i;
	}
	return sum;
}

// Driver code
int main()
{
    int n;
    cout<<"Enter Integer Number n: ";
    cin>>n;
    cout<<"Sum of first "<<n<<" natural numbers is  : "<<sumOfNumbers(n);
		


	            
    return 0;
}
