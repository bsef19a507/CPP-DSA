/*******************************************
Maximum and minimum of an Array
*******************************************/

#include <iostream>

using namespace std;

// getMinMax function code...
struct Pair getMinMax(int arr[], int low,int high)
{
    struct Pair minmax, mml, mmr;    
    int mid;
     
    // If there is only one element
    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];    
        return minmax;
    }
     
    // If there are two elements
    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }
     
    // If there are more than 2 elements
    mid = (low + high) / 2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high);
     
    // Compare minimums of two parts
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;    
     
    // Compare maximums of two parts
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;    
     
    return minmax;
}
 
// Driver code
int main()
{
    int arr[] = {10, 11, 12, 13, 14, 15};
    int arr_size = 6;
    
    
    cout<<"\nArray is :  ";
    for(int i=0;i< 6;i++){
    
    	if(i==5){
    		cout<<arr[i];
		}else{
			cout<<arr[i]<<",";
		}
	}
	cout<<endl;
                              
   minmax.display();
    return 0;
}
