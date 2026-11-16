#include "tc_rt.h"

void fn_8029c778(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r12 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x802952a8u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        if (((u32)rd8(r3 + 0x81u) & 0x40u) != 0u) {
            r12 = rd32(0x8053f274u);
            if (r12 != 0u) {
                if ((u32)param_2 == 0x17u) {
                    r4 = r3 + 0x22u;
                    r5 = r3 + 0x35u;
                    r3 = r3 + 0x1cu;
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = 0x17u;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                } else {
                    r4 = r3 + 0x22u;
                    r5 = r3 + 0x35u;
                    r3 = r3 + 0x1cu;
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = 5u;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                }
            }
        }
        if (rd32(0x8053f2a4u) != 0u) {
            a.r[0] = 0x8053f2acu;
            a.r[1] = r30 + 0x1cu;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) {
                a.r[0] = 0x8053f294u;
                (void)tc_call(0x8028d290u, &a);
                wr32(0x8053f2a4u, 0u);
                a.r[0] = 0x8053f2acu;
                a.r[1] = 0xffu;
                a.r[2] = 6u;
                f1 = tc_callf(0x8000443cu, &a);
                r12 = rd32(0x8053f274u);
                if (r12 != 0u) {
                    a.r[0] = r30 + 0x1cu;
                    a.r[1] = r30 + 0x22u;
                    a.r[2] = r30 + 0x35u;
                    a.r[3] = 0xeu;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                }
            }
        }
        wr16(r30 + 0x18u, 0xffffu);
        wr8(r30 + 0x7fu, 0u);
        wr8(r30 + 0x76u, (u8)((u32)rd8(r30 + 0x76u) & 0xf8u));
        wr8(r30 + 0x81u, (u8)((u32)rd8(r30 + 0x81u) & 0x80u));
        wr32(r30 + 4u, 0u);
    }
    return;
}
