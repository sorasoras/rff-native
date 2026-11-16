#include "tc_rt.h"

void fn_80233024(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdfe8u, 1u);
    r3 = tc_call(0x802de0e8u, &a);
    if (r3 == 0u) {
        a.r[0] = 0xe0u;
        a.r[1] = 0x20u;
        r3 = tc_call(0x80227210u, &a);
        r31 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0xe0u;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0u;
            a.r[3] = 0x817fdfe8u;
            r3 = tc_call(0x802de218u, &a);
            if (r3 == 0u) {
                a.r[0] = ((rd32(0x817fdfe8u) * 0xd8u) + 0x1fu) & 0xffffffe0u;
                a.r[1] = 0x20u;
                r3 = tc_call(0x80227210u, &a);
                r30 = r3;
                if (r3 != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = r3;
                    a.r[3] = 0x817fdfe8u;
                    r3 = tc_call(0x802de218u, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = r30;
                        a.r[1] = rd32(0x817fdfe8u);
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        r3 = tc_call(0x80232c34u, &a);
                        if ((s32)r3 >= 0) {
                            a.r[0] = r31;
                            a.r[1] = r30 + (r3 * 0xd8u);
                            a.r[2] = 0xd8u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = param_1;
                            a.r[1] = param_2;
                            a.r[2] = r31;
                            r3 = tc_call(0x802de184u, &a);
                            if (r3 == 0u) {
                                for (;;) {
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
