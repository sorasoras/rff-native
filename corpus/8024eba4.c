#include "tc_rt.h"

void fn_8024eba4(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (param_r3 == 0u) {
        wr8(0x80571978u, 0u);
        wr8(0x80571990u, 0u);
        wr8(0x805006c6u, 0u);
        wr8(0x805006c5u, 0u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        r0 = rd32(param_r3 + 4u);
        wr32(0x805006a4u, rd32(param_r3));
        wr32(0x805006a8u, r0);
        r0 = rd32(param_r3 + 0xcu);
        wr32(0x805006acu, rd32(param_r3 + 8u));
        wr32(0x805006b0u, r0);
        r0 = rd32(param_r3 + 0x14u);
        wr32(0x805006b4u, rd32(param_r3 + 0x10u));
        wr32(0x805006b8u, r0);
        r0 = rd32(param_r3 + 0x1cu);
        wr32(0x805006bcu, rd32(param_r3 + 0x18u));
        wr32(0x805006c0u, r0);
        wr32(0x805006c4u, rd32(param_r3 + 0x20u));
        wr8(0x80571978u, 1u);
        wr8(0x805006c5u, 1u);
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
            r4 = rd32(0x805006a4u);
            wr8(0x80571990u, 1u);
            r3 = rd32(0x80571950u);
            r4 = r4 & 0x3fffffffu;
            wr8(0x805006c6u, 1u);
            r5 = rd32(0x80576c88u);
            wr32(r3 + 0xcu, r4);
            wr32(rd32(0x80571950u) + 0x10u, rd32(0x805006a8u) & 0x3fffffffu);
            wr32(rd32(0x80571950u) + 0x14u, rd32(0x805006bcu) & 0x1fffffe0u);
            r0 = rd32(r5 + 0x10u) | 3u;
            wr32(r5 + 0x10u, r0);
            wr16(rd32(0x80571954u) + 4u, (u16)r0);
            r0 = (rd32(r5 + 8u) | 4u) & 0xfffffff7u;
            wr32(r5 + 8u, r0);
            wr16(rd32(0x80571954u) + 2u, (u16)r0);
            r0 = rd32(r5 + 8u) | 0x10u;
            wr32(r5 + 8u, r0);
            wr16(rd32(0x80571954u) + 2u, (u16)r0);
        } else {
            r0 = (u32)rd8(0x80571990u);
            wr8(0x805006c6u, 0u);
            if (r0 != 0u) {
                r3 = rd32(0x80576c88u);
                r0 = rd32(r3 + 8u) & 0xffffffefu;
                wr32(r3 + 8u, r0);
                wr16(rd32(0x80571954u) + 2u, (u16)r0);
                wr8(0x80571990u, 0u);
            }
            r7 = rd32(0x80576c88u);
            r6 = rd32(r7 + 8u) & 0xfffffff3u;
            wr32(r7 + 8u, r6);
            wr16(rd32(0x80571954u) + 2u, (u16)r6);
            wr32(rd32(0x80571950u) + 0xcu, rd32(0x805006a4u) & 0x3fffffffu);
            wr32(rd32(0x80571950u) + 0x10u, rd32(0x805006a8u) & 0x3fffffffu);
            wr32(rd32(0x80571950u) + 0x14u, rd32(0x805006bcu) & 0x1fffffe0u);
        }
        (void)tc_call(0x802250a0u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
