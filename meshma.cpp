#include<iostream>;
using namespace std;

int main (){
	double income= 20000;
	int amount, choice;
}
do{
    cout<<"display menu"<<endl;
	cout<<"1.enter the income"<<endl;
	cout<<"2.enter the expence"<<endl;
	cout<<"3.check the total balance"<<endl;
	cout<<"4.exit"<<endl;
}	
switch(choice){
	case 1: 
	cout<<"enter the total amount of income"<<endl<<cin>>income;
	break;
	case 2:
		cout<<"enter the amount of expence"<<endl<<cin>>expence;
	break;
	case 3:
	cout<<"your current income is"<<income-expence;
	break ; 
	case 4:
	cout<<"exit the program"<<endl;
	break ;
}
default <<"invalid output"<<endl;

while(balance)

