#include "tc_rt.h"

void fn_802e6bb8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r27 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x802e42a8u, &a);
    wr32(param_1, 0x8039cdc8u);
    a.r[0] = param_1 + 0xdcu;
    a.r[1] = 0x802e6590u;
    a.r[2] = 0x800fe97cu;
    a.r[3] = 4u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    f0 = (f64)rdf32(0x80577488u);
    r31 = ((u32)rd16(param_2 + 0x4cu) >> 1u) & 0xffffu;
    wrf32d(param_1 + 0xe8u, f0);
    wrf32d(param_1 + 0xecu, f0);
    if (r31 != 0u) {
        r31 = (r31 - 1u) & 0xffffu;
    }
    f0 = (f64)rdf32(0x80577488u);
    r5 = ppc_mulhw(1431655766, (s32)rd8(param_1 + 0x100u));
    wr32(param_1 + 0xd8u, 0u);
    wr16(param_1 + 0xfcu, 0u);
    wr16(param_1 + 0xfeu, 0u);
    r0 = r5 + ((r5 >> 0x1fu) & 1u);
    r6 = r0 & 0xffu;
    wr32(param_1 + 0xe4u, 0u);
    r0 = (r0 << 2u) & 0x3fcu;
    r6 = r0 - r6;
    wrf32d(0x817fdfc8u, f0);
    r7 = (r6 + 1u) & 0xffu;
    wrf32d(0x817fdfccu, f0);
    r6 = ppc_mulhw(1431655766, (s32)r7);
    wrf32d(param_1 + 0xe8u, f0);
    wrf32d(param_1 + 0xecu, f0);
    wrf32d(param_1 + 0xf0u, f0);
    wrf32d(param_1 + 0xf4u, f0);
    wr32(param_1 + 0xf8u, 0u);
    r6 = (r7 - ((r6 + ((r6 >> 0x1fu) & 1u)) * 3u)) & 0xffu;
    wr8(param_1 + 0x100u, (u8)(r6 + 3u));
    a.r[0] = param_1 + 0x101u;
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
        f1 = tc_callf(rd32(rd32(param_1) + 0x74u), &a);
    }
    r4 = (u32)rd16(param_2 + 0x4eu);
    if (r4 >= 2u && rd32(param_1 + 0xd8u) != 0u) {
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
        (void)tc_call(rd32(rd32(param_1) + 0x80u), &a);
    }
    r6 = rd32(param_2 + 0x60u);
    f3 = (f64)rdf32(param_2 + 0x64u);
    f2 = (f64)rdf32(param_2 + 0x68u);
    r5 = (u32)rd8(param_2 + 0x54u);
    r4 = ((u32)rd8(param_1 + 0x101u) & 0xffffff9fu) | (((u32)rd8(param_2 + 0x55u) << 5u) & 0x60u);
    f1 = (f64)rdf32(param_2 + 0x6cu);
    f0 = (f64)rdf32(param_2 + 0x70u);
    r0 = (u32)rd16(param_2 + 0x52u);
    r3 = rd32(param_3 + 4u);
    wr32(param_1 + 0xdcu, rd32(param_2 + 0x5cu));
    r0 = (r0 << 3u) & 0xfffffff8u;
    r7 = r3 + 0xcu;
    r3 = rd32(param_3 + 0xcu);
    wr32(param_1 + 0xe0u, r6);
    wrf32d(param_1 + 0xe8u, f3);
    wrf32d(param_1 + 0xecu, f2);
    wr8(param_1 + 0x100u, (u8)r5);
    wr8(param_1 + 0x101u, (u8)r4);
    wrf32d(param_1 + 0xf4u, f1);
    wrf32d(param_1 + 0xf0u, f0);
    r0 = rd32(r7 + r0);
    r31 = r7 + r0;
    a.r[0] = r3;
    a.r[1] = r31;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    r3 = tc_call(rd32(rd32(r3) + 0x10u), &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = rd32(param_3 + 0xcu);
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
            a.r[0] = rd32(0x80571d40u);
            r3 = tc_call(0x8026d490u, &a);
            c0eq = r3 == 0u;
            if (c0eq) {
                r31 = 0u;
            } else {
                r31 = r3;
                if (!c0eq) {
                    a.r[0] = r3;
                    r3 = tc_call(0x802e0738u, &a);
                    r31 = r3;
                }
            }
            if (r31 != 0u) {
                a.r[0] = r31;
                a.r[1] = r27;
                (void)tc_call(0x802e07ccu, &a);
                r0 = (u32)rd8(param_1 + 0x101u);
                wr32(param_1 + 0xe4u, r31);
                r0 = r0 | 0x80u;
                wr8(param_1 + 0x101u, (u8)r0);
            }
        }
    } else {
        wr32(param_1 + 0xe4u, r3);
    }
    r7 = rd32(param_3 + 8u);
    r5 = rd32(param_3 + 4u);
    r6 = rd32(r7 + (((u32)rd16(param_2 + 0x50u) << 2u) & 0xfffffffcu) + 0xcu);
    r0 = rd32(param_3 + 0xcu);
    wr32(0x817fdfd0u, rd32(param_3));
    r27 = r7 + r6;
    r3 = rd32(0x80571d40u);
    wr32(0x817fdfd4u, r5);
    wr32(0x817fdfd8u, r7);
    wr32(0x817fdfdcu, r0);
    a.r[0] = r3;
    r3 = tc_call(0x8026d490u, &a);
    c0eq = r3 == 0u;
    if (c0eq) {
        r3 = 0u;
    } else if (!c0eq) {
        a.r[0] = r3;
        a.r[1] = r27;
        a.r[2] = 0x817fdfd0u;
        r3 = tc_call(0x802ead38u, &a);
    }
    wr32(param_1 + 0x28u, r3);
    return;
}
