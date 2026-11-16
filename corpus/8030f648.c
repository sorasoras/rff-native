#include "tc_rt.h"

void fn_8030f648(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8)
{
    u32 r3 = 0, r4 = 0, r23 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    if ((u32)rd8(param_1 + 0xe8u) != 0u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        if ((u32)rd8(param_1 + 0xe9u) != 0u) {
            r23 = param_1;
            if (param_1 != 0u) {
                r23 = param_1 + 0xdcu;
            }
            r3 = tc_call(0x80306860u, &a);
            a.r[0] = r3;
            a.r[1] = r23;
            (void)tc_call(0x80306c94u, &a);
            wr8(param_1 + 0xe9u, 0u);
        }
        if ((u32)rd8(param_1 + 0xe8u) != 0u) {
            r23 = param_1;
            if (param_1 != 0u) {
                r23 = param_1 + 0xd0u;
            }
            r3 = tc_call(0x802f85a0u, &a);
            a.r[0] = r3;
            a.r[1] = r23;
            (void)tc_call(0x802f86b4u, &a);
            wr8(param_1 + 0xe8u, 0u);
        }
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        r4 = rd32(param_1 + 0x130u);
        r3 = 0u;
        if (r4 != 0u && (u32)rd8(r4 + 0x36u) != 0u) {
            r3 = 1u;
        }
        if (r3 != 0u) {
            a.r[0] = param_1;
            (void)tc_call(0x803100b4u, &a);
            a.r[0] = rd32(param_1 + 0x130u);
            (void)tc_call(0x802f8000u, &a);
        }
        r3 = rd32(param_1 + 0x130u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x802f8588u, &a);
        }
        wr32(param_1 + 0x130u, 0u);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    }
    a.r[0] = param_1;
    a.r[1] = param_6;
    a.r[2] = param_7;
    a.r[3] = param_8;
    (void)tc_call(0x8030f5a0u, &a);
    wr32(param_1 + 0x104u, param_2);
    r23 = param_1;
    wr32(param_1 + 0x108u, param_3);
    wr32(param_1 + 0x10cu, param_4);
    wr32(param_1 + 0x110u, param_5);
    if (param_1 != 0u) {
        r23 = param_1 + 0xd0u;
    }
    r3 = tc_call(0x802f85a0u, &a);
    a.r[0] = r3;
    a.r[1] = r23;
    (void)tc_call(0x802f8684u, &a);
    wr8(param_1 + 0xe8u, 1u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
