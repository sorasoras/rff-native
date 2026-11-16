#include "tc_rt.h"

void fn_80265474(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    TcArgs a = {0};
    if (rd32(0x80571a04u) == 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = rd32(0x80570c18u);
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x80226610u, &a);
        wr32(0x80500b50u, 0xffffffffu);
        wr32(0x80500b30u, 0xffffffffu);
        wr32(0x80500b10u, 0xffffffffu);
        wr32(0x80500af0u, 0xffffffffu);
        wr32(0x8038f2e4u, 0u);
        a.r[0] = 0u;
        (void)tc_call(0x802660d8u, &a);
        do {
        } while ((rd32(0xcd006434u) & 1u) != 0u);
        wr32(0xcd006434u, 0x80000000u);
        a.r[0] = 0x14u;
        a.r[1] = 0x80264f28u;
        (void)tc_call(0x8022c2fcu, &a);
        a.r[0] = 0x800u;
        (void)tc_call(0x8022c6c0u, &a);
        a.r[0] = 0u;
        (void)tc_call(0x80265e14u, &a);
        a.r[0] = 1u;
        (void)tc_call(0x80265e14u, &a);
        a.r[0] = 2u;
        (void)tc_call(0x80265e14u, &a);
        a.r[0] = 3u;
        (void)tc_call(0x80265e14u, &a);
        wr32(0x80571a04u, 1u);
    }
    return;
}
