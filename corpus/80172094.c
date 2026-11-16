#include "tc_rt.h"

u32 fn_80172094(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r27 = 0, r28 = 0;
    TcArgs a = {0};
    c0lt = param_2 < 5;
    r28 = rd32((u32)param_1 + 0x16f8u);
    if ((u32)param_2 == 5u) {
        if (r28 != 3u) {
            r27 = r28;
            r28 = r28 - 1u;
            if ((s32)r28 < 0) {
                r28 = 3u;
            }
            if ((s32)r28 < 0) {
                a.r[0] = (u32)param_1;
                a.r[1] = 3u;
                a.r[2] = 0u;
                r3 = tc_call(0x80172618u, &a);
                if (r3 != 0u) {
                    r28 = 3u;
                    r3 = r28;
                    return r3;
                }
            }
            for (;;) {
                a.r[0] = (u32)param_1;
                a.r[1] = r28;
                a.r[2] = 0u;
                r3 = tc_call(0x80172618u, &a);
                if (r3 != 0u) {
                    r3 = r28;
                    return r3;
                }
                r28 = r28 - 1u;
                if ((s32)r28 < 0) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 3u;
                    a.r[2] = 0u;
                    r3 = tc_call(0x80172618u, &a);
                    if (r3 != 0u) break;
                    r28 = 2u;
                }
                if (r28 == r27) {
                    r3 = r28;
                    return r3;
                }
            }
            r3 = 3u;
            return r3;
        }
        r28 = 2u;
        do {
            a.r[0] = (u32)param_1;
            a.r[1] = r28;
            a.r[2] = 0u;
            r3 = tc_call(0x80172618u, &a);
            if (r3 != 0u) {
                r3 = r28;
                return r3;
            }
            r28 = r28 - 1u;
        } while ((s32)r28 >= 0);
        r3 = 3u;
        return r3;
    }
    if (c0lt && param_2 >= 4) {
        if (r28 != 3u) {
            r27 = r28;
            r28 = r28 + 1u;
            if ((s32)r28 > 3) {
                r28 = 0u;
            }
            if ((s32)r28 >= 3) {
                a.r[0] = (u32)param_1;
                a.r[1] = 3u;
                a.r[2] = 0u;
                r3 = tc_call(0x80172618u, &a);
                if (r3 != 0u) {
                    r28 = 3u;
                    r3 = r28;
                    return r3;
                }
            }
            for (;;) {
                a.r[0] = (u32)param_1;
                a.r[1] = r28;
                a.r[2] = 0u;
                r3 = tc_call(0x80172618u, &a);
                if (r3 != 0u) {
                    r3 = r28;
                    return r3;
                }
                r3 = r28 + 1u;
                r28 = r3 & ~(u32)((u64)((r3 >> 0x1fu) & 1u) + 0xffffffffull + (u64)(r3 <= 3u));
                if ((s32)r28 >= 3) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 3u;
                    a.r[2] = 0u;
                    r3 = tc_call(0x80172618u, &a);
                    if (r3 != 0u) break;
                    r3 = ppc_mulhw(1431655766, (s32)r28);
                    r28 = r28 - ((r3 + ((r3 >> 0x1fu) & 1u)) * 3u);
                }
                if (r28 == r27) {
                    r3 = r28;
                    return r3;
                }
            }
            r3 = 3u;
            return r3;
        }
        r28 = 0u;
        do {
            a.r[0] = (u32)param_1;
            a.r[1] = r28;
            a.r[2] = 0u;
            r3 = tc_call(0x80172618u, &a);
            if (r3 != 0u) {
                r3 = r28;
                return r3;
            }
            r28 = r28 + 1u;
        } while ((s32)r28 <= 2);
        r3 = 3u;
        return r3;
    }
    r3 = r28;
    return r3;
}
