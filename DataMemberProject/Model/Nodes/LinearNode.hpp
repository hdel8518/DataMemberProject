//
//  LinearNode.hpp
//  DataMemberProject
//
//  Created by Delgado, Hilaria on 1/30/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp
#include "../Node/LinearNode.hpp"

#include "Node.hpp"


template <class Type>
class LinearNode : public Node<Type>
{
private:
    LinearNode<Type> * next;
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    LinearNode<Type> * next);
};

//Implementation of templates
template <class Type>
LinearNode<Type> :: LinearNode() : Node()
{}

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Typre

#endif /* LinearNode_hpp */
