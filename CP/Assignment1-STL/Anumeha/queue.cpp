#include <bits/stdc++.h>
using namespace std;
int main(){
	queue<int> qu;
	int Q;
	cin>>Q;
	while(Q--){
		int val;
		cin>>val;
		switch(val){
			case 1:
				cout<<qu.front()<<endl;
				break;
			case 2 :
				cout<<qu.back()<<endl;
				break;
			case 3:
				int num;
				cin>>num;
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