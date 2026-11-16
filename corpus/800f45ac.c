#include "tc_rt.h"

u32 fn_800f45ac(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 1u;
    r0 = rd32((u32)param_1 + 0x4cu);
    r30 = rd32(0x804863d8u);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        if (rd32(r30 + 0x110u) != 0u) {
            r31 = rd32(r30 + 0xa48u);
            if (r31 != 0u) {
                r3 = rd32((u32)param_1 + 0x44u);
                a.r[0] = r3;
                a.r[1] = rd32(r31 + 0x74u);
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0xa4u), &a);
                if (r3 != 0u) {
                    r4 = (u32)rd8(r31 + 0x79u) - 1u;
                    if ((r4 & 0xffu) != 0u) {
                        r3 = rd32(r30 + 0xa48u);
                        if (r3 != 0u) {
                            wr8(r3 + 0x79u, (u8)r4);
                        }
                    } else {
                        a.r[0] = r30;
                        f1 = tc_callf(0x800c4a78u, &a);
                        a.r[0] = r31;
                        a.r[1] = tc_lastr4();
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        f1 = tc_callf(rd32(rd32(r31) + 0x18u), &a);
                        if (r31 != 0u) {
                            a.r[0] = r31;
                            a.r[1] = 1u;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(rd32(rd32(r31) + 8u), &a);
                        }
                    }
                }
            }
            r31 = 0u;
            wr32((u32)param_1 + 0x4cu, 0u);
        }
    } else if (c0lt && (s32)r0 >= 0) {
        a.r[0] = r30;
        a.r[1] = 0x1eu;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.f[0] = (f64)rdf32(0x80573b88u);
        (void)tc_call(rd32(rd32(r30) + 0x54u), &a);
        wr32((u32)param_1 + 0x4cu, 1u);
    }
    return r31;
}
