#include "tc_rt.h"

u32 fn_80118cf0(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x8049912eu) == 0x21u) {
        r3 = 0u;
    } else {
        if ((s32)param_1 < 0) {
            a.r[0] = 0x10u;
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x800a51f8u, &a);
            r31 = r3;
        } else {
            r31 = param_1;
        }
        if ((s32)param_2 < 0) {
            a.r[0] = 0x12u;
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x800a51f8u, &a);
        } else {
            r3 = param_2;
        }
        r5 = 0u;
        r4 = (u32)rd8(0x80499130u);
        if (r31 == (u32)rd8(0x80499131u) && r3 == r4) {
            r5 = 1u;
        }
        r3 = r5;
    }
    return r3;
}
