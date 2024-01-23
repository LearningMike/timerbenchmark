#pragma once
#include <chrono>
#include <thread>
#include <iostream>

class timer {
    private:
        std::chrono::time_point<std::chrono::steady_clock> start, end;
        std::chrono::duration<float> duration;
    public:
        timer();//constructor
        ~timer();//destructor
        timer(timer&)=delete;//copy constructor
        timer(timer&&)=delete;//move contructor
        timer& operator=(timer&)=delete;//copy assignment operator override
        timer& operator=(timer&&)=delete;//move assignment operator override
};