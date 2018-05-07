#include <bits/stdc++.h>
using namespace std;
int main(){
	stack<int> st;
	int Q;
	cin>>Q;
	while(Q--){
		int val;
		cin>>val;
		switch(val){
			case 1:
				cout<<st.top()<<endl;
				break;
			case 2 :
				int num;
				cin>>num;
				st.push(num);
				break;
			case 3:
				st.pop();
				break;
			case 4:
				cout<<st.size()<<endl;
				break;
		}
	}
}