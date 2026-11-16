#include "tc_rt.h"

void fn_802c2180(void)
{
    TcArgs a = {0};
    if (rd32(0x80547478u) != 0u) {
        (void)tc_call(0x802c220cu, &a);
        a.r[0] = rd32(rd32(0x80547478u) + 0x14348u);
        (void)tc_call(0x802450d8u, &a);
        a.r[0] = rd32(0x80547478u) + 0x14680u;
        a.r[1] = 8u;
        a.r[2] = 1u;
        (void)tc_call(0x8022cc50u, &a);
        a.r[0] = rd32(0x80547478u) + 0x14368u;
        a.r[1] = 0u;
        (void)tc_call(0x8022fa78u, &a);
        (void)tc_call(0x802ddba8u, &a);
        (void)tc_call(0x802dc1d0u, &a);
        (void)tc_call(0x802da9ecu, &a);
        wr32(0x80547478u, 0u);
    }
    return;
}
