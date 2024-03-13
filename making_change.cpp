#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
 
int changeMaking(int coin[], int n, int sum)
{
    int i,j;
    int x,y;
 
    int dp[n+1][sum+1];
  
    for(j=0;j<=sum;j++)
        dp[0][j]=INT_MAX;
 
    for(i=1;i<=n;i++)
        dp[i][0]=0;
 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            
            if(j>=coin[i-1])
            {
                x=dp[i-1][j];
 
                y=1+dp[i][j-coin[i-1]];
 
                dp[i][j]=min(x,y);
            }
 
            else
                dp[i][j]=dp[i-1][j];
        }
 
    }
    return dp[n][sum];
}
 
int main()
{
    int i;
    int n,sum;
 
    cout<<"Enter the amount whose change is required"<<endl;
    cin>>sum;
 
    cout<<"Enter the number of coins available"<<endl;
    cin>>n;
 
    int coin[n];
 
    cout<<"Enter the values of coins"<<endl;
    for(i=0;i<n;i++)
        cin>>coin[i];
 
    cout<<"The least number of coins whose sum is equal to required sum is"<<endl;
    cout<<changeMaking(coin,n,sum);
 
    cout<<endl;
    return 0;
}
