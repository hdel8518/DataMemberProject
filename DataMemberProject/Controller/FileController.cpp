//
//  FileController.cpp
//  DataMemberProject
//
//  Created by Delgado, Hilaria on 2/5/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string fileName)
{
    std :: vector<CrimeData> crimeVector;
    string curentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path
    if (dataFile.is_open())
    {
        //Keep readding until you are at the end of the file.
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine,'\r');
            //exclude header row
            if (rowCount != 0)
            {
                    //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE"<< endl;
    }
                    
    return crimeVector;
}

LinkedList<CrimeData> FileController :: readDataToList(string fileName)
{
    LinkedList<CrimeData> crimes;
    
    string curentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path
    if (dataFile.is_open())
    {
        //Keep readding until you are at the end of the file.
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine,'\r');
            //exclude header row
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crime.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE"<< endl;
    }
    
    return crimes;
}

LinkedList<Music> FileController :: musicDataToList(string fileName)
{
    LinkedList<Music> MusicList;
    
    string curentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path
    if (dataFile.is_open())
    {
        //Keep readding until you are at the end of the file.
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine,'\r');
            //exclude header row
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE"<< endl;
    }
    
    return musicList;
}


