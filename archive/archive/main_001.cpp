/*
    بلاخره تونستم برنامه سی پلاس پلاس مبتنی بر فریم ورک
    پوکو رو کامپایل کنم.
    از این بابت خیلی خوشحالم. حالا آرام آرام میتونم به آرزوم برسم. یعنی
    نوشتن یک برنامه بک - اند با سی پلاس پلاس با یک فریم ورک کامل


*/

#include "Poco/BasicEvent.h"
#include "Poco/Delegate.h"
#include <iostream>

class Source {
public:
    Poco::BasicEvent<int> theEvent;

    void fireEvent(int n) {
        theEvent(this, n);
    }
};

class Target {
public:
    void onEvent(const void *pSender, int &arg) {
        std::cout << "onEvent: " << arg << std::endl;
    }
};

int main(int argc, char **argv) {
    Source source;
    Target target;

    source.theEvent += Poco::delegate(&target, &Target::onEvent);
    source.theEvent += Poco::delegate(&target, &Target::onEvent);

    source.fireEvent(42);

    source.theEvent -= Poco::delegate(&target, &Target::onEvent);

    return 0;
}