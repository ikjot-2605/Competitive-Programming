#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr) {
    int candies[n];
    for(int i=0;i<n;i++){
        candies[i]=1;
    }
    for(int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i]&&candies[i-1]>=candies[i]){
            candies[i]=candies[i-1]+1;
        }
        if(arr[i+1]<arr[i]&&candies[i+1]>=candies[i]){
            candies[i]=candies[i+1]+1;
        }
    }
    if(arr[0]>arr[1]&&candies[0]<=candies[1]){
            candies[0]=candies[1]+1;
        }
        if(arr[n-1]>arr[n-2]&&candies[n-1]<=candies[n-2]){
            candies[n-1]=candies[n-2]+1;
        }
       
    long count=0;
    cout<<"HI"<<endl;
    for(int i=0;i<n;i++){
        cout<<candies[i]<<endl;
        count+=candies[i];
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
