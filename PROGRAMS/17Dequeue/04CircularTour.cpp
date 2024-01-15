#include<iostream>
using namespace std;

// Brute force method is Very easy 

// Efficient solution : Without  Deque is more efficient!

int circularTour(int pet[],int dis[],int n){
    int currPet=0;
    int prevPet=0;
    int start=0;
    for(int i=0;i<n;i++){
        currPet+=(pet[i]-dis[i]);
        if(currPet<0){
            start=i+1;
            prevPet+=currPet;
            currPet=0;
        }
    }
    return ((currPet+prevPet)>=0)?start+1:-1;

}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int pet[n];
    int dis[n];

    for(int i=0;i<n;i++){
        cin>>pet[i];
    }
    for(int i=0;i<n;i++){
        cin>>dis[i];
    }
    cout<<circularTour(pet,dis,n)<<endl;
    }
   


    return 0;
}