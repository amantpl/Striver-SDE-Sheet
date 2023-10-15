#include<iostream>
using namespace std;

int main() {
	char c;
	cin>>c;
	if(isupper(c)){
		cout<<1;
	}else if(islower(c)){
		cout<<0;
	}else{
		cout<<-1;
	}
	return 0;
}
