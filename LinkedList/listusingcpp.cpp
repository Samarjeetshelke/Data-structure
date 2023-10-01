#include<iostream>


using namespace std;


class Node{
	public:
		int data;
		Node * next;

	Node(int d){
		data = d;
		next = NULL;
	}
};

class Listl{
	public:
		Node * head;
		Node * tail;

	Listl(){
		head=NULL;
		tail=NULL;
	}

	
	void display(){
		if(head==NULL){
			cout<<"\nEmpty!..";
			return;
		}
		Node * s= head;
		cout<<"\nData: ";
		while(s!=NULL){
			cout<<"\n"<<s->data;
			s=s->next;
		}
	}

	void rdisplay(Node * s){//display in reverse!
		if(s==NULL){
			return;
		}
		rdisplay(s->next);
		cout<<"\n"<<s->data;
	}

	void insertB(int d){
		if(head==NULL){
			head=new Node(d);
			tail=head;
		}
		else{
			Node * s = new Node(d);
			s->next = head;
			head = s;
		}
		cout<<"\nInsert At Begin..";
	}

	void insertE(int d){
		if(head==NULL){
			head = new Node(d);
			tail=head;
		}
		else{
			Node * s = new Node(d);
			tail->next=s;
			tail = s;
		}
		cout<<"\nInsert at End..";
	}
};
int main(){
	Listl a;

	a.insertB(10);
	a.insertB(20);
	a.insertB(30);

	a.insertE(-10);
	a.insertE(-20);
	a.insertE(-30);
	a.display();

	cout<<"\nReverse List: ";
	a.rdisplay(a.head);

	
	return 0;
}
