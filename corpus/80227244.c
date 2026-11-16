#include "tc_rt.h"

void fn_80227244(s32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0xcd800180u, ((rd32(0xcd800180u) & 0xfffffeffu) | (((u32)param_1 << 8u) & 0xffffff00u)) & 0xffffff7fu);
    wr32(0xcd8001d0u, rd32(0xcd8001d0u) & 0x3fffffffu);
    r3 = tc_call(0x802302b4u, &a);
    f1 = tc_lastf();
    r28 = r3;
    do {
        r3 = tc_call(0x802302b4u, &a);
        f1 = tc_lastf();
        r3 = r3 - r28;
        r3 = (r3 << 3u) & 0xfffffff8u;
    } while (ppc_divwu(r3, (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu) < 0x64u);
    if ((u32)param_1 == 0u) {
        wr32(0xcd8001ccu, (((rd32(0xcd8001ccu) & 0xfffc003fu) | 0xfc0u) & 0xf803ffc0u) | 0x4640000u);
    } else {
        wr32(0xcd8001ccu, (((((rd32(0xcd8001ccu) & 0xfffc003fu) | 0xffc0u) & 0xffffffc0u) | 0xeu) & 0xf803ffffu) | 0x4b00000u);
    }
    r3 = tc_call(0x802302b4u, &a);
    f1 = tc_lastf();
    r31 = r3;
    do {
        r3 = tc_call(0x802302b4u, &a);
        f1 = tc_lastf();
        r3 = r3 - r31;
        r3 = (r3 << 3u) & 0xfffffff8u;
    } while (ppc_divwu(r3, (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu) < 0x64u);
    wr32(0xcd8001d0u, rd32(0xcd8001d0u) & 0xefffffffu);
    r3 = tc_call(0x802302b4u, &a);
    f1 = tc_lastf();
    r31 = r3;
    do {
        r3 = tc_call(0x802302b4u, &a);
        f1 = tc_lastf();
        r3 = r3 - r31;
        r3 = (r3 << 3u) & 0xfffffff8u;
    } while (ppc_divwu(r3, (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu) < 0x3e8u);
    wr32(0xcd8001d0u, (rd32(0xcd8001d0u) & 0xbfffffffu) | 0x40000000u);
    r3 = tc_call(0x802302b4u, &a);
    f1 = tc_lastf();
    r31 = r3;
    do {
        r3 = tc_call(0x802302b4u, &a);
        f1 = tc_lastf();
        r3 = r3 - r31;
        r3 = (r3 << 3u) & 0xfffffff8u;
    } while (ppc_divwu(r3, (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu) < 0x3e8u);
    wr32(0xcd8001d0u, (rd32(0xcd8001d0u) & 0x7fffffffu) | 0x80000000u);
    r3 = tc_call(0x802302b4u, &a);
    f1 = tc_lastf();
    r29 = r3;
    do {
        r3 = tc_call(0x802302b4u, &a);
        f1 = tc_lastf();
        r3 = r3 - r29;
        r3 = (r3 << 3u) & 0xfffffff8u;
    } while (ppc_divwu(r3, (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu) < 0x3e8u);
    return;
}
