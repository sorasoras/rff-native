#include "tc_rt.h"

void fn_8007e314(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80572864u);
    wr32(0x817fe004u, 0x817ff000u);
    f2 = (f64)rdf32(0x80572860u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    f1 = (f64)rdf32(param_1 + 0x308u);
    f0 = (f64)(f32)(f1 - f0);
    if (!(f2 > f0)) {
        f2 = f0;
    }
    r0 = rd32(param_1 + 0x148u);
    wrf32d(param_1 + 0x308u, f2);
    r0 = (r0 << 3u) & 0xc0000000u;
    r0 = (u32)((s32)r0 >> 31);
    if (r0 == 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        do {
            if (r3 != 0u) {
                r3 = rd32(param_1 + 0x148u);
                if ((u32)((s32)((r3 << 1u) & 0xc0000000u) >> 31) == 0u && (u32)((s32)((r3 << 5u) & 0xc0000000u) >> 31) == 0u) {
                    a.r[0] = param_1;
                    f1 = tc_callf(0x80074de4u, &a);
                    r4 = tc_lastr4();
                    r3 = rd32(param_1 + 0x158u);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        f1 = tc_callf(0x8009608cu, &a);
                        r4 = tc_lastr4();
                    }
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(param_1) + 0x140u), &a);
                    break;
                }
            }
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            f1 = tc_lastf();
            r4 = rd32(r3);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfdcu, r4);
            wr32(0x817fdfe0u, r0);
            wr32(0x817fdfe4u, rd32(r3 + 8u));
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            wrf32d(0x817fdfd8u, f1);
            a.r[0] = param_1;
            f1 = tc_callf(0x8007fa14u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 0u) {
                r3 = rd32(param_1 + 0x148u);
                if ((u32)((s32)((r3 << 1u) & 0xc0000000u) >> 31) == 0u && (u32)((s32)((r3 << 6u) & 0xc0000000u) >> 31) == 0u && (u32)((s32)((r3 << 5u) & 0xc0000000u) >> 31) == 0u) {
                    if (rd32(param_1 + 0x2bcu) != 1u) {
                        a.r[0] = param_1;
                        a.r[1] = 0x817fdfdcu;
                        a.r[2] = 0x817fdfd8u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        f1 = tc_callf(rd32(rd32(param_1) + 0x154u), &a);
                        r4 = tc_lastr4();
                    } else {
                        a.r[0] = param_1;
                        a.r[1] = 0x817fdfdcu;
                        a.r[2] = 0x817fdfd8u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        f1 = tc_callf(rd32(rd32(param_1) + 0x190u), &a);
                        r4 = tc_lastr4();
                    }
                }
            }
            if ((u32)((s32)((rd32(param_1 + 0x148u) << 1u) & 0xc0000000u) >> 31) != 0u) {
                a.r[0] = param_1;
                a.r[1] = 0x817fdfdcu;
                a.r[2] = 0x817fdfd8u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(param_1) + 0x158u), &a);
                r4 = tc_lastr4();
            }
            if ((u32)((s32)((rd32(param_1 + 0x148u) << 6u) & 0xc0000000u) >> 31) != 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(param_1) + 0x17cu), &a);
                r4 = tc_lastr4();
            }
            if ((u32)((s32)((rd32(param_1 + 0x148u) << 5u) & 0xc0000000u) >> 31) != 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(param_1) + 0x178u), &a);
            }
            a.r[0] = param_1;
            a.r[1] = 0x817fdfdcu;
            a.r[2] = 0x817fdfd8u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x170u), &a);
            a.r[0] = param_1;
            f1 = tc_callf(0x800625b8u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x15cu), &a);
            r4 = rd32(param_1 + 0x164u);
            wr32(param_1 + 0x164u, r4 + 1u);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x140u), &a);
        } while (0);
        r29 = 0u;
        r30 = 0u;
        while (r29 < rd32(param_1 + 0x328u)) {
            r3 = rd32(rd32(param_1 + 0x324u) + r30);
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x8007e5d0u, &a);
            }
            r30 = r30 + 4u;
            r29 = r29 + 1u;
        }
    } else {
        a.r[0] = param_1;
        (void)tc_call(0x80074de4u, &a);
    }
    return;
}
