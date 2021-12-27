#include "Blocks/Factory.h"
#include "ConfigReader.h"

class WorkflowExecutor{
private:
    IWorker* worker{};
    list<pair<string, string>> priority;
    string filename;
    vector<string> text;
    Factory fact;

    void parse_config();
public:
    explicit WorkflowExecutor(const string& file);

    void execute();

};



