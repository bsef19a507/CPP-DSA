#include <iostream>

class Pair{
	public:
		int min;
		int max;
}

Pair getMinMax(arr[], size){
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
}

// driver function 
int main()
{  

return 0;  
} 




