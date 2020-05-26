#include<iostream>
using namespace std;
int main(){
	//Break -that is used to stop a loop bassed upon certain condition
	//Problem Statement -Read a stream of number until you get a multiple of 7
	int no;
	//Accept and print Number until you get a number which is multiple of 7
	//and you will skip all numbers which arebmultiple of 13 and 7
	while(true){
		//No stopping condition as of now
		cin>>no;
		if(no%13==0){
			continue;//execute multiple times
		}
		if(no%7==0){
			//Stop Processing More Numbers;
			break;// execute only once
		}
		cout<<" NO "<<no<<endl;
	}
	cout<<"Came out of the loop!";
	return 0;
}
