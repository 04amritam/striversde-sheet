/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    //constructor
    node(int d){
        this -> next = NULL;
        this -> prev = NULL;
        this -> data = d;
    }
    //deconstructor
    ~node(){
        int value = this -> data;
        if(this -> next !=NULL){
            delete next;
            this ->next = NULL;
        }
        cout<<"the deleted no from the doubly linked list is "<<value<<endl;
    }
};


int lengthofdoublelinkedlist (node* head){
    int len = 0;
    node *temp = head;
    
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}


void insertathead (node* &head , int d){
    node* temp = new node(d);//node created
    
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}


void insertattail (node* &tail , int d){
    node* temp = new node(d);//node created
    
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}


void insertatpostion (node* &tail , node* &head , int pos , int d){
    
    if(pos == 1){
        insertathead (head , d);
        return;
    }
    int cnt = 1;
    node* temp = head;
    
    while(cnt < pos-1){
        temp = temp -> next;
        cnt ++;
    }
    
    if(temp->next == NULL){
        insertattail (tail , d);
        return ;
    }
    
    node* nodetoinsert = new node(d);//new node created which is going to be inserted
    
    temp -> next -> prev = nodetoinsert;
    nodetoinsert -> next = temp -> next;
    nodetoinsert -> prev = temp;
    temp -> next = nodetoinsert;
}

void deleteatpos(node* &head , int pos){
    if(pos == 1){
        node* temp =head;
        temp->next->prev=NULL;
        head =temp->next;
        temp ->next=NULL;
        delete temp;
        
    }
    else{
        int cnt=1;
        node* curr = head;
        node* prev=NULL;
        while(cnt < pos){
            prev=curr;
            curr=curr -> next;
            cnt++;
        }
        prev ->next = curr -> next;
        curr -> next =NULL;
        delete curr;
    }
    
}


void print (node* &head){
    node *temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}


int main()
{
    // cout<<"Hello World";
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    node* nodetoinsert = node1;
    
    cout<<"length of double linked list is: "<<lengthofdoublelinkedlist(head)<<endl;
    
    print(head);
    
    insertathead(head , 12);
    print(head);
    
    insertathead(head , 14);
    print(head);
    
    insertattail(tail,6);
    print(head);
    
    insertattail(tail,4);
    print(head);
    
    insertattail(tail,2);
    print(head);
    
    insertatpostion(tail,head,5,10);
    print(head);
    
    insertatpostion(tail,head,4,8);
    print(head);
    
    deleteatpos(head,3);
    print(head);
    
    return 0;
}