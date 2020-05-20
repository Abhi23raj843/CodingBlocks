/*Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
101010
Sample Output
42
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.*/


#include<iostream>
using namespace std;
int main() {
	int no;
	cin>>no;
	int p=1;
	int ans=0;
	while(no>0){
		int r=no%10;
		ans=ans+r*p;
		p=p*2;
		no=no/10;
	}
	cout<<ans<<endl;
	return 0;
}
