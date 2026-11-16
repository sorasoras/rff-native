#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80194ab8(u32 param_r3, u32 param_r4, u32 param_r6)
{
    u32 r4 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0;
    f0 = (f64)rdf32(0x805753e8u);
    f6 = (f64)rdf32(param_r3 + 0x94u);
    f4 = (f64)rdf32(0x805753ecu);
    f10 = rdf64(0x805753f8u);
    f9 = (f64)rdf32(param_r3 + 0x98u);
    f8 = (f64)rdf32(param_r3 + 0xa0u);
    f7 = ppc_fmadds((f64)(f32)(px_b2f((u64)((rd32(param_r3 + 0xb0u) - param_r4 - 1u) ^ 0x80000000u) | 0x4330000000000000ull) - f10), (f64)(f32)(f9 * f8), (f64)rdf32(param_r3 + 0x90u));
    f2 = ppc_fnmsubs((f64)rdf32(param_r3 + 0x9cu), (f64)rdf32(param_r3 + 0xa4u), f6);
    f1 = (f64)rdf32(0x80575404u);
    f3 = ppc_fmadds(f9, f8, f7);
    wrf32d(0xcc008000u, f3);
    wrf32d(0xcc008000u, f2);
    f5 = (f64)(f32)(f1 * (f64)(f32)(px_b2f((u64)(param_r6 ^ 0x80000000u) | 0x4330000000000000ull) - f10));
    r7 = (u32)rd8(param_r3 + 0xabu);
    r6 = (u32)rd8(param_r3 + 0xaau);
    f1 = (f64)(f32)(f1 + f5);
    r4 = (u32)rd8(param_r3 + 0xa9u);
    wr8(0xcc008000u, rd8(param_r3 + 0xa8u));
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r6);
    wr8(0xcc008000u, (u8)r7);
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f0);
    wrf32d(0xcc008000u, f3);
    wrf32d(0xcc008000u, f6);
    r7 = (u32)rd8(param_r3 + 0xabu);
    r6 = (u32)rd8(param_r3 + 0xaau);
    r4 = (u32)rd8(param_r3 + 0xa9u);
    wr8(0xcc008000u, rd8(param_r3 + 0xa8u));
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r6);
    wr8(0xcc008000u, (u8)r7);
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f4);
    wrf32d(0xcc008000u, f7);
    wrf32d(0xcc008000u, f2);
    r7 = (u32)rd8(param_r3 + 0xabu);
    r6 = (u32)rd8(param_r3 + 0xaau);
    r4 = (u32)rd8(param_r3 + 0xa9u);
    wr8(0xcc008000u, rd8(param_r3 + 0xa8u));
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r6);
    wr8(0xcc008000u, (u8)r7);
    wrf32d(0xcc008000u, f5);
    wrf32d(0xcc008000u, f0);
    wrf32d(0xcc008000u, f7);
    wrf32d(0xcc008000u, f6);
    r7 = (u32)rd8(param_r3 + 0xabu);
    r6 = (u32)rd8(param_r3 + 0xaau);
    r4 = (u32)rd8(param_r3 + 0xa9u);
    wr8(0xcc008000u, rd8(param_r3 + 0xa8u));
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r6);
    wr8(0xcc008000u, (u8)r7);
    wrf32d(0xcc008000u, f5);
    wrf32d(0xcc008000u, f4);
    return;
}
