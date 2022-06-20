/*******************************************
fibonacci series...
*******************************************/

#include <iostream>
#include <cmath>

using namespace std;

//Function ...
int fibonacci(int num){
	if(num<=1){
		return num;
	}
	return fibonacci(num-1)+fibonacci(num-2);
}

// Driver code
int main()
{
    int num1;
    cout<<"Enter number: "<<endl;
    cin>>num1;

	for(int i=0;i<num1;i++){
		if(i==num1-1){
			cout<<fibonacci(i);
		}else{
			cout<<fibonacci(i)<<",";
		}
		
	}

	
	cout<<endl;        
    return 0;
}

















