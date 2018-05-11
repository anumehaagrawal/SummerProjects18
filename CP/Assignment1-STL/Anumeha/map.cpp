#include <bits/stdc++.h>
using namespace std;

//Your code here
int main()
{   
    int t,q,y;
    map< string,int> mp;
    string x;
    cin>>t;
    while (t--)
    {
    	
    	cin>>q;
    	switch(q){
    		case 1:
    			cin>>x>>y;
    			mp.insert(make_pair(x,y));
    			break;
    		case 2:
    			cin>>x;
    			cout<<mp[x]<<endl;
    			break;
    		case 3:
    			cin>>x;
    			if(mp.find(x)==mp.end()){
    				cout<<"NO"<<endl;
    			}
    			else{
    				cout<<"YES"<<endl;
    			}
    			break;
    		case 4:
    			map<string, int> :: iterator it ;
    			for(it = mp.begin();it!=mp.end();it++){
    				cout<<(<<it->first<<it->second<<)<< " ";
    			}
    			cout<<endl;
    			break;
    	}
    }
    
}