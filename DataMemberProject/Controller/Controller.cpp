//
//  Controller.cpp
//  DataMemberProject
//
//  Created by Delgado, Hilaria on 1/28/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#include "Controller.hpp"


void Controller :: start()
{
    cout << "Welcome to the Data Structures App." << endl;
    testLinear();
}

void Controller :: usingNodes()
{
    Node<int> mine(5);
    Node<string> wordHolder("words can be stored too");
    cout << mine.getData() << endl;
    cout << wordHolder.getdata() << endl;
    wordHolder.setdata("replaced text");
    cout << wordHolder.getData() << endl;
}

void controller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}
