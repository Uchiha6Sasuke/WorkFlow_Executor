
#include "IWorker.h"


class Factory {
public:
    IWorker* createWorker(const string& Worker_name, const string& arguments);
};



