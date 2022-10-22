#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0; i<n; i++){
        int res=1;
        int curr = a[i];
        for(int j=i+1; j<n; j++){
            if(curr%1000<a[j]%1000 && 0<=a[j]-curr && a[j]-curr<k*1000){
                res++;
                curr=a[j];
            }
        }
        ans = max(ans, res);
    }
    cout<<ans;
    return 0;
}
