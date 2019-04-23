//
//  BinaryTreeTester.hpp
//  DataMemberProject
//
//  Created by Delgado, Hilaria on 4/12/19.
//  Copyright © 2019 Ctec. All rights reserved.
//


#include <stdio.h>


#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNodes.hpp"
#include "../Model/Strutures/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void treeStuff();
};
#endif /* BinaryTreeTester_hpp */

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: treeStuff()
{
    
}

#endif /* BinaryTreeTester_hpp */
