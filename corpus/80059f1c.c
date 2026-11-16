#include "tc_rt.h"

void fn_80059f1c(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r3 = tc_call(0x8023029cu, &a);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0x817fdfd8u;
    (void)tc_call(0x802304e8u, &a);
    a.r[0] = rd32(0x817fdff8u) + (((rd32(0x817fdffcu) << 0x10u) & 0xffff0000u) + rd32(0x817fdfd8u));
    (void)tc_call(0x80040ca0u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8003a994u, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffu;
    (void)tc_call(0x80044e78u, &a);
    a.r[0] = 2u;
    (void)tc_call(0x8003c9b0u, &a);
    return;
}
