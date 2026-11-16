#include "tc_rt.h"

void fn_80287938(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r28 = r3;
    a.r[0] = param_1;
    r3 = tc_call(0x80287bc4u, &a);
    r29 = r3;
    r4 = r3 + 0x46u;
    r3 = r3 + 0x40u;
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    (void)tc_call(0x8029006cu, &a);
    (void)tc_call(0x80289ba4u, &a);
    a.r[0] = r29;
    a.r[1] = 0x80391814u;
    a.r[2] = 0x10u;
    r3 = tc_call(0x802592d8u, &a);
    if (r3 == 0u) {
        wr16(0x817fdfe0u, 0xd9u);
        wr32(0x817fdfe4u, 0x80391650u);
        (void)tc_call(0x80289ba4u, &a);
        r0 = rd32(0x817fdfe4u);
        wr32(0x817fdfd8u, rd32(0x817fdfe0u));
        wr32(0x817fdfdcu, r0);
        a.r[0] = r29 + 0x40u;
        a.r[1] = (u32)rd16(r29 + 0x5eu);
        a.r[2] = (u32)rd8(r29 + 0x57u);
        a.r[3] = (u32)rd8(r29 + 0x58u);
        a.r[4] = 0x817fdfd8u;
        (void)tc_call(0x80292708u, &a);
    }
    r0 = (u32)rd8(r29 + 0x5bu);
    if ((r0 == 0u || r0 == 4u) || (r0 == 2u || r0 == 5u)) {
        wr8(0x8050f112u, (u8)((u32)rd8(0x8050f112u) + 1u));
    } else {
        wr8(0x8050f113u, (u8)((u32)rd8(0x8050f113u) + 1u));
    }
    a.r[0] = r28;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
