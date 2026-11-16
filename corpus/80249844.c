#include "tc_rt.h"

void fn_80249844(void)
{
    u32 r3 = 0, r25 = 0, r26 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x802431e0u, &a);
    if (r3 != 0u && rd32(0x8057191cu) == 0u) {
        r3 = tc_call(0x802465c0u, &a);
        wr32(0x80571920u, r3);
        r25 = 0u;
        wr32(0x80571918u, 0x804fbc80u);
        r26 = 0u;
        wr32(0x80571928u, 0x804fe680u);
        while (r25 < rd32(0x80571920u)) {
            wr32(rd32(0x80571918u) + r26, 0u);
            r3 = rd32(0x80571918u) + r26;
            wr32(r3 + 4u, 0x50000000u);
            wr32(r3 + 8u, 0u);
            wr32(r3 + 0xcu, 0xfffffc40u);
            wr32(r3 + 0x10u, 0xfffffc40u);
            wr32(r3 + 0x14u, 0xfffffc40u);
            wr32(r3 + 0x20u, 0u);
            wr32(r3 + 0x18u, 0x40u);
            wr32(r3 + 0x1cu, 0x7fu);
            wr16(r3 + 0x6cu, 0u);
            wr16(r3 + 0x68u, 0u);
            wr16(r3 + 0x64u, 0u);
            wr16(r3 + 0x60u, 0u);
            wr16(r3 + 0x5cu, 0u);
            wr16(r3 + 0x58u, 0u);
            wr16(r3 + 0x54u, 0u);
            wr16(r3 + 0x50u, 0u);
            wr16(r3 + 0x4cu, 0u);
            wr16(r3 + 0x48u, 0u);
            wr16(r3 + 0x44u, 0u);
            wr16(r3 + 0x40u, 0u);
            wr16(r3 + 0x3cu, 0u);
            a.r[0] = r3;
            (void)tc_call(0x80249754u, &a);
            a.r[0] = r25;
            (void)tc_call(0x8024cb3cu, &a);
            r26 = r26 + 0x70u;
            r25 = r25 + 1u;
        }
        wr32(0x80571924u, 1u);
        wr32(0x8057191cu, 1u);
    }
    return;
}
