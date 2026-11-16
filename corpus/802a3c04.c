#include "tc_rt.h"

void fn_802a3c04(u32 param_1, u32 param_2, s32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r26 = 0, r27 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r5 = (u32)param_3;
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
    r6 = 0x80540618u;
    r0 = (u32)((s32)ppc_mulhw(1321528399, (s32)(param_2 + 0x7fabf9e8u)) >> 4);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r30 = r0 & 0xffu;
    if ((u32)param_3 == 0u && (u32)rd8(param_2 + 0x10u) == 6u) {
        if ((u32)rd8(0x80540a19u) >= 4u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0x1e0003u;
            a.r[1] = 0x80395348u;
            a.r[2] = (u32)param_3;
            a.r[3] = 0x80540618u;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            f1 = tc_callf(0x8028cc54u, &a);
            r6 = 0u;
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
        wr16(param_2 + 0x1au, 0u);
        r26 = (r30 * 0x34u) - 0x7fabf9e8u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = 0x13u;
        a.r[1] = r26 + 1u;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        r3 = tc_call(0x802a57a0u, &a);
        f1 = tc_lastf();
        r5 = 0u;
        r6 = 0u;
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
        wr16(param_2 + 0x16u, (u16)r3);
        if ((r3 & 0xffffu) == 0u) {
            if ((u32)rd8(0x80540a19u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x1e0001u;
                a.r[1] = 0x80395368u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x8028cc54u, &a);
            }
            if ((u32)rd8(0x80540a19u) >= 4u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x1e0003u;
                a.r[1] = 0x8039520cu;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x8028cc54u, &a);
            }
            if ((u32)rd16(r26 + 0x14u) != 0u || (u32)rd16(r26 + 0x16u) != 0u) {
                wr8(r26 + 0x10u, 5u);
                r3 = (u32)rd16(r26 + 0x16u);
                if (r3 != 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r3;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x802a5cecu, &a);
                }
                r3 = (u32)rd16(r26 + 0x14u);
                if (r3 != 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r3;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x802a5cecu, &a);
                }
            } else {
                wr8(r26 + 0x10u, 0u);
            }
            a.r[0] = r30;
            a.r[1] = 1u;
            a.r[2] = 0x200u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            (void)tc_call(rd32(0x80540958u), &a);
            return;
        }
        wr8(param_2 + 0x10u, 2u);
    }
    if ((u32)param_3 != 0u && (u32)rd8(param_2 + 0x10u) == 6u) {
        wr16(param_2 + 0x1au, 0xfu);
        r27 = (r30 * 0x34u) - 0x7fabf9e8u;
        if ((u32)rd8(0x80540a19u) >= 4u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x1e0003u;
            a.r[1] = 0x8039520cu;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x8028cc54u, &a);
            r6 = 0u;
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
        if ((u32)rd16(r27 + 0x14u) != 0u || (u32)rd16(r27 + 0x16u) != 0u) {
            wr8(r27 + 0x10u, 5u);
            r3 = (u32)rd16(r27 + 0x16u);
            if (r3 != 0u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = r3;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                f1 = tc_callf(0x802a5cecu, &a);
                r6 = 0u;
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
            r3 = (u32)rd16(r27 + 0x14u);
            if (r3 != 0u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = r3;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                (void)tc_call(0x802a5cecu, &a);
            }
        } else {
            wr8(r27 + 0x10u, 0u);
        }
    }
    return;
}
