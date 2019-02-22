//
//  FileController.hpp
//  DataMemberProject
//
//  Created by Delgado, Hilaria on 2/5/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp


#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"
//#include "../Model/NonLinear/BinarySearchTree.hpp"

#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"

using namespace std;

class FileController
{
public:
    //Built inSTL data structures
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataoVector(string filename);
    //OOP Array
    static Arrray<Musix> musicDataToArray(string filename);
    //LinkedLists
    static LinkedList<CrimeData> readDataToList(string filename);
    static LinkedList<Music> musicToDataToList(string filename);
    //BST
    //static BinarySearchTree<CrimeData> readDataToTree(string filename);
    //static BinarySearchTree<Music> musicDataToTree(string filename);
};



#endif /* FileController_hpp */
