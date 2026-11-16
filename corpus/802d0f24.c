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

void fn_802d0f24(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r6 = (u32)rd8(param_r3 + 0xcfu);
    if ((r6 & 1u) != 0u || (((u32)rd8(param_r4 + 0x50u) >> 4u) & 1u) != 0u) {
        c0eq = (((u32)rd8(param_r4 + 0x50u) >> 5u) & 1u) == 0u;
        r0 = rd32(param_r3 + 0x48u);
        wr32(0x817fdf28u, rd32(param_r3 + 0x44u));
        wr32(0x817fdf2cu, r0);
        if (!c0eq && (r6 & 4u) != 0u) {
            f0 = (f64)(f32)((f64)rdf32(0x817fdf2cu) * (f64)rdf32(param_r4 + 0x48u));
            wrf32d(0x817fdf28u, (f64)(f32)((f64)rdf32(0x817fdf28u) * (f64)rdf32(param_r4 + 0x44u)));
            wrf32d(0x817fdf2cu, f0);
        }
        a.f[0] = (f64)rdf32(0x817fdf28u);
        a.f[1] = (f64)rdf32(0x817fdf2cu);
        a.f[2] = (f64)rdf32(0x80348a5cu);
        a.r[0] = 0x817fdf60u;
        (void)tc_call(0x80233d04u, &a);
        a.f[0] = (f64)(f32)((f64)rdf32(0x80348a60u) * (f64)rdf32(param_r3 + 0x38u));
        a.r[0] = 0x817fdf30u;
        a.r[1] = 0x78u;
        (void)tc_call(0x80233a2cu, &a);
        a.r[0] = 0x817fdf30u;
        a.r[1] = 0x817fdf60u;
        a.r[2] = 0x817fdf90u;
        (void)tc_call(0x802337a0u, &a);
        a.f[0] = (f64)(f32)((f64)rdf32(0x80348a60u) * (f64)rdf32(param_r3 + 0x3cu));
        a.r[0] = 0x817fdf30u;
        a.r[1] = 0x79u;
        (void)tc_call(0x80233a2cu, &a);
        a.r[0] = 0x817fdf30u;
        a.r[1] = 0x817fdf90u;
        a.r[2] = 0x817fdf60u;
        (void)tc_call(0x802337a0u, &a);
        a.f[0] = (f64)(f32)((f64)rdf32(0x80348a60u) * (f64)rdf32(param_r3 + 0x40u));
        a.r[0] = 0x817fdf30u;
        a.r[1] = 0x7au;
        (void)tc_call(0x80233a2cu, &a);
        a.r[0] = 0x817fdf30u;
        a.r[1] = 0x817fdf60u;
        a.r[2] = 0x817fdf90u;
        (void)tc_call(0x802337a0u, &a);
        a.f[0] = (f64)rdf32(param_r3 + 0x2cu);
        a.f[1] = (f64)rdf32(param_r3 + 0x30u);
        a.f[2] = (f64)rdf32(param_r3 + 0x34u);
        a.r[0] = 0x817fdf90u;
        a.r[1] = param_r3 + 0x54u;
        f1 = tc_callf(0x80233cb8u, &a);
        f2 = 0.0;
        r3 = rd32(param_r3 + 0xcu);
        if (r3 != 0u) {
            r3 = r3 + 0x84u;
            a.r[0] = r3;
            a.r[1] = param_r3 + 0x54u;
            a.r[2] = param_r3 + 0x84u;
            f1 = tc_callf(0x802337a0u, &a);
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
        } else {
            if ((((u32)rd8(param_r4 + 0x50u) >> 7u) & 1u) != 0u) {
                r12 = rd32(param_r3 + 0x58u);
                r11 = rd32(param_r3 + 0x5cu);
                r10 = rd32(param_r3 + 0x60u);
                r9 = rd32(param_r3 + 0x64u);
                r8 = rd32(param_r3 + 0x68u);
                r7 = rd32(param_r3 + 0x6cu);
                r6 = rd32(param_r3 + 0x70u);
                r5 = rd32(param_r3 + 0x74u);
                r4 = rd32(param_r3 + 0x78u);
                r3 = rd32(param_r3 + 0x7cu);
                r0 = rd32(param_r3 + 0x80u);
                wr32(param_r3 + 0x84u, rd32(param_r3 + 0x54u));
                wr32(param_r3 + 0x88u, r12);
                wr32(param_r3 + 0x8cu, r11);
                wr32(param_r3 + 0x90u, r10);
                wr32(param_r3 + 0x94u, r9);
                wr32(param_r3 + 0x98u, r8);
                wr32(param_r3 + 0x9cu, r7);
                wr32(param_r3 + 0xa0u, r6);
                wr32(param_r3 + 0xa4u, r5);
                wr32(param_r3 + 0xa8u, r4);
                wr32(param_r3 + 0xacu, r3);
                wr32(param_r3 + 0xb0u, r0);
            } else {
                a.r[0] = param_r4 + 4u;
                a.r[1] = param_r3 + 0x54u;
                a.r[2] = param_r3 + 0x84u;
                f1 = tc_callf(0x802337a0u, &a);
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                f2 = 0.0;
            }
        }
        if ((((u32)rd8(param_r4 + 0x50u) >> 6u) & 1u) != 0u && rd32(param_r3 + 0xcu) != 0u) {
            r3 = (u32)rd8(param_r3 + 0xcdu);
            wr32(0x817fdfc0u, 0x43300000u);
            f1 = rdf64(0x80348a68u);
            wr32(0x817fdfc4u, r3);
            f2 = (f64)rdf32(param_r4 + 0x4cu);
            f0 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfc0u) - f1) * f2);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfc8u, f0);
            wr8(param_r3 + 0xceu, (u8)rd32(0x817fdfccu));
        } else {
            wr8(param_r3 + 0xceu, rd8(param_r3 + 0xcdu));
        }
        r28 = 0u;
        f31 = (f64)rdf32(param_r4 + 0x4cu);
        r3 = ((u32)rd8(param_r4 + 0x50u) >> 6u) & 1u;
        r27 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        if (((u32)rd8(param_r3 + 0xcfu) & 2u) != 0u && (u32)rd8(param_r3 + 0xcdu) != 0xffu) {
            r28 = 1u;
        }
        if (r28 != 0u) {
            r0 = (u32)rd8(param_r4 + 0x50u);
            wr32(0x817fdfccu, (u32)rd8(param_r3 + 0xcdu));
            r0 = r0 | 0x40u;
            f2 = rdf64(0x80348a68u);
            wr32(0x817fdfc8u, 0x43300000u);
            f0 = (f64)rdf32(0x80348a64u);
            f1 = rdf64(0x817fdfc8u);
            wr8(param_r4 + 0x50u, (u8)r0);
            f1 = (f64)(f32)(f1 - f2);
            f1 = (f64)(f32)(f31 * f1);
            f0 = (f64)(f32)(f0 * f1);
            wrf32d(param_r4 + 0x4cu, f0);
        }
        r29 = param_r3 + 0x14u;
        r31 = rd32(r29);
        while (r31 != r29) {
            a.r[0] = r31 - 4u;
            a.r[1] = param_r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = 0.0;
            f1 = tc_callf(rd32(rd32(r31 - 4u) + 0x10u), &a);
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            r31 = rd32(r31);
        }
        if (r28 != 0u) {
            r0 = ((u32)rd8(param_r4 + 0x50u) & 0xffffffbfu) | ((r27 << 6u) & 0x40u);
            wrf32d(param_r4 + 0x4cu, f31);
            wr8(param_r4 + 0x50u, (u8)r0);
        }
    }
    return;
}
