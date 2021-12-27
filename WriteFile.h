#ifndef HASH_TABLE_WRITEFILE_H
#define HASH_TABLE_WRITEFILE_H
#include "IWorker.h"

class WriteFile : public IWorker{
private:
    vector<string> get_result() override;

    void parse_args() override;
public:
    ofstream file;
    explicit WriteFile(const string& arguments);




    void do_work(vector<string> txt) override;


};


#endif //HASH_TABLE_WRITEFILE_H
