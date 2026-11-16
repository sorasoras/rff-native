#include "tc_rt.h"

void fn_8004a74c(void)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x803c6262u) != 0u) {
        r30 = rd32(0x803c62a8u);
        a.r[0] = 0x803c6284u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x80252494u, &a);
        a.r[0] = 0x803c6284u;
        a.r[1] = 1u;
        a.r[2] = 1u;
        (void)tc_call(0x802524b0u, &a);
        a.r[0] = 0x803c6264u;
        r3 = tc_call(0x80049874u, &a);
        r29 = r3;
        a.r[0] = 0u;
        a.r[1] = 0xau;
        a.r[2] = 0x13u;
        r3 = tc_call(0x800499e4u, &a);
        a.r[0] = r30;
        a.r[1] = r3;
        a.r[2] = r29;
        a.r[3] = 4u;
        (void)tc_call(0x80253860u, &a);
        a.r[0] = r30;
        a.r[1] = rd32(0x803c62a4u);
        (void)tc_call(0x80253360u, &a);
    }
    return;
}
