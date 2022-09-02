#include<iostream>
#include<unordered_map>
#include<string>
#include<cstdlib>
#include<time.h>

using namespace std;

int main(){
	  cout << "LET US START!"<<endl;
	  cout << "PLEASE CHOOSE THE LEVAL : ";
	  string cho;
	  int num;
	  cin >> cho;
	  cout << endl;
	  cout << "PLEASE ENTER THE NUMBER : ";
	  cin >> num;
	  srand(5);
	  int right_ans = 0;
	  int false_ans = 0;
	  clock_t start,finish;
	  double totaltime;
	  if(cho == "easy"){
		cout<< "you choose the easy level!"<<endl;
	    for(int i = 0; i < num; i++){
		int num1 = rand()%100;
	    int num2 = rand()%100;
		cout << i+1 << ": " <<num1 << "+" << num2 << "= ?"<<endl;
		int sum;
		start = clock();
		cin >> sum;
		finish = clock();
        totaltime = (double)(finish-start)/CLOCKS_PER_SEC;
		cout<<"calaulation time is "<< totaltime <<endl;
		if(sum==(num1+num2))
		     {
				cout<<"True"<<endl;
				right_ans++;
			 }
		else {
			cout << "False"<<endl;
			false_ans++;
	         }
	    }
	  }
	  if(cho == "hard"){
		cout<< "you choose the high level!"<<endl;
        for(int i = 0; i < num; i++){
		int num1 = rand()%1000;
	    int num2 = rand()%1000;
		cout << i+1 << ": " << num1 << "*" << num2 << "= ?"<<endl;
		int sum;
		start = clock();
		cin >> sum;
		finish = clock();
        totaltime = (double)(finish-start)/CLOCKS_PER_SEC;
		cout<<"calaulation time is "<< totaltime <<endl;
		if(sum==(num1*num2))
		     {
				cout<<"True"<<endl;
				right_ans++;
			 }
		else {
			cout << "False"<<endl;
			false_ans++;
	         }
	    }
	  }

	  //cout << "The right answer number is " << right_ans << endl;
	  cout << "The false answer number is " << false_ans << endl;
	  return 0;
}
