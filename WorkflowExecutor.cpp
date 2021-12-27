#include "WorkflowExecutor.h"
WorkflowExecutor::WorkflowExecutor(const string& file) {
    filename = file;
}


void WorkflowExecutor::parse_config() {
    ConfigReader reader(filename);
    priority = reader.read_config();
}

void WorkflowExecutor::execute() {
    parse_config();
    if ((priority.front().first != "readfile") || (priority.back().first != "writefile"))
        throw runtime_error("Invalid workflow order");
    for(const auto& it : priority){
        worker = fact.createWorker(it.first, it.second);
        worker->do_work(text);
        if (it.first != "writefile"){
            text = worker->get_result();
        }
    }
}