#include "tc_rt.h"

void fn_80210c98(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = param_3;
    if (param_3 == 0xffffffffu) {
        if ((u32)param_2 == 0x2e8u) {
            return;
        }
        r5 = (u32)rd8(((((u32)param_2 - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e4au);
    }
    if ((u32)param_2 == 0x2e8u) {
        a.r[0] = (u32)param_1;
        a.r[1] = r5;
        (void)tc_call(0x80210da4u, &a);
    } else {
        if (param_2 >= 647 && param_2 <= 743) {
            r6 = (u32)param_1 + (r5 * 0xf8u);
            if ((u32)param_2 == rd32(r6 + 0x4fcu)) {
                return;
            }
            a.r[0] = (u32)param_1;
            a.r[1] = r6 + 0x488u;
            a.r[2] = (u32)param_2;
            a.r[3] = 1u;
            a.r[4] = 1u;
            (void)tc_call(0x800f31d8u, &a);
        } else {
            if (rd32((u32)param_1 + 0x1098u) != 0u) {
                r3 = (u32)param_1 + 0x1028u;
                a.r[0] = r3;
                a.r[1] = (u32)param_2;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = 0.0;
                f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
            }
            a.r[0] = (u32)param_1 + 0x1028u;
            a.r[1] = (u32)param_2;
            a.r[2] = 0x804890c8u;
            a.r[3] = 0x804890c8u;
            a.r[4] = 1u;
            a.r[5] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32((u32)param_1 + 0x1028u) + 0x48u), &a);
            a.r[0] = (u32)param_1 + 0x1028u;
            a.r[1] = (u32)param_1;
            a.r[2] = 0x15u;
            (void)tc_call(0x80070380u, &a);
        }
    }
    return;
}
