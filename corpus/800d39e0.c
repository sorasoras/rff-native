#include "tc_rt.h"

void fn_800d39e0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800d595cu, &a);
    if (r3 != 3u) {
        if (r3 == 0u) {
            return;
        }
        a.r[0] = (u32)param_1 + 0x4bcu;
        (void)tc_call(0x800d30c4u, &a);
        wr32((u32)param_1 + 0x72cu, (rd32((u32)param_1 + 0x72cu) | 0x20000000u) & 0xbfffffffu);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800d38e4u, &a);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d5b8cu, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x1fu;
            (void)tc_call(0x800d5bc8u, &a);
        } else {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800d57a4u, &a);
            if (r3 == 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 3u;
                (void)tc_call(0x800d5bc8u, &a);
            }
        }
    }
    return;
}
