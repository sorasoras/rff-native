#include "tc_rt.h"

u32 fn_80273f34(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_2;
    a.r[1] = 0u;
    a.r[2] = 0x20u;
    (void)tc_call(0x8000443cu, &a);
    r4 = (u32)rd8(param_1);
    wr32((u32)param_2 + 0x14u, param_1 + 1u);
    r6 = r4 & 0xe0u;
    r0 = (r4 & 0x1fu) + 1u;
    c0lt = (s32)r6 < 128;
    r3 = param_1 + r0 + 1u;
    wr32((u32)param_2 + 0xcu, r0);
    wr32((u32)param_2 + 0x18u, r3);
    if (r6 == 0x80u) {
        wr32((u32)param_2 + 0x10u, 2u);
    } else if (!c0lt) {
        c0lt = (s32)r6 < 192;
        if (r6 == 0xc0u) {
            wr32((u32)param_2 + 0x10u, 8u);
        } else if (!c0lt) {
            if (r6 != 0xe0u) {
                r3 = rd32((u32)param_2 + 0x10u);
                r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
                return r3;
            }
            wr32((u32)param_2 + 0x10u, 1u);
        } else {
            if (r6 != 0xa0u) {
                r3 = rd32((u32)param_2 + 0x10u);
                r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
                return r3;
            }
            wr32((u32)param_2 + 0x10u, 4u);
        }
    } else {
        c0lt = (s32)r6 < 64;
        if (r6 == 0x40u) {
            r4 = (u32)rd8(r3);
            r0 = r3 + 1u;
            r3 = rd32((u32)param_2 + 0x1cu);
            r4 = r4 + 1u;
            wr32((u32)param_2 + 0x18u, r0);
            wr32((u32)param_2 + 0x10u, r4);
            wr32((u32)param_2 + 0x1cu, r3 + 1u);
        } else if (!c0lt) {
            if (r6 != 0x60u) {
                r3 = rd32((u32)param_2 + 0x10u);
                r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
                return r3;
            }
            wr32((u32)param_2 + 0x10u, 1u);
        } else {
            if (r6 != 0x20u) {
                r3 = rd32((u32)param_2 + 0x10u);
                r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
                return r3;
            }
            r0 = r3 + 2u;
            r4 = ((u32)rd8(r3 + 1u) & 0xffff00ffu) | (((u32)rd8(r3) << 8u) & 0xff00u);
            r3 = rd32((u32)param_2 + 0x1cu);
            r4 = r4 + 1u;
            wr32((u32)param_2 + 0x18u, r0);
            wr32((u32)param_2 + 0x10u, r4);
            wr32((u32)param_2 + 0x1cu, r3 + 2u);
        }
    }
    if (r6 == 0x40u || r6 == 0x20u) {
        wr8((u32)param_2 + 9u, 0x40u);
    } else {
        wr8((u32)param_2 + 8u, (u8)r6);
        a.r[0] = (u32)param_2;
        a.r[1] = rd32((u32)param_2 + 0x18u);
        a.r[2] = rd32((u32)param_2 + 0x10u);
        (void)tc_call(0x80004338u, &a);
    }
    wr32((u32)param_2 + 0x1cu, rd32((u32)param_2 + 0xcu) + rd32((u32)param_2 + 0x10u) + rd32((u32)param_2 + 0x1cu) + 1u);
    r3 = rd32((u32)param_2 + 0x10u);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
