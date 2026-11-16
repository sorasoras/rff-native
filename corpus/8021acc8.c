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

u32 fn_8021acc8(s32 param_1, s32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_3;
    (void)tc_call(0x8021a25cu, &a);
    wr32((u32)param_1 + 0x20u, rd32((u32)param_1 + 0x34u));
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x8021a6ecu, &a);
    wr32((u32)param_1 + 0x30u, r3);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x8021a72cu, &a);
    wr32((u32)param_1 + 0x34u, r3);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = (u32)param_1;
    a.r[2] = (u32)param_2;
    (void)tc_call(0x8021a908u, &a);
    r5 = rd32(0x817fdfccu);
    r0 = rd32(0x817fdfd0u);
    wr32(0x817fdfd4u, rd32(0x817fdfc8u));
    wr32(0x817fdfd8u, r5);
    f2 = (f64)rdf32(0x817fdfd4u);
    wr32(0x817fdfdcu, r0);
    f1 = (f64)rdf32(0x817fdfd8u);
    f0 = (f64)rdf32(0x817fdfdcu);
    wrf32d((u32)param_1 + 0x38u, f2);
    wrf32d((u32)param_1 + 0x3cu, f1);
    wrf32d((u32)param_1 + 0x40u, f0);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x8021a670u, &a);
    wr32((u32)param_1 + 0x44u, r3);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x8021aa50u, &a);
    r3 = r3 ^ 0x80000000u;
    wr32(0x817fdfe4u, r3);
    f1 = rdf64(0x80576a00u);
    wr32(0x817fdfe0u, 0x43300000u);
    f0 = (f64)(f32)(rdf64(0x817fdfe0u) - f1);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdfe8u, f0);
    wr32((u32)param_1 + 0x48u, rd32(0x817fdfecu));
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x8021a76cu, &a);
    wr32((u32)param_1 + 0x4cu, r3);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x8021a7e8u, &a);
    wr32((u32)param_1 + 0x50u, r3);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x8021a878u, &a);
    wr32((u32)param_1 + 0x54u, r3);
    r3 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
    r4 = rd32(r3 + 0x14u);
    if (r4 == 0xffffffffu) {
        wr8((u32)param_1 + (u32)param_2 + 2u, 1u);
    } else {
        r3 = rd32(r3 + 0x58u);
        r5 = r4 + 1u;
        if ((s32)r5 >= (s32)rd32(r3)) {
            wr8((u32)param_1 + (u32)param_2 + 2u, 1u);
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = r5;
            (void)tc_call(0x8021ab48u, &a);
        }
    }
    r3 = tc_call(0x80218620u, &a);
    r30 = r3;
    if ((u32)param_4 == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x68u);
        r3 = tc_call(0x80074e90u, &a);
        if (r3 != 0u || r30 == rd32((u32)param_1 + 0x34u)) {
            if (r30 == 0xffffffffu) {
                wr32((u32)param_1 + 0x6cu, 0u);
            } else {
                a.r[0] = r30;
                r3 = tc_call(0x80096df0u, &a);
                a.r[0] = r3;
                r3 = tc_call(0x8007d150u, &a);
                if (rd32(r3 + 4u) != 1u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 1u;
                    (void)tc_call(0x8021854cu, &a);
                } else {
                    wr32((u32)param_1 + 0x6cu, 0u);
                }
            }
            a.r[0] = rd32((u32)param_1 + 0x68u);
            r3 = tc_call(0x80074e90u, &a);
            if (r3 == 0u) {
                return 1u;
            }
            a.r[0] = rd32((u32)param_1 + 0x68u);
            r3 = tc_call(0x800a4500u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 0u) {
                return 1u;
            }
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            wrf32d((u32)param_1 + 0x24u, (f64)rdf32(r3));
            wrf32d((u32)param_1 + 0x28u, (f64)rdf32(r3 + 4u));
            wrf32d((u32)param_1 + 0x2cu, (f64)rdf32(r3 + 8u));
            return 1u;
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8021a3f0u, &a);
    wr32((u32)param_1 + 0x6cu, 0u);
    return 1u;
}
