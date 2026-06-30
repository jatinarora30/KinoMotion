#include "Data.h"
#include "HybridAstar.h"
#include <vector>
#include <memory>
using namespace std;
class KinoMotion
{
private:
    unique_ptr<HybridAStar> hybridAStar;

public:
    KinoMotion(Params params);
    ~KinoMotion();
    vector<vector<int>> plan(Pose start, Pose goal, vector<vector<int>> map);
};