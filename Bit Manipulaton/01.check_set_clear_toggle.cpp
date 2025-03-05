#include<bits/stdc++.h>
using namespace std;

void printbinary(int n){

	for(int i=5;i>=0;i--){
		cout<<((n>>i)&1);
	}
	cout<<endl;
}
//check kth bit is  set or not(and)
void iskthset(int n , int k){
   int  mask = 1<<k;

   if(n&mask) 
   	cout<<"set"<<endl;
   else
   	cout<<"not set"<<endl;
}
//setting bit (or)
int setbit(int n, int k){
	int mask = 1<<k;

	return n = n|mask;
}

//clearing bit(and)
int clearbit(int n, int k){
	int mask = ~(1<<k);

	return n = n&mask;
}
//toggling bit(xor)
int togglebit(int n, int k){
	int mask = (1<<k);

	return n = n^mask;
}

int main(){
	int  n = 7 ;
	printbinary(n);
	n = setbit(n,3);
	iskthset(n,3);
	n = togglebit(n,3);
	iskthset(n,3);
}
