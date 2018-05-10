#include<bits/stdc++.h>
using namespace std;
int main()
{   int arr[1000];
    memset(arr,0,sizeof(arr));
    int t;
    cin>>t;
    while (t--)
    {
        int q;
        cin>>q;
        int a,b;
        switch(q)
        {
            case 1:cin>>a>>b;
                    arr[a] = b;
                    break;
            case 2:sort(arr,arr+1000);
                    break;
            case 3:cin>>a;
                    cout<<(lower_bound(arr,arr+1000,a))-arr<<endl;
                    break;
            case 4:cin>>a;
                    cout<<(upper_bound(arr,arr+1000,a))-arr<<endl;
                    break;
            case 5:next_permutation(arr,arr+1000);
                    for(int i=0; arr[i];i++){
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                    break;
            case 6:prev_permutation(arr,arr+1000);
                    for(int i=0;arr[i];i++){
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                    break;
        }
    }
    
}