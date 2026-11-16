#include "tc_rt.h"

void fn_802d1f90(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r27 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x802d09d8u, &a);
    wr32(param_1, 0x80399eacu);
    a.r[0] = param_1 + 0xd8u;
    a.r[1] = 0x802cd8c0u;
    a.r[2] = 0x802cb69cu;
    a.r[3] = 4u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    f0 = (f64)rdf32(0x80348a80u);
    r31 = ((u32)rd16(param_2 + 0x4cu) >> 1u) & 0xffffu;
    wrf32d(param_1 + 0xe4u, f0);
    wrf32d(param_1 + 0xe8u, f0);
    if (r31 != 0u) {
        r31 = (r31 - 1u) & 0xffffu;
    }
    r5 = ppc_mulhw(1431655766, (s32)rd8(param_1 + 0xfcu));
    f0 = (f64)rdf32(0x80348a80u);
    wr32(param_1 + 0xd4u, 0u);
    wr16(param_1 + 0xf8u, 0u);
    r0 = r5 + ((r5 >> 0x1fu) & 1u);
    r6 = r0 & 0xffu;
    wr16(param_1 + 0xfau, 0u);
    r0 = (r0 << 2u) & 0x3fcu;
    r6 = r0 - r6;
    wr32(param_1 + 0xe0u, 0u);
    r7 = (r6 + 1u) & 0xffu;
    r6 = ppc_mulhw(1431655766, (s32)r7);
    wrf32d(param_1 + 0xe4u, f0);
    wrf32d(param_1 + 0xe8u, f0);
    wrf32d(param_1 + 0xecu, f0);
    wrf32d(param_1 + 0xf0u, f0);
    r6 = (r7 - ((r6 + ((r6 >> 0x1fu) & 1u)) * 3u)) & 0xffu;
    wr32(param_1 + 0xf4u, 0u);
    wr8(param_1 + 0xfcu, (u8)(r6 + 3u));
    a.r[0] = param_1 + 0xfdu;
    a.r[1] = 0u;
    a.r[2] = 1u;
    f1 = tc_callf(0x8000443cu, &a);
    if (r31 != 0u) {
        a.r[0] = param_1;
        a.r[1] = r31;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x64u), &a);
    }
    r4 = (u32)rd16(param_2 + 0x4eu);
    if (r4 >= 2u && rd32(param_1 + 0xd4u) != 0u) {
        r4 = (r4 >> 1u) & 0x7fffu;
        a.r[0] = param_1;
        a.r[1] = param_2 + rd32(param_2 + 0x58u);
        a.r[2] = 0u;
        a.r[3] = (r4 - 1u) & 0xffffu;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x70u), &a);
    }
    r5 = rd32(param_2 + 0x60u);
    f3 = (f64)rdf32(param_2 + 0x64u);
    f2 = (f64)rdf32(param_2 + 0x68u);
    r4 = (u32)rd8(param_2 + 0x54u);
    f1 = (f64)rdf32(param_2 + 0x6cu);
    f0 = (f64)rdf32(param_2 + 0x70u);
    r0 = (u32)rd16(param_2 + 0x52u);
    r3 = rd32((u32)param_3 + 4u);
    wr32(param_1 + 0xd8u, rd32(param_2 + 0x5cu));
    r0 = (r0 << 3u) & 0xfffffff8u;
    r6 = r3 + 0xcu;
    r3 = rd32((u32)param_3 + 0xcu);
    wr32(param_1 + 0xdcu, r5);
    wrf32d(param_1 + 0xe4u, f3);
    wrf32d(param_1 + 0xe8u, f2);
    wr8(param_1 + 0xfcu, (u8)r4);
    wrf32d(param_1 + 0xf0u, f1);
    wrf32d(param_1 + 0xecu, f0);
    r0 = rd32(r6 + r0);
    r31 = r6 + r0;
    a.r[0] = r3;
    a.r[1] = r31;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    r3 = tc_call(rd32(rd32(r3) + 0x10u), &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        wr32(param_1 + 0xe0u, r3);
    } else {
        r3 = rd32((u32)param_3 + 0xcu);
        a.r[0] = r3;
        a.r[1] = 0x666f6e74u;
        a.r[2] = r31;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
        r27 = r3;
        if (r3 != 0u) {
            a.r[0] = rd32(0x805474e0u);
            r3 = tc_call(0x8026d490u, &a);
            c0eq = r3 == 0u;
            if (!c0eq) {
                r31 = r3;
                if (!c0eq) {
                    a.r[0] = r3;
                    r3 = tc_call(0x802d7c18u, &a);
                    r31 = r3;
                }
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = r27;
                (void)tc_call(0x802d7cacu, &a);
                r0 = (u32)rd8(param_1 + 0xfdu);
                wr32(param_1 + 0xe0u, r31);
                r0 = r0 | 0x80u;
                wr8(param_1 + 0xfdu, (u8)r0);
            }
        }
    }
    a.r[0] = rd32(0x805474e0u);
    r3 = tc_call(0x8026d490u, &a);
    c0eq = r3 == 0u;
    if (!c0eq) {
        r5 = rd32((u32)param_3 + 8u);
        r4 = r5 + rd32(r5 + (((u32)rd16(param_2 + 0x50u) << 2u) & 0xfffffffcu) + 0xcu);
        if (!c0eq) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = (u32)param_3;
            r3 = tc_call(0x802cd8ccu, &a);
        }
        wr32(param_1 + 0x28u, r3);
    }
    return;
}
