#include "tc_rt.h"

u32 fn_801f7264(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x24u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3 + 0x28u) + 0x2cu), &a);
    wr32((u32)param_1 + 0x28u, r3);
    r31 = r3;
    a.r[0] = rd32(rd32((u32)param_1 + 0x24u) + 0xc0u);
    a.r[1] = 0u;
    r3 = tc_call(0x801fa27cu, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xe4u;
        (void)tc_call(0x801e63e8u, &a);
    }
    a.r[0] = rd32(rd32((u32)param_1 + 0x24u) + 0xc0u);
    a.r[1] = 1u;
    r3 = tc_call(0x801fa27cu, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x158u;
        (void)tc_call(0x801e63e8u, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xecu;
    r3 = tc_call(0x801f1144u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xe4u;
        (void)tc_call(0x801e6438u, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x160u;
    r3 = tc_call(0x801f1144u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x158u;
        (void)tc_call(0x801e6438u, &a);
    }
    a.r[0] = rd32(rd32((u32)param_1 + 0x24u) + 0xc0u);
    r3 = tc_call(0x801fa2acu, &a);
    do {
        if (r3 == 0u) {
            a.r[0] = rd32(rd32((u32)param_1 + 0x24u) + 0xc0u);
            r3 = tc_call(0x801fa2ecu, &a);
            if (r3 == 0u) {
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x274u;
                a.r[1] = 0x1au;
                (void)tc_call(0x8020f18cu, &a);
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x274u;
                a.r[1] = 0u;
                (void)tc_call(0x8020f178u, &a);
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x274u;
                a.r[1] = 7u;
                (void)tc_call(0x8020f164u, &a);
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2acu;
                a.r[1] = 0x1au;
                (void)tc_call(0x8020f18cu, &a);
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2acu;
                a.r[1] = 5u;
                (void)tc_call(0x8020f178u, &a);
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2acu;
                a.r[1] = 0u;
                (void)tc_call(0x8020f164u, &a);
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2e4u;
                a.r[1] = 0x19u;
                (void)tc_call(0x8020f18cu, &a);
                break;
            }
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x274u;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2acu;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2e4u;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
    } while (0);
    if (r31 == 0u) {
        if (rd32(0x804df11cu) == rd32(0x804df120u)) {
            r3 = 0u;
            return r3;
        }
        r3 = tc_call(0x8012aafcu, &a);
        wr32(r3 + 0x3f0u, 1u);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
        a.r[1] = 2u;
        (void)tc_call(0x800f8544u, &a);
    }
    r3 = 1u;
    return r3;
}
