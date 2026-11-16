#include "tc_rt.h"

void fn_802ccf0c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, c0lt = 0, r3 = 0, r22 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_2;
    r3 = tc_call(0x802cb754u, &a);
    if (r3 != 0u) {
        r28 = 0u;
        r29 = param_2 + (u32)rd16(param_2 + 0xcu);
        r27 = 0u;
        while ((s32)r27 < (s32)rd16(param_2 + 0xeu)) {
            if (rd32(r29) == 0x70616931u) {
                r3 = rd32(param_2);
                c0lt = (s32)r3 < 1380734032;
                do {
                    if (r3 != 0x524c5450u) {
                        if (!c0lt) {
                            c0lt = (s32)r3 < 1380734531;
                            if (r3 != 0x524c5643u) {
                                if (!c0lt) {
                                    if (r3 != 0x524c5649u) break;
                                } else if (r3 != 0x524c5453u) {
                                    break;
                                }
                            }
                        } else {
                            c0lt = (s32)r3 < 1380732227;
                            if (r3 != 0x524c4d43u) {
                                if (!c0lt) {
                                    if (r3 != 0x524c5041u) break;
                                } else if (r3 != 0x524c414eu) {
                                    break;
                                }
                            }
                        }
                    }
                    a.r[0] = rd32(0x805474e0u);
                    r3 = tc_call(0x8026d490u, &a);
                    f1 = tc_lastf();
                    c0eq = r3 == 0u;
                    if (c0eq) {
                        r22 = 0u;
                    } else {
                        r22 = r3;
                        if (!c0eq) {
                            a.r[0] = r3;
                            r3 = tc_call(0x802ca930u, &a);
                            f1 = tc_lastf();
                            r22 = r3;
                        }
                    }
                    if (r22 != 0u) {
                        a.r[0] = r22;
                        a.r[1] = r29;
                        a.r[2] = param_3;
                        a.f[0] = f1;
                        (void)tc_call(rd32(rd32(r22) + 0xcu), &a);
                        r28 = r22;
                    }
                } while (0);
                if (r28 != 0u) {
                    wr32(0x817fdfc8u, param_1 + 8u);
                    a.r[0] = param_1 + 4u;
                    a.r[1] = 0x817fdfc8u;
                    a.r[2] = r28 + 4u;
                    (void)tc_call(0x802d7a8cu, &a);
                }
            }
            r27 = r27 + 1u;
            r29 = r29 + rd32(r29 + 4u);
        }
    }
    return;
}
