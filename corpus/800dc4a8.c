#include "tc_rt.h"

void fn_800dc4a8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_3 != 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800dc5acu, &a);
    }
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x34u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r31 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x34u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x34u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r31 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        (void)tc_call(0x800dae1cu, &a);
    }
    a.r[0] = r31;
    a.r[1] = param_2;
    (void)tc_call(0x800daed8u, &a);
    if (rd32(param_1 + (rd32(param_1 + 8u) * 0x1cu) + 0x14u) == 0u) {
        wrf32d(param_1, (f64)rdf32(0x80573a10u));
    }
    a.r[0] = param_1 + (rd32(param_1 + 8u) * 0x1cu) + 0xcu;
    a.r[1] = r31;
    (void)tc_call(0x8007b03cu, &a);
    return;
}
