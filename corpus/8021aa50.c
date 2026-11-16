#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

s32 fn_8021aa50(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
    r5 = rd32(r4 + 0x58u);
    if (r5 != 0u) {
        r0 = rd32(r4 + 0x14u);
        if (r0 != 0xffffffffu) {
            r0 = (r0 << 3u) & 0xfffffff8u;
            r30 = r5 + r0;
            r31 = (u32)(s16)rd16(r30 + 0x14u);
            if (r31 != 0xffffffffu) {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x80218678u, &a);
                r3 = rd32(r3 + 0x3e4u);
                r31 = r3 + ((r31 << 4u) & 0xfffffff0u);
                r29 = (u32)(s8)rd8(r31 + 0xfu);
                if (r29 != 0xffffffffu) {
                    r30 = (u32)(s16)rd16(r30 + 0x12u);
                    if (r30 != 0xffffffffu) {
                        a.r[0] = (u32)param_1;
                        r3 = tc_call(0x80218678u, &a);
                        r30 = (r30 << 2u) & 0xfffffffcu;
                        r3 = r3 + r30;
                        r3 = rd32(r3 + 0x290u);
                        if ((s32)r29 < (s32)rd32(r3)) {
                            a.r[0] = (u32)param_1;
                            r3 = tc_call(0x80218678u, &a);
                            r3 = r3 + r30;
                            r3 = rd32(r3 + 0x290u);
                            r3 = r3 + (r29 * 0x14u);
                            f0 = (f64)rdf32(r3 + 0x10u);
                            f0 = px_ctiw(f0, ppc_fctiwz(f0));
                            r3 = (u32)px_f2b(f0);
                            return (s32)r3;
                        }
                    }
                }
                r3 = (u32)(s16)rd16(r31 + 8u);
                return (s32)r3;
            }
        }
    }
    r3 = 0u;
    return (s32)r3;
}
