#include "tc_rt.h"

void fn_80177aac(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    wr32((u32)param_1 + 0xe4u, 0u);
    r0 = (u32)rd8((u32)param_1 + 0x1a4u);
    wr32((u32)param_1 + 0xf0u, 0u);
    f2 = (f64)rdf32(0x80574fa4u);
    f1 = (f64)rdf32(0x80574fa8u);
    wrf32d((u32)param_1 + 0x100u, (f64)rdf32(0x804890c8u));
    f0 = (f64)rdf32(0x80574f90u);
    wrf32d((u32)param_1 + 0x104u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0x108u, (f64)rdf32(0x804890d0u));
    wrf32d((u32)param_1 + 0x10cu, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_1 + 0x110u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0x114u, (f64)rdf32(0x804890d0u));
    wrf32d((u32)param_1 + 0x118u, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_1 + 0x11cu, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0x120u, (f64)rdf32(0x804890d0u));
    wr32((u32)param_1 + 0x124u, 0u);
    wrf32d((u32)param_1 + 0x128u, f2);
    wrf32d((u32)param_1 + 0x12cu, f2);
    wrf32d((u32)param_1 + 0x130u, f2);
    wrf32d((u32)param_1 + 0x134u, f2);
    wrf32d((u32)param_1 + 0x138u, f2);
    wrf32d((u32)param_1 + 0x13cu, f1);
    wr16((u32)param_1 + 0x140u, 0u);
    wr16((u32)param_1 + 0x142u, 0u);
    wrf32d((u32)param_1 + 0x144u, f1);
    wrf32d((u32)param_1 + 0x15cu, f1);
    wrf32d((u32)param_1 + 0x168u, f1);
    wr32((u32)param_1 + 0x188u, 1u);
    wr32((u32)param_1 + 0x148u, 0u);
    wr32((u32)param_1 + 0x14cu, 0xffffffffu);
    wr32((u32)param_1 + 0x154u, 0xffffffffu);
    wr32((u32)param_1 + 0x158u, 0xffffffffu);
    wr32((u32)param_1 + 0x160u, 0xffffffffu);
    wr32((u32)param_1 + 0x164u, 0xffffffffu);
    wr32((u32)param_1 + 0x194u, 0u);
    wrf32d((u32)param_1 + 0x198u, f2);
    wr32((u32)param_1 + 0x19cu, 0u);
    wr8((u32)param_1 + 0x1a4u, (u8)(r0 & 0xffffff0fu));
    wr8((u32)param_1 + 0x1a5u, 0u);
    wr32((u32)param_1 + 0x150u, 0xffffffffu);
    wr32((u32)param_1 + 0x16cu, 0u);
    wr32((u32)param_1 + 0x170u, 0u);
    wrf32d((u32)param_1 + 0x174u, f0);
    wr32((u32)param_1 + 0x178u, 0x5au);
    wr32((u32)param_1 + 0x17cu, 1u);
    wr32((u32)param_1 + 0x180u, 0xffffffffu);
    wr32((u32)param_1 + 0x184u, 0xffffffffu);
    wr32((u32)param_1 + 0x18cu, 0xffffffffu);
    wr32((u32)param_1 + 0x190u, 0u);
    wr32((u32)param_1 + 0x1a0u, 0u);
    return;
}
