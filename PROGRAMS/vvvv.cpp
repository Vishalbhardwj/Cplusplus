#include<iostream>

using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end  = size -1;
   
    int mid;
    while(start <= end){
        
     mid = ( start + end ) / 2;
       
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]< key){
            //search in left
            start= mid +1;

        }
        else {
            //serch in right
           end=mid-1;

        }
  
    }
    //element not found
    return -1;

}

int main(){
    int t;
    cin>>t;
    while(t--){
    
    int arr[] = {2,4,6,11,13,14,17,27,31};
    cout<<"Enter key"<<endl;
    int key ;
    cin>>key;
    int size = 9 ;

    int indextarget = binarySearch(arr,size,key);

    if( indextarget == -1){
        cout<<"Key is not presnt in the given array."<<endl;

    }
    else{
        cout<<"Key valuse is present at "<< indextarget <<" index. "<<endl;
    }
    }
   
    return 0;
}
