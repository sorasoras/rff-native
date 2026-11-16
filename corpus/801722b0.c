#include "tc_rt.h"

void fn_801722b0(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r31 = 0;
    TcArgs a = {0};
    c0lt = param_2 < 6;
    if ((u32)param_2 == 6u) {
        if (rd32((u32)param_1 + 0x16f8u) != 3u) {
            r5 = rd32((u32)param_1 + 0x16f4u);
            r0 = 7u;
            r4 = r5 - 1u;
            if ((s32)r4 >= 0) {
                r0 = r4;
            }
            wr32((u32)param_1 + 0x16f4u, r0);
            for (;;) {
                r6 = rd32((u32)param_1 + 0x16f4u);
                if (rd32((u32)param_1 + ((rd32((u32)param_1 + 0x16f8u) << 2u) & 0xfffffffcu) + 0x1804u) > ((r6 << 3u) & 0xfffffff8u)) break;
                wr32((u32)param_1 + 0x16f4u, rd32((u32)param_1 + 0x16f4u) - 1u);
            }
            if (r6 != r5) {
                return;
            }
            wr8((u32)param_1 + 0x16f0u, 1u);
            return;
        }
        wr8((u32)param_1 + 0x16f0u, 1u);
        return;
    }
    if (!c0lt) {
        if (param_2 >= 8) {
            return;
        }
        r0 = rd32((u32)param_1 + 0x16f8u);
        if (r0 != 3u) {
            r6 = rd32((u32)param_1 + 0x16f4u);
            r0 = (r0 << 2u) & 0xfffffffcu;
            r4 = (u32)param_1 + r0;
            r5 = r6 + 1u;
            r0 = (r5 << 0x1du) & 0xe0000000u;
            r5 = (r5 >> 0x1fu) & 1u;
            r0 = r0 - r5;
            r0 = (r0 << 3u) | (r0 >> 0x1du);
            r0 = r0 + r5;
            wr32((u32)param_1 + 0x16f4u, r0);
            r0 = (r0 << 3u) & 0xfffffff8u;
            r4 = rd32(r4 + 0x1804u);
            if (r4 <= r0) {
                wr32((u32)param_1 + 0x16f4u, 0u);
            }
            if (rd32((u32)param_1 + 0x16f4u) != r6) {
                return;
            }
            wr8((u32)param_1 + 0x16f0u, 1u);
            return;
        }
        wr8((u32)param_1 + 0x16f0u, 1u);
        return;
    }
    c0lt = param_2 < 4;
    if ((u32)param_2 == 4u) {
        r31 = rd32((u32)param_1 + 0x16f8u);
        if (r31 != 3u) {
            r0 = r31 + 1u;
            wr32((u32)param_1 + 0x16f4u, 0u);
            wr32((u32)param_1 + 0x16f8u, r0);
            if ((s32)r0 > 3) {
                wr32((u32)param_1 + 0x16f8u, 0u);
            }
            if ((s32)rd32((u32)param_1 + 0x16f8u) >= 3) {
                a.r[0] = (u32)param_1;
                a.r[1] = 3u;
                a.r[2] = rd32((u32)param_1 + 0x16f4u);
                r3 = tc_call(0x80172618u, &a);
                if (r3 != 0u) {
                    wr32((u32)param_1 + 0x16f8u, 3u);
                    return;
                }
            }
            do {
                a.r[0] = (u32)param_1;
                a.r[1] = rd32((u32)param_1 + 0x16f8u);
                a.r[2] = rd32((u32)param_1 + 0x16f4u);
                r3 = tc_call(0x80172618u, &a);
                if (r3 != 0u) {
                    return;
                }
                r3 = rd32((u32)param_1 + 0x16f8u) + 1u;
                r0 = r3 & ~(u32)((u64)((r3 >> 0x1fu) & 1u) + 0xffffffffull + (u64)(r3 <= 3u));
                wr32((u32)param_1 + 0x16f8u, r0);
                if ((s32)r0 >= 3) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 3u;
                    a.r[2] = rd32((u32)param_1 + 0x16f4u);
                    r3 = tc_call(0x80172618u, &a);
                    if (r3 != 0u) {
                        wr32((u32)param_1 + 0x16f8u, 3u);
                        return;
                    }
                    r4 = rd32((u32)param_1 + 0x16f8u);
                    r3 = ppc_mulhw(1431655766, (s32)r4);
                    wr32((u32)param_1 + 0x16f8u, r4 - ((r3 + ((r3 >> 0x1fu) & 1u)) * 3u));
                }
            } while (rd32((u32)param_1 + 0x16f8u) != r31);
            return;
        }
        wr32((u32)param_1 + 0x16f8u, 0u);
        do {
            a.r[0] = (u32)param_1;
            a.r[1] = rd32((u32)param_1 + 0x16f8u);
            a.r[2] = rd32((u32)param_1 + 0x16f4u);
            r3 = tc_call(0x80172618u, &a);
            if (r3 != 0u) {
                return;
            }
            r0 = rd32((u32)param_1 + 0x16f8u) + 1u;
            wr32((u32)param_1 + 0x16f8u, r0);
        } while (r0 != 3u);
        return;
    }
    if (!c0lt) {
        r27 = rd32((u32)param_1 + 0x16f8u);
        if (r27 != 3u) {
            r0 = r27 - 1u;
            wr32((u32)param_1 + 0x16f4u, 0u);
            wr32((u32)param_1 + 0x16f8u, r0);
            if ((s32)r0 < 0) {
                wr32((u32)param_1 + 0x16f8u, 3u);
            }
            if ((s32)rd32((u32)param_1 + 0x16f8u) < 0) {
                a.r[0] = (u32)param_1;
                a.r[1] = 3u;
                a.r[2] = rd32((u32)param_1 + 0x16f4u);
                r3 = tc_call(0x80172618u, &a);
                if (r3 != 0u) {
                    wr32((u32)param_1 + 0x16f8u, 3u);
                    return;
                }
            }
            do {
                a.r[0] = (u32)param_1;
                a.r[1] = rd32((u32)param_1 + 0x16f8u);
                a.r[2] = rd32((u32)param_1 + 0x16f4u);
                r3 = tc_call(0x80172618u, &a);
                if (r3 != 0u) {
                    return;
                }
                r0 = rd32((u32)param_1 + 0x16f8u) - 1u;
                wr32((u32)param_1 + 0x16f8u, r0);
                if ((s32)r0 < 0) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 3u;
                    a.r[2] = rd32((u32)param_1 + 0x16f4u);
                    r3 = tc_call(0x80172618u, &a);
                    if (r3 != 0u) {
                        wr32((u32)param_1 + 0x16f8u, 3u);
                        return;
                    }
                    wr32((u32)param_1 + 0x16f8u, 2u);
                }
            } while (rd32((u32)param_1 + 0x16f8u) != r27);
            return;
        }
        wr32((u32)param_1 + 0x16f8u, 2u);
        do {
            a.r[0] = (u32)param_1;
            a.r[1] = rd32((u32)param_1 + 0x16f8u);
            a.r[2] = rd32((u32)param_1 + 0x16f4u);
            r3 = tc_call(0x80172618u, &a);
            if (r3 != 0u) {
                return;
            }
            r0 = rd32((u32)param_1 + 0x16f8u) - 1u;
            wr32((u32)param_1 + 0x16f8u, r0);
        } while ((s32)r0 >= 0);
        wr32((u32)param_1 + 0x16f8u, 3u);
        return;
    }
    return;
}
