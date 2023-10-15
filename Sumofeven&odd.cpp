#include<iostream>
using namespace std;

int main() {
	int n;
    int rem;
	int sum=0;
	int sum1=0;
	cin>>n;
	while(n!=0){
		rem=n%10;
        if(rem%2==0){
            sum=rem+sum;
        }else{
            sum1=sum1+rem;
        }
		n=n/10;
	}
	cout<<sum<<" "<<sum1;
	return 0;
}

