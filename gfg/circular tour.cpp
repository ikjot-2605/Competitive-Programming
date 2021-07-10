// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution
{
public:
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    // int tour(petrolPump p[],int n)
    // {
    //     //naive
    //     for(int i =0 ;i<n;i++){
    //         int petrol = 0;
    //         int flag =0 ;
    //         for(int j= 0;j<n;j++){
    //             petrol+=p[(j+i)%n].petrol;
    //             if(p[(j+i)%n].distance<=petrol){
    //                 petrol-=p[(j+i)%n].distance;
    //             }
    //             else{
    //                 flag=1;
    //                 break;
    //             }
    //         }
    //         if(flag==0)return i;
    //     }
    //     return -1;
    // }
    // bool compare(petrolPump const &a, petrolPump const &b)
    // {
    //     return a.petrol - a.distance > b.petrol - b.distance;
    // }
    // int tour(petrolPump p[], int n)
    // {
    //     map<petrolPump,int> m;
    //     for(int i = 0;i<n;i++){
    //         m[p[i]]=i;
    //     }
    //     sort(p, p + n, compare);
    //     int petrol = 0;
    //     for(int i = 0;i<n;i++){
    //         petrol+=p[i].petrol;
    //         if(petrol>=p[i].distance){
    //             petrol -= p[i].distance;
    //         }
    //         else return -1;
    //     }
    //     return m[p[0]];
    // }
    int tour(petrolPump arr[],int n){
        int start;
 
    for (int i = 0; i < n; i++) {
        // Identify the first petrol pump from where we
        // might get a full circular tour
        if (arr[i].petrol >= arr[i].distance) {
            start = i;
            break;
        }
    }
 
    // To store the excess petrol
    int curr_petrol = 0;
 
    int i;
 
    for (i = start; i < n;) {
 
        curr_petrol += (arr[i].petrol - arr[i].distance);
 
        // If at any point remaining petrol is less than 0,
        // it means that we cannot start our journey from
        // current start
        if (curr_petrol < 0) {
 
            // We move to the next petrol pump
            i++;
 
            // We try to identify the next petrol pump from
            // where we might get a full circular tour
            for (; i < n; i++) {
                if (arr[i].petrol >= arr[i].distance) {
 
                    start = i;
 
                    // Reset rem_petrol
                    curr_petrol = 0;
 
                    break;
                }
            }
        }
 
        else {
            // Move to the next petrolpump if curr_petrol is
            // >= 0
            i++;
        }
    }
 
    // If remaining petrol is less than 0 while we reach the
    // first petrol pump, it means no circular tour is
    // possible
    if (curr_petrol < 0) {
        return -1;
    }
 
    for (int j = 0; j < start; j++) {
 
        curr_petrol += (arr[j].petrol - arr[j].distance);
 
        // If remaining petrol is less than 0 at any point
        // before we reach initial start, it means no
        // circular tour is possibl
        if (curr_petrol < 0) {
            return -1;
        }
    }
 
    // If we have successfully reached intial_start, it
    // means can get a circular tour from final_start, hence
    // return it
    return start;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        petrolPump p[n];
        for (int i = 0; i < n; i++)
            cin >> p[i].petrol >> p[i].distance;
        Solution obj;
        cout << obj.tour(p, n) << endl;
    }
}
// } Driver Code Ends