#include "timer.h"

timer::timer(){
    //high resolution clock is more reliable for intervals, system clock is more reliable for the date
    start = std::chrono::high_resolution_clock::now();
    std::cout << "timer started at " << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    std::cout << " thread ID: " << std::this_thread::get_id() << std::endl;
}

timer::~timer(){
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout << " thread ID:" << std::this_thread::get_id() << " Duration Seconds: " << duration.count() << std::endl;
}