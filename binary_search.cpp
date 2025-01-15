
#include <iostream>
using namespace std;

int binary_search_iterative(int arr[],int len,int target){
int low=0,high=len-1;
while (low<=high)
{    int mid=low+(high-low)/2;
    if(arr[mid]==target){
        return mid;
    }

    else if(arr[mid]<target){

         low=mid+1;
    }
    else{
        high=mid-1;
    }
    /* code */
}
return -1;


}

int binary_search_recursive(int arr[],int low,int high,int target){
int mid=low+(high-low)/2;
if(low>high){
    return -1;
}
if(arr[mid]==target){
    return mid;
}

else if(arr[mid]>target){

    return binary_search_recursive(arr,low,mid-1,target);
}

else{
    return binary_search_recursive(arr,mid+1,high,target);
}




}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


    int targetValue = 8;

    int result = binary_search_iterative(numbers, 10, targetValue);
     if(result==-1){
        cout<<"Element not found"<<endl;
     }
        else{
            cout<<"Element found at index "<<result<<endl;
        }
    
    result = binary_search_recursive(numbers, 0, 9, targetValue);
    if(result==-1){
        cout<<"Element not found"<<endl;
     }
        else{
            cout<<"Element found at index "<<result<<endl;
        }

    return 0;
}
