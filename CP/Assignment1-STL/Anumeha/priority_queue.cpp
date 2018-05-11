#include<bits/stdc++.h>
using namespace std;
int main()
{   
    priority_queue<pair<int, pair <int, int> > > p;
    int t, q;
    cin>>t;
    while (t--)
    {
        cin>>q;
        switch(q)
        {
            
            case 1: 
                    int x,y,z;
                    cin>>x>>y>>z;
                    p.push(make_pair(x,make_pair(y,z)));
                    break;
            case 2: cout<<"("<<p.top().first<<","<<"("<<p.top().second.first<<","<<p.top().second.second<<")) "<<endl;
                    break;
            case 3:p.pop();
                    break;
            case 4: cout<<p.size()<<endl;
                    break;

        }
    }
}