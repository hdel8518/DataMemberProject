//
//  Tree.hpp
//  DataMemberProject
//
//  Created by Delgado, Hilaria on 4/12/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp

#include "../Nodes/BinaryTreeNode.hpp"

template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
public:
    //Informational Methods
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual int isComplete() = 0;
    virtual int isBalanced() = 0;
    //*Data Methods*
    virtual int insert(Type data) = 0;
    virtual int contains(Type data) = 0;
    virtual int remove(Type data) = 0;
    //*Traversals*
    virtual int inOrderraversal() = 0;
    virtual int preOrderTraversal() = 0;
    virtual int postOrderTraversal() = 0;
    
};
#endif /* Tree_hpp */
