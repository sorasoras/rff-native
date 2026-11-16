#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

u32 fn_80213f64(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    c0lt = (s32)rd32(param_1 + 4u) < 0;
    wr8(param_1 + 0x28u, (u8)((u32)rd8(param_1 + 0x28u) & 0xffffff7fu));
    if (!c0lt) {
        wr32(param_1 + 0x50u, rd32(param_1 + 0x50u) + rd32(param_1 + 0x54u));
    }
    wr32(param_1 + 0x54u, 0u);
    wr32(param_1 + 0x4cu, ((u32)rd8(0x80492824u) * 0x708u) + ((u32)rd8(0x80492826u) + ((u32)rd8(0x80492825u) * 0x1eu)));
    for (;;) {
        r28 = 0u;
        r3 = rd32(param_1 + 0x4dcu);
        r0 = rd32(param_1 + 4u) + 1u;
        wr32(param_1 + 4u, r0);
        if (r0 == rd32(r3)) {
            a.r[0] = param_1;
            a.r[1] = 9u;
            a.r[2] = 1u;
            (void)tc_call(0x80213504u, &a);
            r3 = 0u;
            wr8(param_1, 0u);
            return r3;
        }
        r0 = r0 * 0x14u;
        r29 = r3 + r0;
        r3 = rd32(r29 + 0x14u);
        if (r3 != 0xffffffffu) {
            a.r[0] = r3;
            r3 = tc_call(0x8014d8acu, &a);
            if (r3 == 0u) {
                r28 = 1u;
                wr32(param_1 + 0x54u, rd32(param_1 + 0x54u) + rd32(r29 + 0xcu));
                if (r28 == 1u) continue;
                break;
            }
        }
        r3 = rd32(r29 + 0x10u);
        if (r3 == 0xffffffffu) {
            if (r28 != 1u) break;
        } else {
            a.r[0] = r3;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 0u) {
                if (r28 != 1u) break;
            } else {
                r28 = 1u;
                wr32(param_1 + 0x54u, rd32(param_1 + 0x54u) + rd32(r29 + 0xcu));
                if (r28 != 1u) break;
            }
        }
    }
    if ((u32)param_2 == 0u) {
        r3 = param_1 + 0x104u;
        r0 = rd32(param_1 + 8u);
        r31 = rd32(param_1 + 0x4dcu) + (rd32(param_1 + 4u) * 0x14u);
        r4 = rd32(r31 + 4u);
        r5 = rd32(r3 + ((r4 << 2u) & 0xfffffffcu) + 0x290u) + (rd32(r31 + 8u) * 0x14u);
        f5 = (f64)rdf32(r5 + 0xcu);
        f4 = (f64)rdf32(r5 + 8u);
        f3 = (f64)rdf32(r5 + 4u);
        if (r0 == r4) {
            f2 = (f64)rdf32(param_1 + 0x18u);
            f1 = (f64)rdf32(param_1 + 0x1cu);
            f0 = (f64)rdf32(param_1 + 0x20u);
            wr32(param_1 + 0x30u, r4);
            wr32(param_1 + 0x2cu, r4);
            wrf32d(param_1 + 0xcu, f2);
            wrf32d(param_1 + 0x10u, f1);
            wrf32d(param_1 + 0x14u, f0);
            wrf32d(param_1 + 0x34u, f2);
            wrf32d(param_1 + 0x38u, f1);
            wrf32d(param_1 + 0x3cu, f0);
            wrf32d(param_1 + 0x40u, f3);
            wrf32d(param_1 + 0x44u, f4);
            wrf32d(param_1 + 0x48u, f5);
        } else if (r0 != 0xffffffffu) {
            wr32(param_1 + 0x2cu, r0);
            f2 = (f64)rdf32(param_1 + 0x18u);
            f1 = (f64)rdf32(param_1 + 0x1cu);
            f0 = (f64)rdf32(param_1 + 0x20u);
            wr32(param_1 + 0x30u, rd32(r31 + 4u));
            wrf32d(param_1 + 0x34u, f2);
            wrf32d(param_1 + 0x38u, f1);
            wrf32d(param_1 + 0x3cu, f0);
            wrf32d(param_1 + 0x40u, f3);
            wrf32d(param_1 + 0x44u, f4);
            wrf32d(param_1 + 0x48u, f5);
        } else {
            wr32(param_1 + 8u, r4);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0xffffffffu;
            r3 = tc_call(0x80215bc4u, &a);
            f2 = (f64)px_w2f(ppc_single_bits(f3));
            f1 = (f64)px_w2f(ppc_single_bits(f4));
            f0 = (f64)px_w2f(ppc_single_bits(f5));
            r3 = rd32(param_1 + 0x104u + ((rd32(param_1 + 8u) << 2u) & 0xfffffffcu)) + (r3 * 0xcu);
            f5 = (f64)rdf32(r3 + 4u);
            wrf32d(param_1 + 0xcu, f5);
            f4 = (f64)rdf32(r3 + 8u);
            wrf32d(param_1 + 0x10u, f4);
            f3 = (f64)rdf32(r3 + 0xcu);
            wrf32d(param_1 + 0x14u, f3);
            r0 = rd32(r31 + 4u);
            wr32(param_1 + 0x30u, r0);
            wr32(param_1 + 0x2cu, r0);
            wrf32d(param_1 + 0x34u, f5);
            wrf32d(param_1 + 0x38u, f4);
            wrf32d(param_1 + 0x3cu, f3);
            wrf32d(param_1 + 0x40u, f2);
            wrf32d(param_1 + 0x44u, f1);
            wrf32d(param_1 + 0x48u, f0);
        }
        r3 = 1u;
        wr32(param_1 + 0x54u, rd32(param_1 + 0x54u) + rd32(r31 + 0xcu));
        return r3;
    }
    wr8(param_1 + 0x28u, (u8)((u32)rd8(param_1 + 0x28u) | 0x80u));
    a.r[0] = param_1;
    (void)tc_call(0x80214facu, &a);
    r3 = 1u;
    return r3;
}
