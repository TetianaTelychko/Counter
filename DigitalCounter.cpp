#include "DigitalCounter.h"
#include <iostream>

DigitalCounter::DigitalCounter(int min, int max) {
    m_min = min;
    m_max = max;
    timer =  time(nullptr);
}

void DigitalCounter::increase() {
    ++m_max;
    std::cout << "\nМаксимум збільшений і дорівнює " << m_max << '\n';
}

void DigitalCounter::show() {
    std::cout << "\nЗначення лічильника у реальному часі -> --";
    while(true){
        int dif = ((int)difftime(time(nullptr), timer) % (m_max + 1 - m_min)) + m_min;
        std::string clear = "\b\b";
        if(dif < 10){
            std::cout << clear << '_' << dif;
        }
        else{
            std::cout << clear << dif;
        }
        std::cout.flush();
        sleep(1);
    }
}

void DigitalCounter::getCurrent() {
    int dif = ((int)difftime(time(nullptr), timer) % (m_max + 1 - m_min)) + m_min;
    std::cout << "\nПоточне значення лічильника дорівнює " << dif << '\n';

}


