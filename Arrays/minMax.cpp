#include <iostream>

using namespace std;

// class Pair to get min and max number to return from functin...
class Pair{
	public:
		int min;
		int max;
	void display(){
		cout<<"\nMax in Array is : "<<min<<endl;
		cout<<"Min in Array is : "<<max<<endl;
	}	
};


//getMinMax function that return an object of Pair class containing min ana Max numbers...
Pair getMinMax(int arr[], int size){
	Pair minMax;
	if(size==0){
		minMax.max = 0;
		minMax.min = 0;
		return minMax;
	}
	 
	if(arr[0]>arr[1]){
		minMax.max = arr[0];
		minMax.min = arr[1];
	}else{
		minMax.max = arr[1];
		minMax.min = arr[0];
	}
	
	for(int counter = 0; counter < size; counter++){
		if(arr[counter]>minMax.max){
			minMax.max = arr[counter];
		}
		if(arr[counter]<minMax.min){
			minMax.min = arr[counter];
		}
	}
	return minMax;
}

// driver function 
int main()
{  
	Pair minMax;
	int array_of_numbers[10] = {10,334,32,43,32,35,2,123,12,24};
	minMax = getMinMax(array_of_numbers, 10);
	cout<<"Array : {";
	for(int i = 0 ; i<10;i++){
		if(i<9){
			cout<<array_of_numbers[i]<<", ";
		}else{
			cout<<array_of_numbers[i];
		}
	
	}
	cout<<"}"<<endl;
	minMax.display();

	return 0;  
} 






