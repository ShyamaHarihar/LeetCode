class Node
{
        public:
        int val;
        Node* next;
        public:
        Node(int x)
        {
            val=x;
        }
};
class MyLinkedList
{
public:
    Node* head;
    Node* tail;
    int size;
    MyLinkedList() {
        head=NULL;
        tail=NULL;
        size=0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        Node* temp=head;
        int i=0;
        if(index<0 || index>=size)
        {
            return -1;
        }
        for(int i=0;i<index;i++)
        {
            temp=temp->next;
        }
        return temp->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
    if(head==NULL)
    {
        Node* temp=new Node(val);
        head=temp;
        tail=temp;
    }
        
        else
        {
            Node* temp=new Node(val);
            temp->next=head;
            head=temp;
        }
        size++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
    Node* temp=new Node(val);
    if(tail==NULL)
    {
        tail=temp;
        head=temp;
    }
        else
        {
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) { 
    if(index<=0)
    {
        addAtHead(val);
        return;
    }
        if(index==size)
        {
            addAtTail(val);
            return;
        }
        Node* c=head;
            for(int i=0;i<index-1;i++)
            {
                c=c->next;
            }
        Node* newnode=new Node(val);
        newnode->next=c->next;
        c->next=newnode;
        size++;
        
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
    if(index<0 || index>=size)
    {
        return;
    }
        Node* p=head;
        if(index==0)
        {
            head=head->next;
            delete p;
            size--;
            return;
        }
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        Node* q=p->next;
        p->next=q->next;
        if(tail==q)
        {
            tail=p;
        }
        delete q;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */