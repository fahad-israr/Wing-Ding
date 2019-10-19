#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,i,j;
    cin>>a;
    int arr[a];
    for(int t=0;t<a;t++)
        cin>>arr[t];
        
        cin>>i>>j;
    int s=0;
    
    if(i>=a||j>=a){return 0;}
   for(int t=i;t<=j;t++)
    s+=arr[t];
    
    cout<<s<<endl;
    return 0;
}
