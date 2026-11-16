#include "tc_rt.h"

u32 fn_803061f0(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r3 = rd32(param_1 + 0x24u);
    if (r3 == 0u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = 0u;
    } else {
        if ((s32)rd32(param_1) >= (s32)r3) {
            r4 = rd32(param_1 + 0x10u) - 0xf0u;
            if (r4 == 0u) {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                r3 = 0u;
                return r3;
            }
            r3 = (u32)rd8(r4 + 0x8cu) + rd32(r4 + 0x48u);
            if ((s32)r3 > 127) {
                r0 = 0x7fu;
            } else {
                r0 = r3 & ~(u32)((s32)r3 >> 31);
            }
            if (param_2 < (s32)r0) {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                r3 = 0u;
                return r3;
            }
        }
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = 1u;
    }
    return r3;
}
