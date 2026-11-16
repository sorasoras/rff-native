#include "tc_rt.h"

void fn_802e5e7c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
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
    if (rd32(param_1 + 0x10u) != 0u && rd32(param_2 + 4u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x10u), &a);
        r22 = r3;
        a.r[0] = param_2;
        r3 = tc_call(0x802ee818u, &a);
        f1 = tc_lastf();
        r24 = r3;
        r26 = 0u;
        if ((r3 & 0xffffu) != 0u) {
            a.r[0] = param_2;
            r3 = tc_call(0x802ee834u, &a);
            f1 = tc_lastf();
            r27 = r3;
            r25 = r24 & 0xffffu;
            r23 = r3;
            r28 = 0u;
            while ((s32)r28 < (s32)r25) {
                a.r[0] = rd32(param_1 + 0x14u);
                a.r[1] = r23;
                r3 = tc_call(0x802e5528u, &a);
                r21 = r3;
                a.r[0] = param_2;
                r3 = tc_call(0x802ee854u, &a);
                a.r[0] = param_2;
                a.r[1] = r21;
                a.r[2] = r3;
                r3 = tc_call(0x802ee988u, &a);
                f1 = tc_lastf();
                r26 = r26 + r3;
                r23 = r23 + 0x14u;
                r28 = r28 + 1u;
            }
            a.r[0] = r22;
            a.r[1] = rd32(param_2 + 4u);
            a.r[2] = param_3;
            a.r[3] = r26 & 0xffffu;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r22) + 0x10u), &a);
            r25 = r24 & 0xffffu;
            r21 = 0u;
            while ((s32)r21 < (s32)r25) {
                a.r[0] = rd32(param_1 + 0x14u);
                a.r[1] = r27;
                r3 = tc_call(0x802e5528u, &a);
                r23 = r3;
                a.r[0] = param_2;
                r3 = tc_call(0x802ee854u, &a);
                a.r[0] = r23;
                a.r[1] = r22;
                a.r[2] = r3;
                a.r[3] = 1u;
                (void)tc_call(0x802efee4u, &a);
                r27 = r27 + 0x14u;
                r21 = r21 + 1u;
            }
        } else {
            r4 = rd32(param_2 + 4u);
            a.r[0] = r22;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = (u32)rd16(r4 + 0xeu);
            a.r[4] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r22) + 0x10u), &a);
            r3 = rd32(param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = r22;
            a.r[2] = 1u;
            a.r[3] = 1u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x44u), &a);
        }
        a.r[0] = param_2;
        r3 = tc_call(0x802ee874u, &a);
        r25 = r3;
        if ((r3 & 0xffffu) != 0u) {
            a.r[0] = param_2;
            r3 = tc_call(0x802ee890u, &a);
            f1 = tc_lastf();
            r23 = r3;
            r26 = r25 & 0xffffu;
            r21 = 0u;
            while ((s32)r21 < (s32)r26) {
                r3 = rd32(param_1 + 0x10u);
                a.r[0] = r3;
                a.r[1] = r23;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                r20 = r3;
                a.r[0] = 0x817fdfa8u;
                (void)tc_call(0x802ee6f0u, &a);
                a.r[0] = 0x817fdfa8u;
                (void)tc_call(0x802ee9f0u, &a);
                a.r[0] = 0x817fdfa8u;
                a.r[1] = r20;
                a.r[2] = param_2;
                f1 = tc_callf(0x802eea28u, &a);
                if ((u32)rd16(0x817fdfbau) != 0u) {
                    a.r[0] = rd32(param_1 + 0x14u);
                    a.r[1] = r23 + 0x11u;
                    r3 = tc_call(0x802e5528u, &a);
                    f1 = tc_lastf();
                    r28 = rd32(r3 + 0x10u);
                    r27 = r3 + 0x10u;
                    while (r28 != r27) {
                        r22 = rd32(r28 + 8u);
                        if (r22 == r20) {
                            r28 = rd32(r28);
                        } else {
                            if ((r24 & 0xffffu) != 0u) {
                                a.r[0] = param_2;
                                r3 = tc_call(0x802ee854u, &a);
                                r25 = r3;
                                a.r[0] = param_2;
                                r3 = tc_call(0x802ee834u, &a);
                                a.r[0] = rd32(param_1 + 0x14u);
                                a.r[1] = r3;
                                a.r[2] = r24 & 0xffffu;
                                a.r[3] = r25;
                                a.r[4] = r22;
                                r3 = tc_call(0x802e5750u, &a);
                                f1 = tc_lastf();
                                if (r3 == 0u) {
                                    r28 = rd32(r28);
                                    continue;
                                }
                            }
                            a.r[0] = 0x817fdfa8u;
                            a.r[1] = param_1;
                            a.r[2] = rd32(r28 + 8u);
                            a.r[3] = param_3;
                            f1 = tc_callf(0x802eec88u, &a);
                            r28 = rd32(r28);
                        }
                    }
                }
                r23 = r23 + 0x24u;
                r21 = r21 + 1u;
            }
        }
    }
    return;
}
