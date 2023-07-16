//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here  
          int sum=0,maxi=INT_MIN;
          string s="",fin="";
          bool flag=true;
          for(int i=0;i<w.length();i++)
          {
              
              for(int j=0;j<n;j++)
              {
                  if(w[i]==x[j])
                   {
                       s+=w[i];
                       sum+=b[j];
                       flag=false;
                       
                       break;
                   }
              }
                   if(flag)
                   {
                      sum+=int(w[i]);
                       s+=w[i];
                       flag=false;
                       //cout<<w[i]<<" "<<sum<<endl; 
                   }
                   flag=true;
                    //cout<<w[i]<<" "<<s<<" "<<sum<<" "<<endl;
              
              if(maxi<=sum)
              {
                  if(maxi==sum)
                  {
                      if(fin.length()<s.length())
                       continue;
                  }
                  fin=s;
                  maxi=sum;
                  //cout<<"\n THIS IS THE MAX VALUE "<<maxi<<endl;
                  
              }
               if(sum<0)
              {
                  sum=0;
                  s="";
              }
              
          }
          return fin;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends