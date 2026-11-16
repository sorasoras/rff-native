#include "tc_rt.h"

void fn_8024ed84(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = rd32(0x80576c88u);
    r28 = r3;
    r0 = rd32(r29 + 8u) & 0xfffffffeu;
    wr32(r29 + 8u, r0);
    wr16(rd32(0x80571954u) + 2u, (u16)r0);
    r0 = rd32(r29 + 8u) & 0xfffffff3u;
    wr32(r29 + 8u, r0);
    wr16(rd32(0x80571954u) + 2u, (u16)r0);
    if (param_r3 == 0u) {
        wr8(0x80571979u, 0u);
        wr8(0x80571990u, 0u);
        r0 = rd32(r29 + 8u) & 0xffffffefu;
        wr32(r29 + 8u, r0);
        wr16(rd32(0x80571954u) + 2u, (u16)r0);
        wr8(0x805006a1u, 0u);
        wr8(0x805006a2u, 0u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        r6 = rd32(param_r3);
        r0 = rd32(param_r3 + 4u);
        r4 = rd32(0x80571954u);
        wr32(0x80500680u, r6);
        wr32(0x80500684u, r0);
        r0 = rd32(param_r3 + 0xcu);
        wr32(0x80500688u, rd32(param_r3 + 8u));
        wr32(0x8050068cu, r0);
        r0 = rd32(param_r3 + 0x14u);
        wr32(0x80500690u, rd32(param_r3 + 0x10u));
        wr32(0x80500694u, r0);
        r0 = rd32(param_r3 + 0x1cu);
        wr32(0x80500698u, rd32(param_r3 + 0x18u));
        wr32(0x8050069cu, r0);
        wr32(0x805006a0u, rd32(param_r3 + 0x20u));
        wr8(0x80571979u, 1u);
        wr8(0x805006a2u, 1u);
        wr16(r4 + 0x20u, (u16)r6);
        wr16(rd32(0x80571954u) + 0x24u, (u16)rd32(0x80500684u));
        wr16(rd32(0x80571954u) + 0x30u, (u16)rd32(0x8050069cu));
        wr16(rd32(0x80571954u) + 0x34u, (u16)rd32(0x80500698u));
        wr16(rd32(0x80571954u) + 0x38u, (u16)rd32(0x80500694u));
        wr16(rd32(0x80571954u) + 0x28u, (u16)rd32(0x8050068cu));
        wr16(rd32(0x80571954u) + 0x2cu, (u16)rd32(0x80500690u));
        wr16(rd32(0x80571954u) + 0x22u, (u16)((rd32(0x80500680u) >> 0x10u) & 0x3fffu));
        wr16(rd32(0x80571954u) + 0x26u, (u16)((rd32(0x80500684u) >> 0x10u) & 0x3fffu));
        wr16(rd32(0x80571954u) + 0x32u, (u16)((s32)rd32(0x8050069cu) >> 16));
        wr16(rd32(0x80571954u) + 0x36u, (u16)((rd32(0x80500698u) >> 0x10u) & 0x3fffu));
        wr16(rd32(0x80571954u) + 0x3au, (u16)((rd32(0x80500694u) >> 0x10u) & 0x3fffu));
        wr16(rd32(0x80571954u) + 0x2au, (u16)((rd32(0x8050068cu) >> 0x10u) & 0xffffu));
        wr16(rd32(0x80571954u) + 0x2eu, (u16)((rd32(0x80500690u) >> 0x10u) & 0xffffu));
        f1 = tc_callf(0x802250a0u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x8024eaacu, &a);
        if ((r3 & 0xffu) != 0u) {
            wr8(0x80571990u, 1u);
            wr8(0x805006a1u, 1u);
            r0 = (rd32(r29 + 8u) | 4u) & 0xfffffff7u;
            wr32(r29 + 8u, r0);
            wr16(rd32(0x80571954u) + 2u, (u16)r0);
            r0 = rd32(r29 + 8u) | 0x10u;
            wr32(r29 + 8u, r0);
            wr16(rd32(0x80571954u) + 2u, (u16)r0);
        } else {
            wr8(0x80571990u, 0u);
            wr8(0x805006a1u, 0u);
            r0 = rd32(r29 + 8u) & 0xfffffff3u;
            wr32(r29 + 8u, r0);
            wr16(rd32(0x80571954u) + 2u, (u16)r0);
            r0 = rd32(r29 + 8u) & 0xffffffefu;
            wr32(r29 + 8u, r0);
            wr16(rd32(0x80571954u) + 2u, (u16)r0);
        }
        r5 = rd32(0x80576c88u);
        wr16(rd32(0x80571954u) + 2u, (u16)(rd32(r29 + 8u) & 0xffffffddu));
        wr16(rd32(0x80571954u) + 2u, (u16)rd32(r29 + 8u));
        r0 = rd32(r5 + 0x10u) | 3u;
        wr32(r5 + 0x10u, r0);
        wr16(rd32(0x80571954u) + 4u, (u16)r0);
        r0 = rd32(r29 + 8u) | 1u;
        wr32(r29 + 8u, r0);
        wr16(rd32(0x80571954u) + 2u, (u16)r0);
        a.r[0] = r28;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
