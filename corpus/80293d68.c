#include "tc_rt.h"

void fn_80293d68(u32 param_1)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0x8053d98cu;
    if ((u32)rd8(param_1) == 0u) {
        r4 = ((u32)rd8(param_1 + 1u) + (((u32)rd8(param_1 + 2u) << 8u) & 0xffffff00u)) & 0xffffu;
        ctr = 4u;
        while ((u32)rd8(r31 + 0x119u) == 0u || (u32)rd16(r31) != r4) {
            r31 = r31 + 0x11cu;
            ctr = ctr - 1u;
            if (ctr == 0u) {
                return;
            }
        }
        wr8(r31 + 0x110u, rd8(param_1 + 3u));
        wr8(r31 + 0x111u, rd8(param_1 + 4u));
        wr8(r31 + 0x112u, rd8(param_1 + 5u));
        wr8(r31 + 0x113u, rd8(param_1 + 6u));
        wr8(r31 + 0x114u, rd8(param_1 + 7u));
        wr8(r31 + 0x115u, rd8(param_1 + 8u));
        wr8(r31 + 0x116u, rd8(param_1 + 9u));
        wr8(r31 + 0x117u, rd8(param_1 + 0xau));
        a.r[0] = r4;
        r3 = tc_call(0x802952a8u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r3 = r3 + 0x77u;
            a.r[0] = r3;
            a.r[1] = r31 + 0x110u;
            a.r[2] = 8u;
            f1 = tc_callf(0x80004338u, &a);
        }
        r5 = (u32)rd16(0x8053dfacu);
        r4 = r5 & 0xcc18u;
        r30 = r4 & 0xffffccf9u;
        if ((u32)rd8(0x8053df8eu) >= 3u) {
            r30 = (r4 | (r5 & 0x3306u)) & 0xffffu;
        }
        if ((u32)rd8(0x80540118u) >= 4u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xd0003u;
            a.r[1] = 0x80393670u;
            a.r[2] = r30 & 0xffffu;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc6cu, &a);
        }
        a.r[0] = (u32)rd16(r31);
        a.r[1] = r30 & 0xffffu;
        r3 = tc_call(0x802a0468u, &a);
        f1 = tc_lastf();
        if ((r3 & 0xffu) != 0u) {
            wr16(r31 + 2u, (u16)r30);
        }
        if ((u32)rd16(0x8053de1cu) != 0u) {
            a.r[0] = r31 + 8u;
            a.r[1] = 0x8053de1cu;
            f1 = tc_callf(0x802939d8u, &a);
        }
        r30 = 0u;
        r28 = (u32)rd16(0x8053de1eu);
        r29 = 0x8053d98cu;
        for (;;) {
            if ((u32)rd8(r29 + 0x119u) != 0u) {
                a.r[0] = r29 + 8u;
                a.r[1] = r31 + 8u;
                a.r[2] = 6u;
                r3 = tc_call(0x802592d8u, &a);
                f1 = tc_lastf();
                if (r3 == 0u) break;
            }
            r30 = r30 + 1u;
            r29 = r29 + 0x11cu;
            if (r30 >= 4u) {
                r29 = 0u;
                break;
            }
        }
        if (r29 != 0u) {
            wr16(r29 + 0x10eu, (u16)r28);
            if ((u32)rd8(r29 + 0x11au) == 0u) {
                a.r[0] = (u32)rd16(r29);
                a.r[1] = r28;
                f1 = tc_callf(0x802a1968u, &a);
            }
        }
        r12 = rd32(0x8053de20u);
        if (r12 != 0u) {
            a.r[0] = r31 + 8u;
            a.r[1] = r31 + 0xeu;
            a.r[2] = r31 + 0x11u;
            a.r[3] = r31 + 0x110u;
            a.r[4] = 1u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
