#pragma once
#include"LLNode.cpp"
/*
    A class to control a linked list.
*/
class LinkedList{
    private:
        LLNode* front = nullptr;
        LLNode* back = nullptr;
        LLNode* current = nullptr;


    public:  
    LinkedList(LLNode*,LLNode*,LLNode*);
    void SetFront(LLNode*);
    void SetBack(LLNode*);
    void SetCurrent(LLNode*);

    LLNode* GetCurrent();
    LLNode* GetBack();
    LLNode* GetFront();
};