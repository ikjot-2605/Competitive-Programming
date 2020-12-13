vector<int> segregate(int arr[],int n){
    vector<int> positives;
    for(int i =0;i<n;i++){
        if(arr[i]>0){
            positives.push_back(arr[i]);
        }
    }
    return positives;
}
int missingNumber(int arr[], int n) { 
    vector<int> realtest;
    realtest = segregate(arr,n);
    for(int i=0;i<realtest.size();i++){
        if(abs(realtest[i])<=realtest.size())realtest[abs(realtest[i])-1]*=-1;
    }
    for(int i =0;i<realtest.size();i++){
        if(realtest[i]>0){
            return i+1;
        }
    }
    return realtest.size()+1;
} 