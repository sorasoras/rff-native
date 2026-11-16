#include "tc_rt.h"

void fn_80156a34(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r23 = 0, r25 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 8u), &a);
    a.r[0] = param_1;
    (void)tc_call(0x801568d4u, &a);
    wr8(param_1 + 0x52u, 6u);
    wr8(param_1 + 0x53u, 0u);
    r25 = (u32)rd16(0x80492836u);
    a.r[0] = 0x8049c500u;
    r3 = tc_call(0x800c845cu, &a);
    r28 = r25 - r3;
    r25 = 0x45u;
    do {
        a.r[0] = 0x8049c500u;
        a.r[1] = r25;
        r3 = tc_call(0x800c8794u, &a);
        if (r3 < 0xabu) {
            a.r[0] = 0x8049c500u;
            a.r[1] = r25;
            r3 = tc_call(0x800c8ca4u, &a);
            if ((r3 & 0x10u) != 0u) {
                r28 = r28 + 1u;
            }
        }
        r25 = r25 - 1u;
    } while ((s32)r25 >= 0);
    if ((s32)r28 <= 0) {
        r4 = 0u;
    } else {
        r4 = r28;
    }
    r27 = 0x45u;
    r0 = rd32(0x80492c58u);
    wr16(0x80492836u, (u16)r4);
    r30 = r0 & 0x400u;
    do {
        a.r[0] = 0x8049c500u;
        a.r[1] = r27;
        r3 = tc_call(0x800c8794u, &a);
        r29 = r3;
        if (r3 < 0xabu) {
            a.r[0] = 0x8049c500u;
            a.r[1] = r27;
            r3 = tc_call(0x800c8804u, &a);
            a.r[0] = 0x8049c500u;
            a.r[1] = r27;
            a.r[2] = r3;
            (void)tc_call(0x800c8898u, &a);
            a.r[0] = 0x8049c500u;
            a.r[1] = r27;
            r3 = tc_call(0x800c8ca4u, &a);
            r23 = r3 & 0xffu;
            if ((r3 & 0x10u) == 0u) {
                r23 = r23 & 0xffffff9du;
                a.r[0] = 0x8049c500u;
                a.r[1] = r27;
                a.r[2] = r23 & 0xffu;
                (void)tc_call(0x800c8cb4u, &a);
                r28 = r28 + 1u;
                if ((s32)r28 <= 0) {
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r27;
                    r3 = tc_call(0x800c8b58u, &a);
                    r3 = r3 & 0xffu;
                    r0 = r3 - 1u;
                    if ((s32)r0 <= 0) {
                        a.r[0] = 0x8049c500u;
                        a.r[1] = r27;
                        a.r[2] = 0u;
                        (void)tc_call(0x800c8b68u, &a);
                        a.r[0] = 0x8049c500u;
                        a.r[1] = r27;
                        r3 = tc_call(0x800c8b88u, &a);
                        r5 = (r3 & 0xffu) - 1u;
                        if ((s32)r5 < 0) {
                            r5 = 0u;
                        }
                        r5 = r5 & 0xffu;
                        a.r[0] = 0x8049c500u;
                        a.r[1] = r27;
                        a.r[2] = r5;
                        (void)tc_call(0x800c8b98u, &a);
                    } else {
                        a.r[0] = 0x8049c500u;
                        a.r[1] = r27;
                        a.r[2] = r0 & 0xffu;
                        (void)tc_call(0x800c8b68u, &a);
                    }
                }
                if (r30 != 0u) {
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r27;
                    r3 = tc_call(0x800c8b58u, &a);
                    r5 = (r3 & 0xffu) + 1u;
                    if ((s32)r5 < 0) {
                        r5 = 0u;
                    }
                    r5 = r5 & 0xffu;
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r27;
                    a.r[2] = r5;
                    (void)tc_call(0x800c8b68u, &a);
                }
                a.r[0] = 0x8049c500u;
                a.r[1] = r27;
                r3 = tc_call(0x800c8b58u, &a);
                r23 = r3 & 0xffu;
                a.r[0] = 0x8049c500u;
                a.r[1] = r27;
                r3 = tc_call(0x800c8bb8u, &a);
                r3 = r3 & 0xffu;
                r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r3) >> 2);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                if ((s32)r23 > (s32)r0) {
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r27;
                    a.r[2] = 0u;
                    (void)tc_call(0x800c8b68u, &a);
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r27;
                    r3 = tc_call(0x800c8b88u, &a);
                    r3 = r3 & 0xffu;
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r27;
                    a.r[2] = (r3 + 1u) & 0xffu;
                    (void)tc_call(0x800c8b98u, &a);
                }
                a.r[0] = 0x8049c500u;
                a.r[1] = r27;
                r3 = tc_call(0x800c8ca4u, &a);
                r23 = r3 & 0xffu;
                if ((r3 & 1u) != 0u) {
                    r23 = r23 & 0xfffffffeu;
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r27;
                    r3 = tc_call(0x800c8b88u, &a);
                    if ((r3 & 0xffu) != 0u) {
                        r23 = r23 | 4u;
                        a.r[0] = 0x8049c500u;
                        a.r[1] = r27;
                        a.r[2] = r23 & 0xffu;
                        (void)tc_call(0x800c8cb4u, &a);
                    }
                }
                wr32(0x817fdfc8u, r29);
                if ((s32)r28 > 0) {
                    a.r[0] = 0x817fdfc8u;
                    r3 = tc_call(0x801498b0u, &a);
                    if (r3 != 0u) {
                        a.r[0] = 0x8049c500u;
                        a.r[1] = r27;
                        a.r[2] = 1u;
                        (void)tc_call(0x800c8c78u, &a);
                        a.r[0] = 0x8049c500u;
                        a.r[1] = r27;
                        (void)tc_call(0x800c8c58u, &a);
                    }
                }
            } else {
                a.r[0] = 0x8049c500u;
                a.r[1] = r27;
                a.r[2] = 1u;
                (void)tc_call(0x800c8c78u, &a);
                a.r[0] = 0x8049c500u;
                a.r[1] = r27;
                r3 = tc_call(0x800c8c58u, &a);
                if ((r3 & 0xffu) == 0u) {
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r27;
                    a.r[2] = 0u;
                    (void)tc_call(0x800c8cb4u, &a);
                    a.r[0] = r27;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    (void)tc_call(0x80156818u, &a);
                }
            }
        }
        r27 = r27 - 1u;
    } while ((s32)r27 >= 0);
    a.r[0] = param_1;
    f1 = tc_callf(0x8015693cu, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x10u), &a);
    return;
}
