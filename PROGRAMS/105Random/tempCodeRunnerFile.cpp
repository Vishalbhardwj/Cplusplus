int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> arr;
    bool status;
    
    int in;
    for(int i=0;i<n;i++){
        status=false;
        in=0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]&&j!=i){
                status=true;
                in+=abs(i-j);
            }
        }
        if(status==false){
            in=0;
        }
        arr.push_back(in);
    }
    cout<<endl;
    for(auto i:arr){
        cout<<i<<" ";
    }