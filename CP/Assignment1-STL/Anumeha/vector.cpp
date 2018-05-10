#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	vector<int>:: iterator iter;
	int Q;
	cin>>Q;
	while(Q--){
		int val;
		cin>>val;
		int x;
		switch(val){
			case 1:
			
				cin>>x;
				v.push_back(x);
				break;
			case 2 :
				int y;
				cin>>x>>y;
				v[x]=y;
				break;
			case 3:
				cin>>x;
				qu.push(num);
				break;
			case 4:
				qu.pop();
				break;
			case 5:
				cout<<qu.size()<<endl;
				break;
		}
	}
}