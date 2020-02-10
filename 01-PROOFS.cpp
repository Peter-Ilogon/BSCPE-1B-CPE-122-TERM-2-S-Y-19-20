#include<iostream>

using namespace std;

class proof{
	private:
		int choice;
	public:
		void input();
		void identity();
		void dominant();
		void idempotent();
		void doubleNegation();
		void commutative();
		void associative();
		void distributive();
		void demorgan();
		void absorption();
		void negation();
		void proceed();
		void conProposition();
		void biProposition();
};	

int main(int argc, char** argv){
	proof a;
	a.input();
	
	return 0;
}

void proof::input(){
	cin>>choice;
	switch(choice){
		case 1:
			identity(); 
			break;
		case 2:
			dominant(); 
			break;	
		case 3:
			idempotent();
			break;
		case 4:
			doubleNegation();
			break;
		case 5:
			commutative();
			break;
		case 6:
			associative();
			break;
		case 7:
			distributive();
			break;
		case 8:
			demorgan();
			break;
		case 9:
			absorption();
			break;
		case 10:
			negation();
			break;
		case 11:
		break;
		default:
		cout<<"\n\nInvalidchoice";									
	}
	proceed();
}

void proof::identity(){
	cout<<"P^T=P\nPvF=P";
}
void proof::dominant(){
	cout<<"PvT=T\nP^F=F";
}
void proof::idempotent(){
	cout<<"PvP=P\nP^P=P";
}
void proof::doubleNegation(){
	cout<<"~(~P)=P";
}
void proof::commutative(){
	cout<<"PvQ=QvP\nP^Q=Q^P";
}
void proof::associative(){
	cout<<"(PvQ)vR=Pv(QvR)\n(P^Q)^R=P^(Q^R)";
}
void proof::distributive(){
	cout<<"Pv(QvR)=(PvQ)^(PvR)\nP^(QvR)=(P^Q)v(P^R)";
}
void proof::demorgan(){
	cout<<"~(P^Q)=~Pv~Q\n~(PvQ)=~P^~Q";
}
void proof::absorption(){
	cout<<"Pv(P^Q)=P\nP^(PvQ)";
}
void proof::negation(){
	cout<<"Pv~P=T\nP^~P=F";
}
void proof::proceed(){
	cin>>choice;
	switch(choice){
		case 1:
			conProposition();
			break;
		case 2:
			biProposition();
			break;
		case 3:
			break;
			default:
			cout<<"\nInvalid choice";	
	}
}
void proof::conProposition(){
	cout<<"P->Q=~PvQ\nP->Q=~Q->~P\nPvQ=~P->Q\n~(P->Q)=P^~Q\n(P->Q)^(P->R)=P->(Q^R)\n(P->R)^(Q->R)=(PvQ)->R\n(P->Q)v(P->R)=P->(QvR)\n(P->R)v(Q->R)=(P^R)->R";
	
	cout<<"\n1.Repeat\n2.Exit";
	cin>>choice;
	if(choice==1) input();
}
void proof::biProposition(){
	cout<<"P<->Q=(P->Q)^(Q->P)\nP<->Q=~P<->~Q\nP<->Q=(P^Q)v(~P^~Q)\n(P<->Q)=P<->~Q";
	
	cout<<"\n1.Repeat\n2.Exit";
	cin>>choice;
	if(choice==1)input();
}
