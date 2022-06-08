/*******************************************
Reverse Array 
*******************************************/

#include <iostream>

using namespace std;

// ReverseArray function code...
void reverseArray(int arr[], int start,int end)
{
     int temp;
     temp = arr[start];
     arr[start] = arr[end];
     arr[end] = temp;
     start++;
     end--;
     
  
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
                              
    reverseArray(arr, 0,5);
    return 0;
}
