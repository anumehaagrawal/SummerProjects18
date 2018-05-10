#include<bits/stdc++.h>
using namespace std;
int main()
{  
    set<int> d;
    int q,x;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        switch(num){
            case 1:
                cin>>x;
                d.insert(x);
                break;
            case 2:
                cout<<d.size()<<endl;
                break;
            case 3:
               if(d.size()){
                   d.erase(d.begin());
               }
               break;
            case 4:
                cout<<*d.begin()<<endl;
                break;
            case 5:
                
                for(set<int>::iterator it = d.begin();it!=d.end();++it){
                    cout<< *it<<" ";
                }
                cout<<endl;
                break;
            case 6:
                if(!d.empty()){
                    cout<<*d.end()<<endl;
                }
                break;
            case 7:
            	cin>>x;
                if(d.find(x) != d.end()){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
                break;
            case 8:
                cin>>x;
                if(!d.empty()){
                    d.erase(x);
                }
                break;
        }
        
        
    }
    
}