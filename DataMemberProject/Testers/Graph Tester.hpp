//
//  Graph Tester.hpp
//  DataMemberProject
//
//  Created by Delgado, Hilaria on 3/18/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef Graph_Tester_hpp
#define Graph_Tester_hpp

#include "../Model/NonLinear/Graph.hpp"
#include <iostream>

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
    
public:
    void testGraphs();
}



#endif /* Graph_Tester_hpp */
