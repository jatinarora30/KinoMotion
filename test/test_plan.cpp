#include "KinoMotion.h"
#include <vector>

int main()
{
    Params params;
    KinoMotion motion(params);
    Pose start{};
    Pose goal{};
    std::vector<std::vector<int>> map;
    motion.plan(start, goal, map);
    return 0;
}