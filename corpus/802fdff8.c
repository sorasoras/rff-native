#include "tc_rt.h"

void fn_802fdff8(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1;
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    if ((u32)rd8((u32)param_1 + 0xe8u) == 0u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    } else {
        if ((u32)rd8((u32)param_1 + 0xe9u) == 0u) {
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
        } else {
            if (rd32((u32)param_1 + 0xf8u) != 0u || (f64)rdf32((u32)param_1 + 0xfcu) > (f64)rdf32(0x805776b4u)) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x802fe368u, &a);
            } else {
                if ((u32)rd8((u32)param_1 + 0xeau) == 0u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 3u;
                    (void)tc_call(0x802fe104u, &a);
                }
            }
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d56cu, &a);
            r31 = 0u;
            do {
                if ((s32)r31 > 15) {
                    r3 = 0u;
                } else {
                    r3 = rd32(r30 + 0x11cu);
                }
                if (r3 != 0u) {
                    a.r[0] = r3;
                    (void)tc_call(0x802ff570u, &a);
                }
                r31 = r31 + 1u;
                r30 = r30 + 4u;
            } while ((s32)r31 < 16);
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
        }
    }
    return;
}
