//
//  Timer.hpp
//  DataMemberProject
//
//  Created by Delgado, Hilaria on 2/5/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <iostream>
#include <time.h>
#include <assert.h>

using namespace std;

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
};

#endif /* Timer_hpp */
