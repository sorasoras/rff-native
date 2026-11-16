#include "tc_rt.h"

void fn_80242ce8(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r6 = 0, r10 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x805717a0u) != 1u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = rd32(0x80570b60u);
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        r3 = tc_call(0x80226610u, &a);
        f1 = tc_lastf();
        r6 = ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu);
        wr32(0x805717c8u, 0u);
        r10 = (r6 >> 0xfu) & 0x1ffffu;
        wr32(0x805717c0u, 0u);
        wr32(0x805717b8u, 0u);
        wr32(0x805717b0u, 0u);
        wr32(0x805717a8u, 0u);
        wr32(0x805717ccu, (ppc_mulhwu(0x10624dd3u, r10 * 0x7b24u) >> 9u) & 0x7fffffu);
        wr32(0x805717c4u, (ppc_mulhwu(0x10624dd3u, r10 * 0xa428u) >> 9u) & 0x7fffffu);
        wr32(0x805717bcu, (ppc_mulhwu(0x10624dd3u, r10 * 0xa410u) >> 9u) & 0x7fffffu);
        wr32(0x805717b4u, (ppc_mulhwu(0x10624dd3u, r10 * 0xf618u) >> 9u) & 0x7fffffu);
        wr32(0x805717acu, (ppc_mulhwu(0x10624dd3u, r10 * 0xbb8u) >> 9u) & 0x7fffffu);
        wr32(0xcd006c00u, rd32(0xcd006c00u) & 0xffffffeau);
        wr32(0xcd006c04u, 0u);
        wr32(0xcd006c0cu, 0u);
        wr32(0xcd006c00u, (rd32(0xcd006c00u) & 0xffffffdfu) | 0x20u);
        if ((((rd32(0xcd006c00u) >> 6u) & 1u) ^ 1u) != 0u) {
            wr32(0xcd006c00u, rd32(0xcd006c00u) & 0xffffffbfu);
            r3 = tc_call(0x8022c2b0u, &a);
            f1 = tc_lastf();
            r29 = r3;
            r3 = tc_call(0x80242f80u, &a);
            f1 = tc_lastf();
            wr32(0xcd006c00u, rd32(0xcd006c00u) | 0x40u);
            a.r[0] = r29;
            r3 = tc_call(0x8022c2d8u, &a);
            f1 = tc_lastf();
        }
        wr32(0x805717d8u, 0u);
        wr32(0x805717d4u, param_1);
        a.r[0] = 5u;
        a.r[1] = 0x80242e74u;
        r3 = tc_call(0x8022c2fcu, &a);
        f1 = tc_lastf();
        a.r[0] = 0x4000000u;
        r3 = tc_call(0x8022c6c0u, &a);
        f1 = tc_lastf();
        wr32(0x805717a0u, 1u);
    }
    return;
}
