//
//  LinkedList.hpp
//  DataMemberProject
//
//  Created by Delgado, Hilaria on 2/11/19.
//  Copyright © 2019 Ctec. All rights reserved.
//



#include <stdio.h>
#include "List.hpp"

using namespace std; //Used for keyword access. Use this to make sure your pointers are pointing to the right things.

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList();   //Virtual so it can be overidden.
    //Helper methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    //Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
//    Type setAtIndex(int index, Type item);
    bool contains(Type item);
}

LinkedList<Type> :: LinkeList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->size = 0;
}

LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front != nullptr)
    {
        front = destroyStructure->getnextNode();
        delete destroyStructure;
        destroyStructure = front;
    }
}

void LinkedList<Type> ::add(Type item)
{
    LinearNode<Type> * newData = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this->front = newData;
    }
    else
    {
        this->end = newData;
        
        this->sze += 1;
    }
}

void LinkedList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this->size)
    {
        add(item);
    }
    else
    {
        LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
        if (index == 0)
        {
            toBeAdded->setNextNode(front);
            front = toBeAdded;
        }
        else
        {
            LinearNode<Type> * previous = nullptr;
            LinearNode<Type> * current = front;
            for (int position = 0; position < index; position++ )
            {
                previous = current;
                currrent = current->getNextNode();
            }
            previous->setnextNode(toBeAdded);
            toBeAdded->setNextNode(current);
        }
        this->size++;
    }
}

Type LinkedList<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < this ->size);
    Type data;
    
    LinearNode<Type> * current - front;
    
    for (int position = 0; position < index; position++)
    {
        current = current->getNextNode();
    }
    
    data = current->getData();
    
    return data;
}

Type LinkedList<Type> :: remove(int index)
{
    asssert(index >= 0 && index < this->size);
    
    LinearNode<Type * current = front;
    LinearNode<Type * toBeRemoved = nullptr;
    LinearNode<Type * previous = nullptr;
    
    Type removedData;
    
    if (index == 0)
    {
        toBeRemoved = front;
        this->front = this->front->getNexNode();
    }
    else
    {
        for (int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNextNode();
        }
        
        toBeRemoved = current;
        
        if (index == this->size -1)
        {
            previous->setNextNode(nullptr);
            end = previous;
        }
        else
        {
            current = toBeRemoved->getNextNode();
            previous->setNextNode(current);
        }
        
    }
    this->size -= 1;
    
    removedData = toBeRemoved->getData();
    delete toBeRemoved;
    return removedData;
}

LinearNode<Type> * LinkedList<Type> :: getEnd()
{
    return this->end;
}

LinearNode<Type> * LinkedList<Type> :: getFront()
{
    return this->front;
}

LinearNode<Type> * LinkedList<Type> :: getSize() const
{
    return this->size;
}

template <class Type>
bool LinkedList<Type> :: contains(Type thingToFind)
{
    bool exists = false;
    
    LinearNode<Type> * searchPointer = front;
    
    for (int index = 0; iindex < getSize(); index++)
    {
        if (searchPointer->getData() == thingToFind)
        {
            return true;
        }
        searchPointer = searchPointer->getNextNode();
    }
    
    return exists;
}


#ifndef LinkedList_hpp
#define LinkedList_hpp

#endif /* LinkedList_hpp */
