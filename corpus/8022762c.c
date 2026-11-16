#include "tc_rt.h"

void fn_8022762c(void)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr16(0xcc00500au, 0x804u);
    wr16(0xcc005036u, (u16)((u32)rd16(0xcc005036u) & 0x7fffu));
    r0 = (u32)rd16(0xcc00500au);
    for (;;) {
        r0 = r0 & 0x400u;
        if (r0 == 0u) break;
        r0 = (u32)rd16(0xcc00500au);
    }
    r0 = (u32)rd16(0xcc00500au);
    for (;;) {
        r0 = r0 & 0x200u;
        if (r0 == 0u) break;
        r0 = (u32)rd16(0xcc00500au);
    }
    wr16(0xcc00500au, 0x8acu);
    wr16(0xcc005000u, 0u);
    do {
        r3 = (u32)rd16(0xcc005004u);
    } while (((((u32)rd16(0xcc005006u) & 0xffffu) | ((r3 << 0x10u) & 0xffff0000u)) & 0x80000000u) != 0u);
    r3 = tc_call(0x802302b4u, &a);
    f1 = tc_lastf();
    r31 = r3;
    do {
        r3 = tc_call(0x802302b4u, &a);
        f1 = tc_lastf();
    } while ((s32)(r3 - r31) < 44);
    wr16(0xcc00500au, (u16)((u32)rd16(0xcc00500au) | 1u));
    r0 = (u32)rd16(0xcc00500au);
    for (;;) {
        r0 = r0 & 1u;
        if (r0 == 0u) break;
        r0 = (u32)rd16(0xcc00500au);
    }
    return;
}
