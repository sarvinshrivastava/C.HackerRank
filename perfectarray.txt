//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        int i, j = n, flag = 0;
        for(i = 0; i < n; i += 1) {
            if(a[j] != a[i]) {
                flag = 1;
                break;
            } 
            j--;
        }
        if(flag == 1) 
            return false;
        else
            return true;
        flag = 0;
    }
};




//{ Driver Code Starts.
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        if(ob.IsPerfect(a,n))
            cout<<"PERFECT\n";
        else
            cout<<"NOT PERFECT\n";
        
    }
    
}
// } Driver Code Ends