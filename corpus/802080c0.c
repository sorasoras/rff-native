#include "tc_rt.h"

u32 fn_802080c0(s32 param_1, u32 param_r8, u32 param_r9, u32 param_r6, u32 param_r7)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r3 = (u32)rd16(0x80499214u);
    if (r3 != 0x2e8u) {
        a.r[0] = r3;
        a.r[1] = 0x21u;
        a.r[2] = 0xffffffffu;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        r3 = tc_call(0x80207af8u, &a);
        r30 = r3 * 0x64u;
    }
    a.r[0] = 0x8049c500u;
    a.r[1] = rd32((u32)param_1 + 4u);
    r3 = tc_call(0x800c8804u, &a);
    r30 = r30 + r3;
    a.r[0] = 0x8049c500u;
    a.r[1] = rd32((u32)param_1 + 4u);
    r3 = tc_call(0x800c8888u, &a);
    if (r30 < r3) {
        a.r[0] = 0x8049c500u;
        a.r[1] = rd32((u32)param_1 + 4u);
        a.r[2] = r30;
        (void)tc_call(0x800c8898u, &a);
    }
    return r30;
}
