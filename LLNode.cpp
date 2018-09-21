#pragma once
#include"LLNode.h"

LLNode::LLNode(int myData,LLNode& myNext):next(myNext){   
    data = myData;
}

void LLNode::SetData(int myData){
    data = myData;
}

void LLNode::SetNext(LLNode& myNode){
    next = myNode;
}

int LLNode::GetData(){
    return data;
}

LLNode* LLNode::GetNext(){
    return &next;
}