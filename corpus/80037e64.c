#include "tc_rt.h"

s32 fn_80037e64(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ca = 0, r0 = 0, r3 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r20 = 0, r23 = 0, r25 = 0, r26 = 0, r27 = 0;
    u32 r28 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdef0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r23 = param_2;
    r26 = 1u;
    r25 = 0u;
    r28 = 0u;
    r27 = rd32(param_1) + 0x10u;
    for (;;) {
        r3 = rd32(param_1);
        if ((s32)r28 >= (s32)rd32(r3 + 8u)) break;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = 0x817fdf00u;
        a.r[1] = rd32(r3 + 0xcu);
        a.r[2] = r28;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        (void)tc_call(0x800379a8u, &a);
        a.r[0] = r27;
        a.r[1] = 0x817fdf00u;
        r3 = tc_call(0x80037a90u, &a);
        wr32(r27, r3);
        if (r3 != 0u && r3 != 0xfffffff4u) {
            return (s32)r3;
        }
        if (r3 == 0xfffffff4u) {
            r0 = rd32(rd32(param_1) + 4u) + 0x3fffu;
            ca = ((s32)r0 < 0) && ((r0 & 0x3fffu) != 0u);
            r0 = (u32)((s32)r0 >> 14);
            a.r[0] = 0u;
            a.r[1] = 0x817fdef8u;
            a.r[2] = (u32)((u64)r0 + (u64)ca) * r26;
            a.r[3] = r26;
            r3 = tc_call(0x80037a2cu, &a);
            f1 = tc_lastf();
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            if (r3 == 0u) {
                if (rd32(0x817fdef8u) != 0u) {
                    wr8(r23, 0xfeu);
                } else {
                    wr8(r23, 0u);
                }
            }
            r26 = r26 + 1u;
        } else {
            wr8(r23, 1u);
            r25 = 1u;
            a.r[0] = r27;
            a.r[1] = 0x817fdf40u;
            a.r[2] = 0x817fdf00u;
            a.r[3] = 3u;
            r3 = tc_call(0x80037ba0u, &a);
            f1 = tc_lastf();
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            if (r3 == 0u) {
                r0 = rd32(rd32(param_1) + 4u) + 0x1fu;
                ca = ((s32)r0 < 0) && ((r0 & 0x1fu) != 0u);
                r0 = (u32)((s32)r0 >> 5);
                a.r[0] = 0u;
                a.r[1] = ((u32)((u64)r0 + (u64)ca) << 5u) & 0xffffffe0u;
                a.r[2] = 0x4e4f5320u;
                a.r[3] = 0x80570650u;
                r3 = tc_call(0x80040cd8u, &a);
                r20 = r3;
                a.r[0] = r27;
                a.r[1] = 0x817fdf40u;
                a.r[2] = r3;
                a.r[3] = rd32(rd32(param_1) + 4u);
                r3 = tc_call(0x80037d9cu, &a);
                if (r3 != 0u) {
                    r0 = rd32(r27);
                    if (r0 == 0xfffffff1u || r0 == 0xfffffffbu || r0 == 0xffffffc0u) {
                        wr8(r23, 0xffu);
                    }
                }
                a.r[0] = 0u;
                a.r[1] = r20;
                a.r[2] = 0x4e4f5320u;
                a.r[3] = 0x80570650u;
                (void)tc_call(0x80040e98u, &a);
                a.r[0] = 0x817fdf40u;
                f1 = tc_callf(0x80037cdcu, &a);
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
            }
        }
        r28 = r28 + 1u;
        r23 = r23 + 1u;
    }
    if (r25 != 0u && rd32(r27) == 0xfffffff4u) {
        wr32(r27, 0u);
    }
    r3 = rd32(r27);
    return (s32)r3;
}
