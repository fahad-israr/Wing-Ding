#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,x;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
        cin>>arr[i];
        cin>>x;
    sort(arr,arr+a);
    cout<<arr[a-x];

    return 0;
}
