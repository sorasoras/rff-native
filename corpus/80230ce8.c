#include "tc_rt.h"

s32 fn_80230ce8(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(0x80571524u) == 0u) {
        r3 = 0xfffffff6u;
    } else {
        r3 = tc_call(0x8022c2b0u, &a);
        if (rd32(0x80571534u) != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
        } else {
            wr32(0x80571534u, 1u);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            wr32(0x804e0ce0u, (((u32)param_1 << 7u) & 0xffffff80u) | param_3 | (((u32)param_2 << 3u) & 0xfffffff8u));
            r3 = rd32(0x80571528u);
            wr32(0x804e0ce4u, 0u);
            wr32(0x804e0ce8u, 0u);
            wr32(0x804e0cecu, 0u);
            wr32(0x804e0cf0u, 0u);
            wr32(0x804e0cf4u, 0xffffffffu);
            wr32(0x804e0cf8u, 0xffff0000u);
            wr32(0x804e0cfcu, 0u);
            a.r[0] = r3;
            a.r[1] = 0x5001u;
            a.r[2] = 0x804e0ce0u;
            a.r[3] = 0x20u;
            a.r[4] = 0x804e0d00u;
            a.r[5] = 0x20u;
            a.r[6] = 0x80230e58u;
            a.r[7] = 0u;
            r3 = tc_call(0x8026fd70u, &a);
            if (r3 != 0u) {
                return (s32)r3;
            }
            r3 = 1u;
        }
    }
    return (s32)r3;
}
