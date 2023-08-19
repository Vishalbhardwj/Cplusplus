#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        // Naive Approach:

        int maxSum=0;
        for(int i=0;i<n;i++){
            int cir_sum=0;
            for(int j=0;j<n;j++){
                int index=(i+j)%n;
                cir_sum+=a[index];
                maxSum=max(maxSum,cir_sum);
            }
        }
        cout<<maxSum<<endl;


        // Optimized approach:
    // Idea: Take the maximum of the following two :
    // 1.Maximum Sum of a Normal subarray:(Easy:kadane's)
    // 2.Maximum Sum of a Circular subarray:(total sum of array -min sum of a normal sub array):

        int maxEndingsum=a[0];
        int maxSumNorsub=a[0];
        for(int i=1;i<n;i++){
            maxEndingsum=max(maxEndingsum+a[i],a[i]);
            maxSumNorsub=max(maxEndingsum,maxSumNorsub);
        }
        int totalSum=a[0];
        for(int i=1;i<n;i++){
            totalSum+=a[i];
        }

        int minEndingsum=a[0];
        int minSumNorsub=a[0]; 
        for(int i=1;i<n;i++){
            minEndingsum=min(minEndingsum+a[i],a[i]);
          minSumNorsub=min(minSumNorsub,minEndingsum);
        }
        int res=max(maxSumNorsub,totalSum-minSumNorsub);
        if(maxSumNorsub<0){
            cout<<maxSumNorsub<<endl;
        }else{
             cout<<res<<endl;
        }
       
        



    }    
    return 0;
}