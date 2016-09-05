#include "LLL.h"

list::list(){
  head = NULL;
  srand(time(NULL));
  int length = rand() %7+5;
//  cout<<"Length of list: "<<length<<endl;
  for(int i = 0; i < length; ++i){
    node * temp = new node;
    temp->data = rand() %10+1;
    temp->next = head;
    head = temp;
  }

}

list::~list(){
        node * temp = head;
        while(head)
        {
                temp = head->next;
                delete head;
                head=temp;
        }
        head = NULL;
}


void list::displaylist(){
  int count = 0;
  cout<<"List: ";
  if(!head){
    cout<<"NO LIST!"<<endl;
    cout<<"Length of list: 0";
    return;
  }
  node * current = head;
  while(current != NULL){
    if(current == head){
	cout<<current->data;
	current = current->next;
	++count;
        continue;
    }
    cout<<"->"<<current->data;
    current = current->next;
    ++count;
  }
  cout<<endl;
  cout<<"Length of list:"<<count<<endl;
}
