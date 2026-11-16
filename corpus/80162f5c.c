#include "tc_rt.h"

u32 fn_80162f5c(u32 param_1, s32 param_2)
{
    u32 c0gt = 0;
    (void)param_1;
    if ((u32)param_2 == 0u) {
        return 0u;
    }
    if (param_2 >= 1 && param_2 <= 24) {
        return 1u;
    }
    c0gt = param_2 > 42;
    if (param_2 >= 42 && !c0gt) {
        return 3u;
    }
    if (param_2 >= 43 && param_2 <= 55) {
        return 3u;
    }
    if (param_2 >= 56 && param_2 <= 100) {
        return 3u;
    }
    c0gt = param_2 > 101;
    if (param_2 >= 101 && !c0gt) {
        return 3u;
    }
    c0gt = param_2 > 102;
    if (param_2 >= 102 && !c0gt) {
        return 3u;
    }
    c0gt = param_2 > 103;
    if (param_2 >= 103 && !c0gt) {
        return 0u;
    }
    if (param_2 >= 104) {
        if (param_2 > 107) {
            return 0xffffffffu;
        }
        return 3u;
    }
    return 0xffffffffu;
}
