#include "tc_rt.h"

void fn_80232774(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdec0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x8057158cu, 0u);
    wr32(0x80571588u, 0u);
    wr32(0x80571580u, 0u);
    wr32(0x8057157cu, 1u);
    r3 = tc_call(0x802de0e8u, &a);
    if (r3 == 0u) {
        a.r[0] = 0u;
        a.r[1] = 0x817fdf00u;
        r3 = tc_call(0x802de330u, &a);
        f1 = tc_lastf();
        if (r3 != 0xfffffc07u && r3 == 0u) {
            a.r[0] = 0x817fdf00u;
            a.r[1] = 0x817fdee0u;
            a.r[2] = 0x817fdee4u;
            r3 = tc_call(0x802325acu, &a);
            f1 = tc_lastf();
        }
        if (r3 == 0u) {
            r0 = rd32(0x817fdee0u);
            if (r0 != 0u && r0 == 1u) {
                if (rd32(0x817fdee4u) == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80386c54u;
                    a.r[1] = 0x307u;
                    a.r[2] = 0x80570aa8u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802285e4u, &a);
                }
                a.r[0] = 0x804e1000u;
                (void)tc_call(0x8022671cu, &a);
                r5 = rd32(0x817fdee4u);
                r6 = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
                r8 = r5 + 1u;
                r5 = (u32)(u64)((r5 + 1u) < r5) * r6;
                r4 = ppc_mulhwu(r8, r6) + r5;
                r6 = r8 * r6;
                a.r[0] = 0x804e1000u;
                a.r[1] = r4;
                a.r[2] = r4 + (r8 * 0u);
                a.r[3] = r6;
                a.r[4] = 0x80232490u;
                f1 = tc_callf(0x8022697cu, &a);
                r5 = rd32(0x804e100cu);
                wr32(0x80571588u, rd32(0x804e1008u));
                r4 = rd32(0x817fdee4u);
                wr32(0x8057158cu, r5);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80386c64u;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80228554u, &a);
            }
        }
    }
    (void)tc_call(0x802de13cu, &a);
    return;
}
