/*Given an array S of size N , check if it is possible to split sequence into two sequences -
s1 to si and si+1 to sN such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.

Input Format
First line contains a single integer N denoting the size of the input.
Next N lines contain a single integer each denoting the elements of the array S.

Constraints
0 < N < 1000 Each number in sequence S is > 0 and < 1000000000

Output Format
Print boolean output - "true" or "false" defining whether the sequence is increasing - decreasing or not.

Sample Input
5 
1 
2 
3 
4 
5
Sample Output
true
Explanation
Carefully read the conditions to judge which all sequences may be valid. Don't use arrays or lists.*/


#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   int left[n];
   left[0]=1;
   int right[n];
   right[n-1]=1;
   int c;

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

   for(int i=1;i<n;i++)
       {

         if(arr[i-1]>arr[i])
            left[i]=1;
         else
            left[i]=0;

         if(arr[n-i-1]<arr[n-i])
            right[n-i-1]=1;
         else
          right[n-i-1]=0;
      }
      for(int i=0;i<n-1;i++)
      {
        if(left[i]+right[i]==0)
         {
          c=1;
          break;
         }
         else
          c=0;
      }
     if(c==0)
      cout<<"true";
     else
      cout<<"false";

    return 0;
   }
