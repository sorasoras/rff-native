#include "tc_rt.h"

u32 fn_8020b4fc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(rd32(0x80571398u) + 0x11cu);
    if ((s32)r31 >= 0) {
        r0 = ppc_mulhw(-2004318071, (s32)r31) + r31;
        r4 = (u32)((s32)r0 >> 4);
        r0 = (u32)((s32)r0 >> 4);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0x1eu;
        a.r[0] = r4 + ((r4 >> 0x1fu) & 1u);
        a.r[1] = r31 - r0 + 1u;
        r3 = tc_call(0x800a7528u, &a);
        if (r3 == 0x1eu) {
            a.r[0] = 0x14u;
            a.r[1] = 0x78u;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            a.r[0] = param_1;
            a.r[1] = r3;
            a.r[2] = 0u;
            (void)tc_call(0x801006a4u, &a);
        } else {
            if (r3 == 0x1fu) {
                a.r[0] = 0x14u;
                a.r[1] = 0x79u;
                a.r[2] = 0u;
                r3 = tc_call(0x801412f8u, &a);
                a.r[0] = param_1;
                a.r[1] = r3;
                a.r[2] = 0u;
                (void)tc_call(0x801006a4u, &a);
            } else {
                if ((s32)r31 >= 0) {
                    a.r[0] = 0x14u;
                    a.r[1] = r31;
                    a.r[2] = 0u;
                    r3 = tc_call(0x801412f8u, &a);
                    a.r[0] = param_1;
                    a.r[1] = r3;
                    a.r[2] = 0u;
                    (void)tc_call(0x801006a4u, &a);
                }
            }
        }
    }
    return 1u;
}
