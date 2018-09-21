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
        //TODO fix the get next function
        LLNode* GetNext();

        LLNode operator=(const LLNode& myNode){
            return myNode;
        }
};