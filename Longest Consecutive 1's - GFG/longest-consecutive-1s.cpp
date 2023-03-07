//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        int count=0, maxi=INT_MIN;
        // code here
        for(int i=0;i<20;i++)
        {
            //int c=i;
            while((n & 1<<i)!=0)
            {
                i++;
                count++;
            }
            maxi=max(maxi,count);
            count=0;
        }
        return maxi;
    }
};


//{ Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends