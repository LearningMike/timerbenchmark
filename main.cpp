#include "timer.h"

void new_thread() {

    std::cout << __FUNCTION__ << "()'s ";
    timer newthread;

    using namespace std::literals::chrono_literals; //lets us use 2s in the thread sleep_for parameter
    std::this_thread::sleep_for(2s);
}

int main () {
    
    std::cout << __FUNCTION__ << "()'s ";
    timer mainthread;

    std::thread worker(new_thread);

    using namespace std::literals::chrono_literals;
    std::this_thread::sleep_for(1s);

    worker.join();

    return 0;
}