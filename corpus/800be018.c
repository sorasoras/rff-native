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

void fn_800be018(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80572dc4u);
    r4 = 0u;
    f0 = (f64)rdf32((u32)param_1 + 0x1db4u);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr8(0x817fdfebu, (u8)px_f2b(f0));
    ctr = 3u;
    do {
        if (f1 == (f64)rdf32((u32)param_1 + 0x1db4u)) {
            f0 = (f64)rdf32((u32)param_1 + r4 + 0x191cu);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wr8(0x817fdfebu, (u8)px_f2b(f0));
        }
        r7 = (u32)param_1 + r4;
        r4 = r4 + 0x248u;
        wr8(r7 + 0x1724u, 0xffu);
        wr8(r7 + 0x1725u, 0xffu);
        r0 = (u32)rd8(0x817fdfebu);
        wr8(r7 + 0x1726u, 0xffu);
        wr8(r7 + 0x1727u, (u8)r0);
        wr8(r7 + 0x1728u, 0xffu);
        wr8(r7 + 0x1729u, 0xffu);
        wr8(r7 + 0x172au, 0xffu);
        wr8(r7 + 0x172bu, (u8)r0);
        wr8(r7 + 0x172cu, 0xffu);
        wr8(r7 + 0x172du, 0xffu);
        wr8(r7 + 0x172eu, 0xffu);
        wr8(r7 + 0x172fu, (u8)r0);
        wr8(r7 + 0x1730u, 0xffu);
        wr8(r7 + 0x1731u, 0xffu);
        wr8(r7 + 0x1732u, 0xffu);
        wr8(r7 + 0x1733u, (u8)r0);
        wr8(r7 + 0x17b4u, 0xffu);
        wr8(r7 + 0x17b5u, 0xffu);
        wr8(r7 + 0x17b6u, 0xffu);
        wr8(r7 + 0x17b7u, (u8)r0);
        wr8(r7 + 0x17b8u, 0xffu);
        wr8(r7 + 0x17b9u, 0xffu);
        wr8(r7 + 0x17bau, 0xffu);
        wr8(r7 + 0x17bbu, (u8)r0);
        wr8(r7 + 0x17bcu, 0xffu);
        wr8(r7 + 0x17bdu, 0xffu);
        wr8(r7 + 0x17beu, 0xffu);
        wr8(r7 + 0x17bfu, (u8)r0);
        wr8(r7 + 0x17c0u, 0xffu);
        wr8(r7 + 0x17c1u, 0xffu);
        wr8(r7 + 0x17c2u, 0xffu);
        wr8(r7 + 0x17c3u, (u8)r0);
        wr8(r7 + 0x1844u, 0xffu);
        wr8(r7 + 0x1845u, 0xffu);
        wr8(r7 + 0x1846u, 0xffu);
        wr8(r7 + 0x1847u, (u8)r0);
        wr8(r7 + 0x1848u, 0xffu);
        wr8(r7 + 0x1849u, 0xffu);
        wr8(r7 + 0x184au, 0xffu);
        wr8(r7 + 0x184bu, (u8)r0);
        wr8(r7 + 0x184cu, 0xffu);
        wr8(r7 + 0x184du, 0xffu);
        wr8(r7 + 0x184eu, 0xffu);
        wr8(r7 + 0x184fu, (u8)r0);
        wr8(r7 + 0x1850u, 0xffu);
        wr8(r7 + 0x1851u, 0xffu);
        wr8(r7 + 0x1852u, 0xffu);
        wr8(r7 + 0x1853u, (u8)r0);
        wr8(r7 + 0x18d4u, 0xffu);
        wr8(r7 + 0x18d5u, 0xffu);
        wr8(r7 + 0x18d6u, 0xffu);
        wr8(r7 + 0x18d7u, (u8)r0);
        wr8(r7 + 0x18d8u, 0xffu);
        wr8(r7 + 0x18d9u, 0xffu);
        wr8(r7 + 0x18dau, 0xffu);
        wr8(r7 + 0x18dbu, (u8)r0);
        wr8(r7 + 0x18dcu, 0xffu);
        wr8(r7 + 0x18ddu, 0xffu);
        wr8(r7 + 0x18deu, 0xffu);
        wr8(r7 + 0x18dfu, (u8)r0);
        wr8(r7 + 0x18e0u, 0xffu);
        wr8(r7 + 0x18e1u, 0xffu);
        wr8(r7 + 0x18e2u, 0xffu);
        wr8(r7 + 0x18e3u, (u8)r0);
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if ((s32)rd32((u32)param_1 + 0x1918u) >= 3) {
        a.r[0] = (u32)param_1 + 0x16d8u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1700u, 1u);
        a.r[0] = (u32)param_1 + 0x1768u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1790u, 1u);
        a.r[0] = (u32)param_1 + 0x17f8u;
        (void)tc_call(0x8005250cu, &a);
        r0 = rd32((u32)param_1 + 0x1918u);
        wr32((u32)param_1 + 0x1820u, 1u);
        if (r0 == 0x15u && rd32(rd32(0x805711ccu) + 0xfcu) == 1u && ((ppc_cntlzw((u32)rd8(0x8049e134u) - 1u) >> 5u) & 0x7ffffffu) != 0u) {
            a.r[0] = (u32)param_1 + 0x1888u;
            (void)tc_call(0x8005250cu, &a);
            wr32((u32)param_1 + 0x18b0u, 1u);
        }
    }
    if ((s32)rd32((u32)param_1 + 0x1b60u) >= 3) {
        a.r[0] = (u32)param_1 + 0x1920u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1948u, 1u);
        a.r[0] = (u32)param_1 + 0x19b0u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x19d8u, 1u);
        a.r[0] = (u32)param_1 + 0x1a40u;
        (void)tc_call(0x8005250cu, &a);
        r0 = rd32((u32)param_1 + 0x1b60u);
        wr32((u32)param_1 + 0x1a68u, 1u);
        if (r0 != 0x1au || rd32(rd32(0x805711ccu) + 0xfcu) != 1u || ((ppc_cntlzw((u32)rd8(0x8049e134u) - 1u) >> 5u) & 0x7ffffffu) == 0u) {
            r0 = rd32((u32)param_1 + 0x1b60u);
            if (r0 == 0x20u || r0 == 8u) {
                a.r[0] = (u32)param_1 + 0x1ad0u;
                (void)tc_call(0x8005250cu, &a);
                wr32((u32)param_1 + 0x1af8u, 1u);
            }
        } else {
            a.r[0] = (u32)param_1 + 0x1ad0u;
            (void)tc_call(0x8005250cu, &a);
            wr32((u32)param_1 + 0x1af8u, 1u);
        }
    }
    if ((s32)rd32((u32)param_1 + 0x1da8u) >= 3) {
        a.r[0] = (u32)param_1 + 0x1b68u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1b90u, 1u);
        a.r[0] = (u32)param_1 + 0x1bf8u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1c20u, 1u);
        a.r[0] = (u32)param_1 + 0x1c88u;
        (void)tc_call(0x8005250cu, &a);
        r0 = rd32((u32)param_1 + 0x1da8u);
        wr32((u32)param_1 + 0x1cb0u, 1u);
        if (r0 == 0x1bu) {
            a.r[0] = (u32)param_1 + 0x1d18u;
            (void)tc_call(0x8005250cu, &a);
            wr32((u32)param_1 + 0x1d40u, 1u);
        }
    }
    r3 = tc_call(0x80059e38u, &a);
    if (r3 != 0u) {
        f1 = rdf64(0x80572dd8u) + (f64)rdf32((u32)param_1 + 0x1db4u);
        if (!(f1 < rdf64(0x80572dd0u))) {
            wrf32d((u32)param_1 + 0x1db4u, (f64)rdf32(0x80572dc4u));
        } else {
            wrf32d((u32)param_1 + 0x1db4u, (f64)(f32)f1);
        }
    }
    return;
}
