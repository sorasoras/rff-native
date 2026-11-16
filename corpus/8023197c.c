#include "tc_rt.h"

s32 fn_8023197c(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    wr32(0x804e0f40u, 0x80231c34u);
    wr32(0x804e0f44u, 0x6eu);
    a.r[0] = 0x804e0f40u;
    (void)tc_call(0x8022d8b8u, &a);
    if ((s32)rd32(0x80570aa0u) < 0) {
        a.r[0] = 0x80386b78u;
        a.r[1] = 1u;
        r3 = tc_call(0x8026f5f8u, &a);
        wr32(0x80570aa0u, r3);
        if ((s32)r3 >= 0) {
            r31 = 0u;
        } else if (r3 != 0xfffffffau) {
            r31 = 0xffffffd6u;
        } else {
            r31 = 0xffffffe3u;
        }
    }
    wr32(0x80571568u, 5u);
    if (r31 == 0u) {
        r31 = 1u;
    }
    return (s32)r31;
}
