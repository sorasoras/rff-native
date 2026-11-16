#include "tc_rt.h"

void fn_80063d50(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((rd32(0x8057118cu) & 4u) != 0u) {
        if ((u32)((s32)((rd32(param_1 + 0x9cu) << 5u) & 0xc0000000u) >> 31) != 0u) {
            return;
        }
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            r31 = 0u;
            if (rd32(param_1 + 0xb8u) != 0u) {
                r28 = rd32(0x804863d8u);
                a.r[0] = r28;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r28) + 0x70u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 == 0u && (u32)((s32)((rd32(r28 + 0x9cu) << 5u) & 0xc0000000u) >> 31) == 0u) {
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = r28;
                    f1 = tc_callf(0x80063ef8u, &a);
                    r4 = tc_lastr4();
                }
            }
            r27 = rd32(0x8046b7e4u);
            while (r27 != 0u) {
                r3 = r27;
                r27 = rd32(r27);
                r28 = rd32(r3 + 8u);
                if (r28 != param_1 && (u32)((s32)rd32(r28 + 0x9cu) >> 31) != 0u) {
                    a.r[0] = r28;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r28) + 0x70u), &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 == 0u && (u32)((s32)((rd32(r28 + 0x9cu) << 5u) & 0xc0000000u) >> 31) == 0u) {
                        a.r[0] = param_1;
                        a.r[1] = param_2;
                        a.r[2] = r28;
                        r3 = tc_call(0x80063ef8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r31 = r31 | r3;
                    }
                }
            }
            r27 = rd32(0x8046ad74u);
            while (r27 != 0u) {
                r3 = r27;
                r27 = rd32(r27);
                r28 = rd32(r3 + 8u);
                if (r28 != param_1 && (u32)((s32)rd32(r28 + 0x9cu) >> 31) != 0u) {
                    a.r[0] = r28;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r28) + 0x70u), &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 == 0u && (u32)((s32)((rd32(r28 + 0x9cu) << 5u) & 0xc0000000u) >> 31) == 0u) {
                        a.r[0] = param_1;
                        a.r[1] = param_2;
                        a.r[2] = r28;
                        r3 = tc_call(0x80063ef8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r31 = r31 | r3;
                    }
                }
            }
        }
    }
    return;
}
