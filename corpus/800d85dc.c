#include "tc_rt.h"

void fn_800d85dc(void)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r3 = tc_call(0x80311554u, &a);
    r31 = r3;
    a.r[0] = 0x817fdfb8u;
    (void)tc_call(0x800d8c78u, &a);
    a.r[0] = 0x817fdfc8u;
    (void)tc_call(0x800d8bb8u, &a);
    r6 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    a.f[0] = (f64)rdf32(r6 + 0xe0u);
    a.f[1] = (f64)rdf32(r6 + 0xe4u);
    a.r[0] = r31;
    a.r[1] = 0x817fdfb8u;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x80311b74u, &a);
    r30 = 0u;
    do {
        a.r[0] = r31;
        a.r[1] = r30;
        a.r[2] = 0u;
        (void)tc_call(0x80311a50u, &a);
        r30 = r30 + 1u;
    } while ((s32)r30 < 2);
    r5 = 0x804b1df8u;
    r6 = 0u;
    ctr = 0x40u;
    do {
        r0 = rd32(r5 + 0x1cu);
        c0lt = (s32)r0 < -1;
        if (r0 == 0xffffffffu) {
            wr32(r5 + 0x1cu, 0xfffffffeu);
        } else if (c0lt && (s32)r0 >= -2) {
            wr32(r5 + 0x1cu, 0u);
        }
        r0 = rd32(r5 + 0x70u);
        c0lt = (s32)r0 < -1;
        if (r0 == 0xffffffffu) {
            wr32(r5 + 0x70u, 0xfffffffeu);
        } else if (c0lt && (s32)r0 >= -2) {
            wr32(r5 + 0x70u, 0u);
        }
        r0 = rd32(r5 + 0xc4u);
        c0lt = (s32)r0 < -1;
        if (r0 == 0xffffffffu) {
            wr32(r5 + 0xc4u, 0xfffffffeu);
        } else if (c0lt && (s32)r0 >= -2) {
            wr32(r5 + 0xc4u, 0u);
        }
        r0 = rd32(r5 + 0x118u);
        c0lt = (s32)r0 < -1;
        if (r0 == 0xffffffffu) {
            wr32(r5 + 0x118u, 0xfffffffeu);
        } else if (c0lt && (s32)r0 >= -2) {
            wr32(r5 + 0x118u, 0u);
        }
        r0 = rd32(r5 + 0x16cu);
        c0lt = (s32)r0 < -1;
        if (r0 == 0xffffffffu) {
            wr32(r5 + 0x16cu, 0xfffffffeu);
        } else if (c0lt && (s32)r0 >= -2) {
            wr32(r5 + 0x16cu, 0u);
        }
        r5 = r5 + 0x1a4u;
        r6 = r6 + 4u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
