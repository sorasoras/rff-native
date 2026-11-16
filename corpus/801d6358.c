#include "tc_rt.h"

s32 fn_801d6358(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r5 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        if (rd32((u32)param_1 + 0x258u) != 0u) {
            wr32((u32)param_1 + 0x258u, 0u);
        }
        if (rd32((u32)param_1 + 0x25cu) != 0u) {
            wr32((u32)param_1 + 0x25cu, 0u);
        }
        r5 = (u32)param_1 + 8u;
        if (rd32((u32)param_1 + 0x260u) != 0u) {
            wr32(r5 + 0x258u, 0u);
        }
        if (rd32(r5 + 0x25cu) != 0u) {
            wr32(r5 + 0x25cu, 0u);
        }
        c0eq = ((u32)param_1 + 0x1e0u) == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = (u32)param_1 + 0x1f4u;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80157e18u, &a);
        }
        c0eq = ((u32)param_1 + 0x168u) == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = (u32)param_1 + 0x17cu;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80157e18u, &a);
        }
        c0eq = ((u32)param_1 + 0xf0u) == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = (u32)param_1 + 0x104u;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80157e18u, &a);
        }
        c0eq = ((u32)param_1 + 0x78u) == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = (u32)param_1 + 0x8cu;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80157e18u, &a);
        }
        if ((u32)param_1 != 0u) {
            a.r[0] = (u32)param_1 + 0x14u;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80157e18u, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
