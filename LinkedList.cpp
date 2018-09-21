#pragma once
#include"LinkedList.h"

LinkedList::LinkedList(LLNode* myFront,LLNode* myCurrent,LLNode* myBack){
    front = myFront;
    back = myBack;
    current = myCurrent;
}

void LinkedList::SetFront(LLNode* myFront){
    front = myFront;
}

void LinkedList::SetBack(LLNode* myBack){
    back = myBack;
}

void LinkedList::SetCurrent(LLNode* myCurrent){
    current = myCurrent;
}

LLNode* LinkedList::GetBack(){
    return back;
}

LLNode* LinkedList::GetCurrent(){
    return current;
}

LLNode* LinkedList::GetFront(){
    return front;
}