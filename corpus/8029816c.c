#include "tc_rt.h"

void fn_8029816c(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = 0x817fdfd8u;
    r30 = 6u;
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    r31 = r3;
    if (r3 != 0u) {
        c0lt = (s32)param_r3 < 1;
        if (param_r3 == 1u) {
            a.r[0] = 0x817fdfd8u;
            a.r[1] = param_r4;
            a.r[2] = 3u;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = 0x817fdfdbu;
            a.r[1] = param_r4 + 3u;
            a.r[2] = 3u;
            (void)tc_call(0x80004338u, &a);
        } else if (!c0lt) {
            if ((s32)param_r3 >= 3) {
                return;
            }
            r29 = param_r4;
        } else {
            if ((s32)param_r3 < 0) {
                return;
            }
            r30 = 0u;
        }
        wr8(0x8053f19cu, 1u);
        a.r[0] = r31;
        a.r[1] = 1u;
        a.r[2] = param_r3;
        a.r[3] = r29;
        a.r[4] = r30;
        (void)tc_call(0x802a100cu, &a);
    }
    return;
}
