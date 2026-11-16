#include "tc_rt.h"

void fn_80250898(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x12u;
    a.r[1] = 0x80250750u;
    (void)tc_call(0x8022c2fcu, &a);
    a.r[0] = 0x13u;
    a.r[1] = 0x80250818u;
    (void)tc_call(0x8022c2fcu, &a);
    a.r[0] = 0x80571998u;
    (void)tc_call(0x8022efd4u, &a);
    a.r[0] = 0x2000u;
    (void)tc_call(0x8022c6c0u, &a);
    a.r[0] = 0x1000u;
    (void)tc_call(0x8022c6c0u, &a);
    r3 = rd32(0x80571958u);
    wr16(r3 + 0xau, (u16)((u32)rd16(r3 + 0xau) | 0xfu));
    return;
}
