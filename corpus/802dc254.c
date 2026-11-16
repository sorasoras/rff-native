#include "tc_rt.h"

void fn_802dc254(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0;
    TcArgs a = {0};
    r7 = (u32)param_3 - 0x80000000u;
    wr32(param_1 + 4u, param_2 + rd32(param_2));
    wr32(param_1 + 8u, param_2 + rd32(param_2 + 4u));
    wr32(param_1 + 0xcu, param_2 + rd32(param_2 + 8u));
    wr32(param_1 + 0x10u, param_2 + rd32(param_2 + 0xcu));
    wr32(param_1 + 0x14u, param_2 + rd32(param_2 + 0x10u));
    r4 = param_2 + rd32(param_2 + 0x14u);
    wr32(param_1 + 0x1cu, (r7 >> 1u) & 0x7fffffffu);
    wr32(param_1 + 0x18u, r4);
    wr32(param_1 + 0x20u, r7);
    wr32(param_1 + 0x24u, (r7 << 1u) & 0xfffffffeu);
    wr32(param_1 + 0x68u, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x802dc4e0u, &a);
    wr32(param_1 + 0x400u, 0u);
    r3 = param_1;
    r5 = 0u;
    wr32(param_1 + 0x3fcu, param_1 + 0xfcu);
    wr32(param_1 + 0x404u, 0u);
    do {
        r4 = r3;
        ctr = 4u;
        do {
            wr32(r4 + 0x408u, 0u);
            wr32(r4 + 0x40cu, 0u);
            wr32(r4 + 0x410u, 0u);
            wr32(r4 + 0x414u, 0u);
            wr32(r4 + 0x418u, 0u);
            wr32(r4 + 0x41cu, 0u);
            wr32(r4 + 0x420u, 0u);
            wr32(r4 + 0x424u, 0u);
            wr32(r4 + 0x428u, 0u);
            wr32(r4 + 0x42cu, 0u);
            wr32(r4 + 0x430u, 0u);
            wr32(r4 + 0x434u, 0u);
            wr32(r4 + 0x438u, 0u);
            wr32(r4 + 0x43cu, 0u);
            wr32(r4 + 0x440u, 0u);
            wr32(r4 + 0x444u, 0u);
            wr32(r4 + 0x448u, 0u);
            wr32(r4 + 0x44cu, 0u);
            wr32(r4 + 0x450u, 0u);
            wr32(r4 + 0x454u, 0u);
            wr32(r4 + 0x458u, 0u);
            wr32(r4 + 0x45cu, 0u);
            wr32(r4 + 0x460u, 0u);
            wr32(r4 + 0x464u, 0u);
            wr32(r4 + 0x468u, 0u);
            wr32(r4 + 0x46cu, 0u);
            wr32(r4 + 0x470u, 0u);
            wr32(r4 + 0x474u, 0u);
            wr32(r4 + 0x478u, 0u);
            wr32(r4 + 0x47cu, 0u);
            wr32(r4 + 0x480u, 0u);
            wr32(r4 + 0x484u, 0u);
            r4 = r4 + 0x80u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        r5 = r5 + 1u;
        r3 = r3 + 0x200u;
    } while (r5 < 0x10u);
    r3 = tc_call(0x8022c2b0u, &a);
    r0 = rd32(0x80547c18u);
    if (r0 != 0u) {
        wr32(param_1, r0);
    } else {
        wr32(param_1, 0u);
    }
    wr32(0x80547c18u, param_1);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
