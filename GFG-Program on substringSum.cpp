//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int i, j, flag;
        long long int sum = 0;
        for(i = 0; i < n; i++){
            for(j = i; j < n; j++){
                sum += arr[j];
                //printf("%d %lld\n", arr[j], sum);
                if(sum == s){
                    flag = 1;
                    break;
                }
            }
            sum = 0;
            if(flag == 1){
                break;
            }
        }
        vector<int> a;
        if(flag == 1){
            a = {i + 1, j + 1};
        }
        else{
            a = {-1};
        }
        return a;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends