#include<bits/stdc++.h>
#include <iostream>
using namespace std;




  vector<int> remove(vector<int>& nums){
        vector<int> v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                v.push_back(nums[i]);
            }
        }
        return v;
        
    }

 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
       

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()){
            cout<<"In loop"<<endl;
            if(nums1[i]<nums2[j]){
               cout<<"less"<<endl;
                i++;
            }else if(nums1[i]>nums2[j]){
              cout<<"greater"<<endl;
                j++;
            }else if(nums1[i]==nums2[j]){
                cout<<"equal"<<endl;
                v.push_back(nums1[i]);
                i++;
                j++;
                

            }
        }
        if(v.size()>=1){
            v=remove(v);
        }
        
        
        return v;
    }

int main() {
    int t;
    cin>>t;
    while(t--){
        
        vector<int> nums1;
        vector<int> nums2;
        cout<<"Enter the size of nums1 and element "<<endl;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            nums1.push_back(k);
        }
        cout<<"Enter the size of nums2 and element "<<endl;
        int n2;
        cin>>n2;
        for(int i=0;i<n2;i++){
            int k;
            cin>>k;
            nums2.push_back(k);
        } 
        
        vector<int> v=intersection(nums1,nums2);
        for(auto i:v){
            cout<<i<<endl;
        }
    
        }
   

    return 0;
}