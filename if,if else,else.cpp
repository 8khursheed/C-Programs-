#include<iostream>
using namespace std;

int main(){
	
	float marks = 94.23;
	
	if ( marks >= 80  ){
		cout<<"Grade A+"<<endl;
	
		if (marks >= 90){    //nested if statement 
			cout<<"Excellent";
		}
	}
	
	else if(marks >= 70){
		cout<<"Grade A";
		
	}
	
	else if(marks >= 60){
		cout<<"Grade B";
		
	}
	else if (marks >= 50){
		cout<<"Grade C";
	}
	
	else{
	cout<<"Grade D";
	}
	return 0;
}
