#include"LinkedList.cpp"
#include<iostream>

int main(){
    //create two nodes
    LLNode node((int)10,node);
    LLNode node2((int)15,node);
    //have the nodes point at each other
    node.SetNext(node2);
    node2.SetNext(node);
    //create a linked list with the front middle and back all looking at the first node
    LinkedList list(&node, &node, &node);

    std::cout << "Back: "<< list.GetBack() << std::endl;
    std::cout << "Front: "<< list.GetFront()<<std::endl;
    std::cout << "Current: "<< list.GetCurrent()<<std::endl;
    //set the back pointer to node 2
    list.SetBack(node.GetNext());

    std::cout << "Back: "<< list.GetBack() << std::endl;
    std::cout << "Front: "<< list.GetFront()<<std::endl;
    std::cout << "Current: "<< list.GetCurrent()<<std::endl;
    // dereference the back item of the LinkedList and place it in a variable
    LLNode node3 = *list.GetBack(); 

    std::cout << node2.GetData() << std::endl;
    std::cout << node3.GetData() << std::endl;
    
}