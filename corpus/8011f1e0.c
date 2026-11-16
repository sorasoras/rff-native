#include "tc_rt.h"

void fn_8011f1e0(f64 param_1, s32 param_2, s32 param_3)
{
    TcArgs a = {0};
    if (rd32((u32)param_2 + 0x58u) != 0u) {
        if (rd32((u32)param_2 + 0xcu) == (u32)param_3) {
            return;
        }
        wr32((u32)param_2 + 0xcu, (u32)param_3);
        wrf32d((u32)param_2 + 0x5cu, param_1);
        a.r[0] = (u32)param_2;
        a.r[1] = 3u;
        (void)tc_call(0x8011f1d8u, &a);
        return;
    }
    return;
}
