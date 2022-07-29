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
    
    //add Node in the middle
    Node* middle_node = new Node(20);
    Node* tmp_mid = first;
    int index=2; 
    for(int i=0;i<index;i++){
        tmp_mid=tmp->next;
    }   
    middle_node->next = tmp->next;
    tmp->next=middle_node;
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