#pragma once
class LLNode{
    private:
        int data;
        LLNode& next;
    public:
        LLNode(int,LLNode&);
        void SetData(int);
        void SetNext(LLNode&);
        int GetData();
        
        LLNode* GetNext();
        //TODO fix the operator overload
        LLNode& operator=(LLNode& myNode){
            LLNode node = myNode;
            return node;
        }
};