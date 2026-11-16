#include "tc_rt.h"

void fn_80139b74(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0, r4 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = 0u;
    r3 = tc_call(0x800f9458u, &a);
    wr32(param_1, r3);
    wr32(r3 + 0xd4u, 0u);
    a.r[0] = param_1 + 4u;
    a.r[1] = rd32(param_1);
    a.r[2] = 0x80571250u;
    f1 = tc_callf(0x80163f48u, &a);
    r3 = rd32(param_1);
    wr32(param_1 + 0xcu, 1u);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800fed0cu, &a);
    r3 = rd32(param_1);
    r4 = (u32)rd8(rd32(r3 + 0x10u) + 0xbbu) & 4u;
    r4 = (((0u - r4) | r4) >> 0x1fu) & 1u;
    a.r[0] = r3;
    a.r[1] = r4;
    (void)tc_call(0x80103564u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r29 + 0x1cu, param_1);
        wr32(r29, 0x80363bc8u);
    }
    a.r[0] = param_1 + 0x14u;
    a.r[1] = r29;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r29 + 0x1cu, param_1);
        wr32(r29, 0x80363ba4u);
    }
    a.r[0] = param_1 + 0x14u;
    a.r[1] = r29;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r29 + 0x1cu, param_1);
        wr32(r29, 0x80363b80u);
    }
    a.r[0] = param_1 + 0x14u;
    a.r[1] = r29;
    (void)tc_call(0x800f8658u, &a);
    if ((rd32(0x8049dfa4u) & ((((u32)param_4 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_4 & 0x1fu)))) != 0u) {
        a.r[0] = param_1 + 0x14u;
        a.r[1] = 0u;
        (void)tc_call(0x800f8348u, &a);
    } else {
        a.r[0] = param_1 + 0x14u;
        a.r[1] = 1u;
        (void)tc_call(0x800f8348u, &a);
    }
    wr32(param_1 + 0x50u, (u32)param_4);
    a.r[0] = param_1;
    (void)tc_call(0x80139d00u, &a);
    return;
}
