#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next; 
    //constructor
    node(int data){
        this -> data=data;
        this -> next=NULL;
    }
    //deconstructor
    ~node(){
        int data=this -> data;
        if(this -> next !=NULL){
            delete next;
            this->next= NULL;
        }
        cout<<"this is the deleted no"<<data<<endl;
    }
    
};
//insertion of node in starting
    void insertathead(node* &head,int d){
    //we had taken address bec we dont want to make copy of it
        node* temp=new node(d);
        temp ->next=head;
        head = temp;
    }
//insertion at end
    void insertattail(node* &tail,int d){
        node* temp=new node(d);
        tail->next=temp;
        tail=tail->next;//tail=temp;
    }
    //insertion at  postion
    void insertatposition(node* &tail,node* &head,int pos,int d){
        if(pos==1){
            insertathead(head,d);
            return;
        }
        node* temp=head;
        int cnt=1;
        while(cnt<pos-1){
            temp=temp->next;
            cnt++;
        }
        if(temp->next==NULL){
            insertattail(tail,d);
            return;
        }
        
        node* nodetoinsert=new node(d);
        nodetoinsert->next=temp->next;
        temp->next=nodetoinsert;
        
    }
    //delete
    void deletenode(node* &head , int pos){
        if(pos==1){
            node* &temp=head;
           
           head=head -> next;
           temp->next=NULL;
           delete temp;
        }
        else{
            node* curr=head;
            node* prev=NULL;
            int cnt=1;
            while(cnt<pos){
                prev=curr;
                curr=curr -> next;
                cnt++;
            }
            prev ->next=curr->next;
            curr ->next=NULL;
            delete curr;
        }
    }
    
    void print(node* &head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
int main(){
    node* node1=new node(10);
    cout<<node1 -> data << endl;
    cout<<node1 -> next << endl;
    
    node* head=node1;
    node* tail=node1;
    print(head);
    
    //inserting at head
    insertathead(head,12);
    insertattail(tail,12);
    print(head);
    insertattail(tail,14);
    print(head);
    insertatposition(tail,head,3,13);
    print(head);
    deletenode(head,4);
    print(head);
    print(head);
    return 0;
    
}
