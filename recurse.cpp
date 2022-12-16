#include<iostream> 
using namespace std;

int fact(int s) {
	if(s) 
		return s*(fact(s-1));
	else 
		return 1;
}

int main() {
	cout<<"5! = "<<fact(5);
	return 0;
}
