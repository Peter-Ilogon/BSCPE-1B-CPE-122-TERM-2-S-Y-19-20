//Peter Neil Ilogon - BS CpE 1-B

#include<iostream>
#include<iomanip>

using namespace std;


main(){
	char p,q,table;
	
	cout<<"\t\t\t\t\t";
	cout<<"Tpye 'T' for True   'F' for False\n\n";
	
	cout<<"\t\t\t\t";
	cout<<"P: ";
	cin>>p;
	
	cout<<"\t\t\t\t";
	cout<<"Q: ";
	cin>>q;
	
	cout<<"\n";
	
	if(p&&q=='T'){
		
		cout<<"\t\t\t\t\t    The statement is true!";
	}
	else{
		cout<<"\t\t\t\t\t    Statement is false!";
	}
	cout<<"\n\n";
	cout<<"\t\t\t\t\t  Enter '1' for truth table\n\n\t\t\t\t\t\t     ";
	cin>>table;
	
	if(table=='1'){
		cout<<"\n\n";
		cout<<"\t\t\t\t\t    TRUE and TRUE"<<setw(4)<<"="<<setw(3)<<"  TRUE\n";
		cout<<"\t\t\t\t\t    TRUE and FALSE"<<setw(3)<<"="<<setw(3)<<"  FALSE\n";
		cout<<"\t\t\t\t\t    FALSE and TRUE"<<setw(3)<<"="<<setw(3)<<"  FALSE\n";
		cout<<"\t\t\t\t\t    FALSE and FALSE"<<setw(2)<<"="<<setw(3)<<"  FALSE\n";
			
	}
	
}
