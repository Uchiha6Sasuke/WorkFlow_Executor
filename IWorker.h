#include <string>
#include <fstream>
#include <utility>
#include <vector>
#include <list>
#include <unordered_map>
#include <map>


using namespace std;
class IWorker{
protected:
    vector<string> args;
    vector<string> text;
public:
    virtual void parse_args() = 0;


    virtual void do_work(vector<string> text) = 0;

    virtual vector<string> get_result() = 0;


};

