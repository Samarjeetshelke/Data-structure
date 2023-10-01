void insertPos(int pos,int d){
		Node * s;
		Node * tm;

		if(pos==1){
			insertB(d);
			return;
		}
		for(int i=1;(i<pos-1) && (s!=NULL);i++){
			tm=s;
			s=s->next;
		}
		Node * a=new Node(d);
		a->next=tm->next;
		tm->next=a;
		if(a->next==NULL){
			tail=a;
		}

	}
