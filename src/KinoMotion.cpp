#include "KinoMotion.h"

KinoMotion::KinoMotion(Params params)
    : hybridAStar(std::make_unique<HybridAStar>())
{
}

KinoMotion::~KinoMotion()
{
}

vector<vector<int>> KinoMotion::plan(Pose start, Pose goal, vector<vector<int>> map)
{
    std::cout << "Hello" << std::endl;
    return map;
}