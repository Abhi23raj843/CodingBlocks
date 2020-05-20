/*Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34

Input Format
Constraints
0 < N < 100

Output Format
Sample Input
4
Sample Output
0 
1    1 
2    3     5 
8   13    21    34
Explanation
Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    long a,b,c;
	cin>>n;
	a=0;b=1;
	int i,j;
	for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<"0";
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                cout<<b<<"\t";
                c=b;
                b=a+b;
                a=c;
            }
        }
        cout<<"\n";
    }
}


