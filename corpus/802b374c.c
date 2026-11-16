#include "tc_rt.h"

void fn_802b374c(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r6 = 0, r25 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    f1 = tc_lastf();
    r29 = r3;
    if (r3 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[1] = 6u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802b5264u, &a);
    } else {
        r30 = r3 + 0x11u;
        wr16(r3 + 4u, 9u);
        r31 = r30 + 3u;
        wr8(r3 + 0x11u, 2u);
        wr8(r30 + 1u, (u8)((s32)rd16(param_1 + 0x470u) >> 8));
        wr8(r30 + 2u, (u8)rd16(param_1 + 0x470u));
        r6 = rd32(param_1 + 0x410u);
        wr16(param_1 + 0x470u, (u16)((u32)rd16(param_1 + 0x470u) + 1u));
        a.r[0] = r31 + 2u;
        a.r[1] = (u32)rd16(r6 + 0xcu);
        a.r[2] = r6 + 0x10u;
        r3 = tc_call(0x802b3660u, &a);
        f1 = tc_lastf();
        r25 = r3 + 3u;
        wr8(r3, (u8)((s32)rd16(0x80545c4eu) >> 8));
        wr8(r3 + 1u, (u8)rd16(0x80545c4eu));
        wr8(r3 + 2u, (u8)param_2);
        if (param_2 != 0u && (u32)param_3 != 0u) {
            a.r[0] = r25;
            a.r[1] = (u32)param_3;
            a.r[2] = param_2;
            f1 = tc_callf(0x80004338u, &a);
            r25 = r25 + param_2;
        }
        r6 = r25 - r31 - 2u;
        wr8(r31, (u8)((r6 >> 8u) & 0xffu));
        wr8(r31 + 1u, (u8)r6);
        wr8(param_1 + 0x474u, 1u);
        wr16(r29 + 2u, (u16)(r25 - r30));
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)rd16(param_1 + 0x22u);
        a.r[1] = r29;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802a5e34u, &a);
        a.r[0] = param_1 + 8u;
        a.r[1] = 5u;
        a.r[2] = 0x1eu;
        (void)tc_call(0x8028d220u, &a);
    }
    return;
}
