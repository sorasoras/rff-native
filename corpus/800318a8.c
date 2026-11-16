#include "tc_rt.h"

void fn_800318a8(s32 param_1, u32 param_2)
{
    u32 r4 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8007b194u, &a);
    if ((param_2 & 1u) != 0u) {
        r4 = (u32)param_1 + 0x78u;
        if (rd32((u32)param_1 + 0x78u) == 0u) {
            r4 = 0u;
        }
        if (r4 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            (void)tc_call(0x800317e0u, &a);
        }
    }
    if ((param_2 & 2u) != 0u) {
        r4 = (u32)param_1 + 0x80u;
        if (rd32((u32)param_1 + 0x80u) == 0u) {
            r4 = 0u;
        }
        if (r4 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            (void)tc_call(0x800317e0u, &a);
        }
    }
    if ((param_2 & 4u) != 0u) {
        r31 = (u32)param_1 + 0x88u;
        if (rd32((u32)param_1 + 0x88u) == 0u) {
            r31 = 0u;
        }
        if (r31 != 0u) {
            a.r[0] = 1u;
            a.r[1] = 0u;
            a.r[2] = 3u;
            (void)tc_call(0x80044e3cu, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            (void)tc_call(0x800317e0u, &a);
            a.r[0] = 1u;
            a.r[1] = 1u;
            a.r[2] = 3u;
            (void)tc_call(0x80044e3cu, &a);
        }
    }
    (void)tc_call(0x8007b1a4u, &a);
    return;
}
