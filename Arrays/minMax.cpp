#include <iostream>

using namespace std;

class Pair{
	public:
		int min;
		int max;
	void display(){
		cout<<"\nMax in Array is : "<<min<<endl;
		cout<<"Min in Array is : "<<max<<endl;
	}	
};
//getMinMax(arr, size);
Pair getMinMax(arr, size){
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
		if(arr[i]>minMax.max){
			minMax.max = arr[i];
		}
		if(arr[i]<minMax.min){
			minMax.min = arr[i];
		}
	}
	return minMax;
}

// driver function 
int main()
{  
	Pair minMax;
	int array_of_numbers = {10,334,32,43,32,35,2,123,12,24}
	minMax = getMinMax(array_of_numbers, 10);
	minMax.display();
	

	return 0;  
} 






