#include "tc_rt.h"

void fn_800366e8(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if (rd32(0x80571270u) == 0u) {
        if (rd32(0x80570fc4u) != 0u) {
            r5 = (u32)rd8(0x80571f09u);
            r4 = (u32)rd8(0x80571f0au);
            r0 = (u32)rd8(0x80571f0bu);
            wr8(0x817fdff8u, rd8(0x80571f08u));
            f1 = (f64)rdf32(0x80571ee0u);
            wr8(0x817fdff9u, (u8)r5);
            wr8(0x817fdffau, (u8)r4);
            wr8(0x817fdffbu, (u8)r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdff8u;
            (void)tc_call(0x80051e9cu, &a);
            a.r[0] = 0u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0xffffffu;
            (void)tc_call(0x80044e78u, &a);
            a.r[0] = 0u;
            (void)tc_call(0x80035ba0u, &a);
            a.r[0] = 1u;
            a.r[1] = 0u;
            (void)tc_call(0x8004f3bcu, &a);
            (void)tc_call(0x80043ab4u, &a);
            r0 = rd32(0x80570fc4u);
            c0lt = (s32)r0 < 3;
            if (r0 == 3u) {
                a.r[0] = 8u;
                r3 = tc_call(0x80035dfcu, &a);
                a.r[0] = r3;
                (void)tc_call(0x80036518u, &a);
            } else if (!c0lt) {
                if ((s32)r0 < 5) {
                    a.r[0] = 7u;
                    r3 = tc_call(0x80035dfcu, &a);
                    a.r[0] = r3;
                    (void)tc_call(0x80036518u, &a);
                }
            } else {
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    a.r[0] = 0xau;
                    r3 = tc_call(0x80035dfcu, &a);
                    a.r[0] = r3;
                    (void)tc_call(0x80036518u, &a);
                } else if (!c0lt) {
                    a.r[0] = 9u;
                    r3 = tc_call(0x80035dfcu, &a);
                    a.r[0] = r3;
                    (void)tc_call(0x80036518u, &a);
                }
            }
        } else if (rd32(0x80570fc8u) != 0u) {
            a.r[0] = 1u;
            (void)tc_call(0x80035ba0u, &a);
            r3 = tc_call(0x8003c97cu, &a);
            if (r3 == 0u) {
                r3 = tc_call(0x80059e8cu, &a);
                if (r3 == 0u) {
                    a.r[0] = 0u;
                    a.r[1] = 0u;
                    (void)tc_call(0x8004f3bcu, &a);
                    (void)tc_call(0x80043b34u, &a);
                }
            }
            wr32(0x80570fc8u, 0u);
        }
    }
    return;
}
