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

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_802c355c(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    if ((u32)rd8(param_r3 + 0x94u) == 0u) {
        wr8(param_r3 + 0x94u, 1u);
        (void)tc_call(0x80278eacu, &a);
        r0 = (u32)rd8(param_r3 + 0x97u);
        wr8(param_r3 + 0x95u, 0u);
        r4 = 0x80540000u;
        f2 = (f64)rdf32(0x80348970u);
        wr8(param_r3 + 0x96u, 0u);
        f1 = (f64)rdf32(0x80348974u);
        wr8(param_r3 + 0x9au, 0u);
        wr8(param_r3 + 0x98u, 0u);
        wr32(param_r3 + 0x20cu, 0u);
        f0 = (f64)(f32)px_fdiv(f2, (f64)rdf32(rd32(rd32(0x80547490u) + 4u) + 0x30u));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfc8u, f0);
        wr32(param_r3 + 0x61cu, rd32(0x817fdfccu));
        f0 = (f64)(f32)px_fdiv(f1, (f64)rdf32(rd32(rd32(0x80547490u) + 4u) + 0x30u));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfd0u, f0);
        wr32(param_r3 + 0x620u, rd32(0x817fdfd4u));
        if (r0 != 0u) {
            a.r[0] = param_r3 + 0x634u;
            (void)tc_call(0x8024666cu, &a);
            a.r[0] = rd32(param_r3 + 0x794u);
            a.r[1] = rd32(param_r3 + 0x798u);
            (void)tc_call(0x80243e14u, &a);
            a.r[0] = rd32(param_r3 + 0x62cu);
            a.r[1] = rd32(param_r3 + 0x630u);
            (void)tc_call(0x80249734u, &a);
            a.r[0] = (u32)rd16(param_r3 + 0x624u);
            (void)tc_call(0x802449ecu, &a);
            a.r[0] = (u32)rd16(param_r3 + 0x626u);
            (void)tc_call(0x802449f4u, &a);
            a.r[0] = (u32)rd16(param_r3 + 0x628u);
            f1 = tc_callf(0x802449fcu, &a);
            r4 = tc_lastr4();
            f2 = 0.0;
            wr8(param_r3 + 0x97u, 0u);
        }
        wr32(param_r3 + 0x20u, 0u);
        wr32(param_r3 + 0x24u, 0u);
        wr32(param_r3 + 0x28u, 0u);
        wr32(param_r3 + 0x2cu, 0u);
        wr32(param_r3 + 0x30u, 0u);
        wr32(param_r3 + 0x34u, 0u);
        wr32(param_r3 + 0x38u, 0u);
        wr32(param_r3 + 0x3cu, 0u);
        wr32(param_r3 + 0x40u, 0u);
        wr32(param_r3 + 0x44u, 0u);
        wr32(param_r3 + 0x48u, 0u);
        wr32(param_r3 + 0x4cu, 0u);
        wr32(param_r3 + 0x50u, 0u);
        wr32(param_r3 + 0x54u, 0u);
        wr32(param_r3 + 0x14u, 0u);
        r3 = rd32(param_r3 + 0x250u);
        wr32(param_r3, 0u);
        wr8(param_r3 + 0x90u, 0u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
        r3 = rd32(param_r3 + 0x250u);
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(r3) + 0x38u), &a);
        r27 = 0x80398e28u;
        r28 = 0u;
        while ((s32)r28 < (s32)rd32(param_r3 + 0xcu)) {
            r3 = rd32(rd32(param_r3 + 0x238u) + 0x10u);
            a.r[0] = r3;
            a.r[1] = rd32(r27);
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
            f1 = tc_lastf();
            r4 = r3;
            r3 = rd32(param_r3 + 0x250u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x4cu), &a);
            f1 = tc_lastf();
            a.r[0] = r3;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            f1 = tc_callf(rd32(rd32(r3) + 0x50u), &a);
            r27 = r27 + 4u;
            r28 = r28 + 1u;
        }
        a.r[0] = param_r3;
        (void)tc_call(0x802c731cu, &a);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = rd32(param_r3 + 0x238u);
        f1 = tc_callf(0x802cd174u, &a);
        r3 = rd32(param_r3 + 0x238u);
        wrf32d(param_r3 + 0x28cu, (f64)rdf32(0x817fdfb8u));
        wrf32d(param_r3 + 0x290u, (f64)rdf32(0x817fdfbcu));
        wrf32d(param_r3 + 0x294u, (f64)rdf32(0x817fdfc0u));
        wrf32d(param_r3 + 0x298u, (f64)rdf32(0x817fdfc4u));
        a.r[0] = r3;
        a.r[1] = param_r3 + 0x258u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(r3) + 0x24u), &a);
        r27 = param_r3;
        r28 = 0u;
        do {
            r3 = rd32(r27 + 0x23cu);
            a.r[0] = r3;
            a.r[1] = param_r3 + 0x258u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            f1 = tc_callf(rd32(rd32(r3) + 0x24u), &a);
            r28 = r28 + 1u;
            r27 = r27 + 4u;
        } while ((s32)r28 < 4);
        r28 = 0u;
        do {
            r3 = rd32(param_r3 + 0x250u);
            f1 = (f64)rdf32(0x80348978u);
            a.r[0] = r3;
            a.r[1] = r28;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x30u), &a);
            r28 = r28 + 1u;
        } while ((s32)r28 < 8);
        f31 = (f64)rdf32(0x80348960u);
        r27 = param_r3;
        r26 = 0u;
        do {
            wr32(r27 + 0x58u, 0u);
            a.r[0] = rd32(r27 + 0x2acu);
            (void)tc_call(0x802c0c10u, &a);
            a.r[0] = rd32(r27 + 0x2acu);
            (void)tc_call(0x802c0bfcu, &a);
            (void)tc_call(0x802c0c34u, &a);
            a.r[0] = rd32(r27 + 0x2acu);
            (void)tc_call(0x802c10f8u, &a);
            a.r[0] = rd32(r27 + 0x2acu);
            (void)tc_call(0x802c0980u, &a);
            a.r[0] = rd32(r27 + 0x2acu);
            f1 = tc_callf(0x802c0d3cu, &a);
            wrf32d(r27 + 0x210u, f31);
            r26 = r26 + 1u;
            wrf32d(r27 + 0x220u, f31);
            r27 = r27 + 4u;
        } while ((s32)r26 < 4);
        r3 = rd32(rd32(param_r3 + 0x238u) + 0x10u);
        a.r[0] = r3;
        a.r[1] = rd32(0x80399690u);
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
        f1 = tc_lastf();
        r28 = 0x80399730u;
        r27 = 2u;
        wr8(r3 + 0xcfu, (u8)((u32)rd8(r3 + 0xcfu) & 0xfeu));
        do {
            r3 = rd32(rd32(param_r3 + 0x238u) + 0x10u);
            a.r[0] = r3;
            a.r[1] = rd32(r28);
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
            f1 = tc_lastf();
            r27 = r27 + 1u;
            r28 = r28 + 4u;
            wr8(r3 + 0xcfu, (u8)((u32)rd8(r3 + 0xcfu) & 0xfeu));
        } while ((s32)r27 < 7);
        r28 = 0x80399774u;
        r27 = 0u;
        do {
            r3 = rd32(rd32(param_r3 + 0x238u) + 0x10u);
            a.r[0] = r3;
            a.r[1] = rd32(r28);
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
            f1 = tc_lastf();
            r27 = r27 + 1u;
            r28 = r28 + 4u;
            wr8(r3 + 0xcfu, (u8)((u32)rd8(r3 + 0xcfu) & 0xfeu));
        } while ((s32)r27 < 3);
        a.r[0] = rd32(param_r3 + 0x2bcu);
        (void)tc_call(0x802c150cu, &a);
        a.r[0] = param_r3;
        a.r[1] = 0u;
        (void)tc_call(0x802c3f08u, &a);
        f0 = (f64)(f32)px_fdiv((f64)rdf32(0x8034897cu), (f64)rdf32(rd32(rd32(0x80547490u) + 4u) + 0x30u));
        wr8(param_r3 + 0x460u, 1u);
        wr32(param_r3 + 0x454u, 0u);
        wr32(param_r3 + 0x45cu, 0u);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfd0u, f0);
        wr32(param_r3 + 0x458u, rd32(0x817fdfd4u));
    }
    return;
}
