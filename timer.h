#pragma once
#include <chrono>
#include <thread>
#include <iostream>

class timer {
    public:
        std::chrono::time_point<std::chrono::steady_clock> start, end;
        std::chrono::duration<float> duration;
        timer();
        ~timer();
};