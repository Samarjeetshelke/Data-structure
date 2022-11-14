head is globaly declared

**1.Create Node**

Code:
<pre>
<code>
node * createnode(int id){
    node * a = (node*)malloc(sizeof(node));
    a->id = id;
    a->next = NULL;
    return a;
}
</code>
</pre>
Info:

The main purpose of this function is to create a new node and return adress to its master function(the function who makes a call).
it will assing  a  value to node and assing NULL to next.

---

**2.Add Start**

Code:
<pre>
<code>
void addStart(int id){
    node * a = createnode(id);
    a->next = head;
    head = a;
}
</code>
</pre>

Info:

The purpose is to add th enew node to the start of the list. assing a head.

---

**3.Add End**

Code:
<pre>
<code>
 void addEnd(int id){
    node * s = head;
    if(s==NULL){
        head = createnode(id);
    }
    else{
        while(s->next!=NULL){
            s=s->next;
        }
        s->next=createnode(id);
    }
}
</pre>
</code>

Info:

It will add new node at the end of list.

---

**4.Display**

Code:

<pre>
<code>
void display(){
    node * s = head;
    printf("\nStudent ids: ");
    while(s!=NULL){
        printf("\n%d",s->id);
        s=s->next;
    }
}
</code>
</pre>

Info:

To display all node from the list.
