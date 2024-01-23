#include "timer.h"

timer::timer(){
    //high resolution clock is more reliable for intervals, system clock is more reliable for the date
    this->start = std::chrono::high_resolution_clock::now();
    std::cout << "timer started at " << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    std::cout << " thread ID: " << std::this_thread::get_id() << "\n";
}

timer::~timer(){
    this->end = std::chrono::high_resolution_clock::now();
    this->duration = std::chrono::duration_cast<std::chrono::milliseconds>(this->end - this->start);
    std::cout << " thread ID:" << std::this_thread::get_id() << "Ended; Duration Seconds: " << this->duration.count() << "\n";
}