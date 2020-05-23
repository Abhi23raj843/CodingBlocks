/*Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.

Input Format
A list of integers to be processed

Constraints
All numbers input are integers between -1000 and 1000.

Output Format
Print all the numbers before the cumulative sum become negative.

Sample Input
1
2
88
-100
49
Sample Output
1
2
88*/


#include<iostream>

using namespace std;

int main()
{
     int t;
     long sum=0;

     while(sum>=0)
     {
          cin>>t;
          sum+=t;
          if(sum>=0)
               cout<<t<<"\n";
     }
     cin>>t;
}
