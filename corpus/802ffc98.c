#include "tc_rt.h"

void fn_802ffc98(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    c0lt = param_2 < 2;
    if ((u32)param_2 == 2u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802ff570u, &a);
        r31 = rd32((u32)param_1 + 0xf0u);
        while (r31 != 0u) {
            if ((u32)rd8(r31 + 0x36u) != 0u) {
                a.r[0] = r31;
                (void)tc_call(0x802f8000u, &a);
            }
            r31 = rd32(r31 + 0xf0u);
        }
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        r31 = rd32((u32)param_1 + 0xf0u);
        while (r31 != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x802f8588u, &a);
            r31 = rd32(r31 + 0xf0u);
        }
        wr32((u32)param_1 + 0xf0u, 0u);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        wr8((u32)param_1 + 0x7cu, 1u);
    } else if (!c0lt) {
        if (param_2 < 4) {
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d56cu, &a);
            r31 = rd32((u32)param_1 + 0xf0u);
            while (r31 != 0u) {
                a.r[0] = r31;
                (void)tc_call(0x802f8588u, &a);
                a.r[0] = r31;
                (void)tc_call(0x802f80dcu, &a);
                r31 = rd32(r31 + 0xf0u);
            }
            wr32((u32)param_1 + 0xf0u, 0u);
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
            wr8((u32)param_1 + 0x7cu, 1u);
        }
    } else {
        c0lt = param_2 < 0;
        if ((u32)param_2 == 0u) {
            wr8((u32)param_1 + 0x7cu, 0u);
        } else if (!c0lt) {
            wr8((u32)param_1 + 0x7cu, 1u);
        }
    }
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
