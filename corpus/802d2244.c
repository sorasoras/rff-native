#include "tc_rt.h"

u32 fn_802d2244(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r4 = 0x80399eacu;
        c0eq = (((u32)rd8(param_1 + 0xfdu) >> 7u) & 1u) == 0u;
        wr32(param_1, 0x80399eacu);
        if (!c0eq) {
            r3 = rd32(param_1 + 0xe0u);
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(r3) + 8u), &a);
            a.r[0] = rd32(0x805474e0u);
            f1 = tc_callf(0x8026d4a0u, &a);
            r4 = tc_lastr4();
            wr8(param_1 + 0xfdu, (u8)((u32)rd8(param_1 + 0xfdu) & 0xffffff7fu));
        }
        wr32(param_1 + 0xe0u, 0u);
        f0 = (f64)rdf32(0x80348a80u);
        wrf32d(param_1 + 0xe4u, f0);
        wrf32d(param_1 + 0xe8u, f0);
        r3 = rd32(param_1 + 0x28u);
        if (r3 != 0u && (u32)rd8(r3 + 0x54u) == 0u) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 8u), &a);
            a.r[0] = rd32(0x805474e0u);
            f1 = tc_callf(0x8026d4a0u, &a);
            r4 = tc_lastr4();
            wr32(param_1 + 0x28u, 0u);
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x68u), &a);
        a.r[0] = param_1 + 0xd8u;
        a.r[1] = 0x802cb69cu;
        a.r[2] = 4u;
        a.r[3] = 2u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x802d0b00u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
