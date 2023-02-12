#ifndef DIGITALCOUNTER_H
#define DIGITALCOUNTER_H

#include <ctime>
#include <unistd.h>

class DigitalCounter {
private:
    int m_min;
    int m_max;
    time_t timer;

public:
    DigitalCounter(int min = 0, int max = 59);

    void increase();
    void show();
    void getCurrent();

};


#endif
