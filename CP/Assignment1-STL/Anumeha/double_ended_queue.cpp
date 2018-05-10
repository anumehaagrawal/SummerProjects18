#include<bits/stdc++.h>
using namespace std;
int main()
{  
    deque<int> d;
    int q,x;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        switch(num){
            case 1:
                if(!d.empty()){
                    cout<<d.front()<<endl;
                }
                break;
            case 2:
                if(!d.empty()){
                    cout<<d.back()<<endl;
                }
                break;
            case 3:
               
                cin>>x;
                d.push_front(x);
                break;
            case 4:
               
                cin>>x;
                d.push_back(x);
                break;
            case 5:
                if(!d.empty()){
                    d.pop_front();
                    
                }
                break;
            case 6:
                if(!d.empty()){
                    d.pop_back();
                }
                break;
            case 7:
                cout<<d.size()<<endl;
                break;
        }
        
        
    }
    
}