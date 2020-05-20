/*Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
63
Sample Output
77
Explanation
Both input and output are integers*/

#include<iostream>
using namespace std;
int convert(int x){
	int octal=0;
	int i=1;
	while(x>0){
		octal=octal+x%8*i;
		i*=10;
		x/=8;
	}
	return octal;
}
int main(){
	int x;
	cin>>x;
	cout<<convert(x)<<endl;
	return 0;
}
