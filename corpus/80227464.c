#include "tc_rt.h"

void fn_80227464(void)
{
    u32 r0 = 0, r3 = tc_argr(0u), r5 = tc_argr(2u), r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    if (rd32(0x80571448u) == 0u) {
        a.r[0] = 1u;
        r3 = tc_call(0x80227244u, &a);
        f1 = tc_lastf();
    }
    r3 = tc_call(0x802271c0u, &a);
    f1 = tc_lastf();
    r3 = r3 - 0x80u;
    a.r[0] = r3;
    a.r[1] = 0x81000000u;
    a.r[2] = 0x80u;
    r3 = tc_call(0x80004338u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x81000000u;
    a.r[1] = 0x803794e0u;
    a.r[2] = 0x80u;
    r3 = tc_call(0x80004338u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x81000000u;
    a.r[1] = 0x80u;
    r3 = tc_call(0x80227738u, &a);
    f1 = tc_lastf();
    wr16(0xcc005012u, 0x43u);
    wr16(0xcc00500au, 0x8acu);
    wr16(0xcc00500au, (u16)((u32)rd16(0xcc00500au) | 1u));
    do {
    } while (((u32)rd16(0xcc00500au) & 1u) != 0u);
    wr16(0xcc005000u, 0u);
    do {
        r3 = (u32)rd16(0xcc005004u);
    } while (((((u32)rd16(0xcc005006u) & 0xffffu) | ((r3 << 0x10u) & 0xffff0000u)) & 0x80000000u) != 0u);
    wr32(0xcc005020u, 0x1000000u);
    wr32(0xcc005024u, 0u);
    wr32(0xcc005028u, 0x20u);
    r5 = (u32)rd16(0xcc00500au);
    while ((r5 & 0x20u) == 0u) {
        r5 = (u32)rd16(0xcc00500au);
    }
    wr16(0xcc00500au, (u16)r5);
    r3 = tc_call(0x802302b4u, &a);
    f1 = tc_lastf();
    r31 = r3;
    do {
        r3 = tc_call(0x802302b4u, &a);
        f1 = tc_lastf();
    } while ((s32)(r3 - r31) < 2194);
    wr32(0xcc005020u, 0x1000000u);
    wr32(0xcc005024u, 0u);
    wr32(0xcc005028u, 0x20u);
    r5 = (u32)rd16(0xcc00500au);
    while ((r5 & 0x20u) == 0u) {
        r5 = (u32)rd16(0xcc00500au);
    }
    wr16(0xcc00500au, (u16)r5);
    wr16(0xcc00500au, (u16)((u32)rd16(0xcc00500au) & 0xfffff7ffu));
    do {
    } while (((u32)rd16(0xcc00500au) & 0x400u) != 0u);
    wr16(0xcc00500au, (u16)((u32)rd16(0xcc00500au) & 0xfffffffbu));
    r0 = (u32)rd16(0xcc005004u);
    for (;;) {
        r0 = r0 & 0x8000u;
        if (r0 != 0u) break;
        r0 = (u32)rd16(0xcc005004u);
    }
    r3 = (u32)rd16(0xcc005006u);
    wr16(0xcc00500au, (u16)((u32)rd16(0xcc00500au) | 4u));
    wr16(0xcc00500au, 0x8acu);
    wr16(0xcc00500au, (u16)((u32)rd16(0xcc00500au) | 1u));
    do {
    } while (((u32)rd16(0xcc00500au) & 1u) != 0u);
    r3 = tc_call(0x802271c0u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x81000000u;
    a.r[1] = r3 - 0x80u;
    a.r[2] = 0x80u;
    r3 = tc_call(0x80004338u, &a);
    f1 = tc_lastf();
    return;
}
