#include <iostream>
#include "Source/WorkflowExecutor.h"

using namespace std;


int main() {
    WorkflowExecutor w1("config.txt");
    w1.execute();
    return 0;
}
