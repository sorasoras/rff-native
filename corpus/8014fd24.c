#include "tc_rt.h"

u32 fn_8014fd24(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_3;
    if ((u32)param_3 == 0u) {
        r31 = rd32(param_1 + 0x70u);
    }
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = (u32)param_3;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x1f4u), &a);
    a.r[0] = r31;
    a.r[1] = r3;
    r3 = tc_call(0x80031be0u, &a);
    if (r3 != 0u) {
        if ((u32)param_2 == 0u && ((u32)rd16(r3 + 0x34u) & 0x10u) != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x8007b16cu, &a);
            r3 = 1u;
            return r3;
        }
        if ((u32)param_2 != 0u && ((u32)rd16(r3 + 0x34u) & 0x10u) == 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            (void)tc_call(0x8007b16cu, &a);
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
