#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int d){
        data = d;
        next=NULL;
    }
};


int main(){
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    first->next = second;
    second->next = third;
    Node* add_first = new Node(5);
   //add element to first;
    add_first->next = first;
    first = add_first;

   //add element to end
    Node* added_node = new Node(10);
    Node* tmp = first;
    while(tmp->next!=NULL){
        tmp = tmp->next;
    }
    tmp->next  = added_node;
    
    //add Node in the  index i of the linked list
    Node* middle_node = new Node(20);
    Node* tmp_mid = first;
    int index=2; 
    for(int i=0;i<index-1;i++){
        tmp_mid=tmp_mid->next;
    }   
    middle_node->next = tmp_mid->next;
    tmp_mid->next=middle_node;
    //delete node from first
    tmp = first;
   first=first->next;
   delete tmp;
   //delete from the  index i  of the linked list
   tmp = first;
   index =2;
   for(int i=0;i<index-1;i++){
    tmp = tmp->next;
   }
    Node* tmp_del = tmp->next;
    tmp->next = tmp->next->next;
    delete tmp_del;
    //delete from end of the linked list
    tmp_del = first;
    while(tmp_del->next->next!=NULL){
         tmp_del=tmp_del->next;
    }
    tmp = tmp_del->next;
    tmp_del->next=NULL;

    delete tmp;
 while(first!=NULL){
        cout<<first->data;
        if(first->next!=NULL){
            cout<<"->";
        }   
        first=first->next;
    }
    
    cout<<endl;
    return 0;
}