#include "tc_rt.h"

s32 fn_8026da78(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, c1eq = 0, r0 = 0, r5 = 0, r6 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    c1eq = (u32)param_1 == 0u;
    if (param_1 >= 0) {
        r0 = rd32((u32)param_2 + 0x108u);
        c0lt = (s32)r0 < 3;
        if (r0 == 3u) {
            if (c1eq) {
                r5 = ((u32)param_2 + 0x5fu) & 0xffffffe0u;
                wr32(rd32((u32)param_2 + 0x10cu), rd32(r5));
                wr16(rd32((u32)param_2 + 0x110u), rd16(r5 + 4u));
                wr32(rd32((u32)param_2 + 0x114u), (u32)rd8(r5 + 0x49u));
                wr32(rd32((u32)param_2 + 0x118u), (u32)rd8(r5 + 0x46u));
                wr32(rd32((u32)param_2 + 0x11cu), (u32)rd8(r5 + 0x47u));
                wr32(rd32((u32)param_2 + 0x120u), (u32)rd8(r5 + 0x48u));
            }
        } else if (!c0lt) {
            c0lt = (s32)r0 < 5;
            if (r0 == 5u) {
                if (c1eq) {
                    a.r[0] = rd32((u32)param_2 + 0x10cu);
                    a.r[1] = (u32)param_2;
                    a.r[2] = 8u;
                    f1 = tc_callf(0x80004338u, &a);
                    r5 = 0u;
                    r6 = 0u;
                }
            } else if (c0lt && c1eq) {
                r6 = ((((u32)param_2 + 0x3fu) & 0xffffffe0u) + 0x5fu) & 0xffffffe0u;
                r5 = rd32(r6);
                r6 = (r6 + 0x23u) & 0xffffffe0u;
                wr32(rd32((u32)param_2 + 0x10cu), r5);
                wr32(rd32((u32)param_2 + 0x110u), rd32(r6));
            }
        } else {
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                if (c1eq) {
                    a.r[0] = rd32((u32)param_2 + 0x10cu);
                    a.r[1] = (u32)param_2;
                    a.r[2] = 0x1cu;
                    f1 = tc_callf(0x80004338u, &a);
                    r5 = 0u;
                    r6 = 0u;
                }
            } else if (!c0lt && c1eq) {
                wr32(rd32((u32)param_2 + 0x10cu), rd32(((((u32)param_2 + 0x3fu) & 0xffffffe0u) + 0x5fu) & 0xffffffe0u));
            }
        }
    }
    wr32(0x80571a60u, 0u);
    r12 = rd32((u32)param_2 + 0x100u);
    if (r12 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_2 + 0x104u);
        a.r[2] = r5;
        a.r[3] = r6;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    if ((u32)param_2 != 0u) {
        a.r[0] = rd32(0x80571a6cu);
        a.r[1] = (u32)param_2;
        (void)tc_call(0x80270908u, &a);
    }
    return param_1;
}
