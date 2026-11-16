#include "tc_rt.h"

u32 fn_8012f1e0(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    c0lt = param_2 < 1;
    r29 = 0u;
    do {
        if ((u32)param_2 == 1u) {
            a.r[0] = (u32)param_1 + 0x44u;
            a.r[1] = 0u;
            (void)tc_call(0x80130b08u, &a);
            r0 = (u32)rd8(0x8049912eu);
            r29 = 0x80499110u;
            if (r0 != 0x1eu) {
                if (r0 != 0x1fu) {
                    r0 = 0u;
                } else {
                    r0 = 2u;
                }
            } else {
                r0 = 1u;
            }
            if (r0 != 1u) {
                r3 = 0x27u;
            } else {
                r3 = 0x26u;
            }
            a.r[0] = 0xdu;
            a.r[1] = r3 + 0x32u;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            r28 = r3;
            a.r[0] = r3;
            r3 = tc_call(0x8025e7a4u, &a);
            r30 = r3;
            a.r[0] = 0x80499110u;
            a.r[1] = 0u;
            a.r[2] = 0xcu;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = 0x80499110u;
            a.r[1] = r28;
            a.r[2] = (r30 << 1u) & 0xfffffffeu;
            (void)tc_call(0x80004338u, &a);
        } else {
            if (!c0lt) {
                if (param_2 < 3) {
                    a.r[0] = (u32)param_1 + 0x44u;
                    a.r[1] = 1u;
                    (void)tc_call(0x80130b08u, &a);
                    r29 = 0x804990e6u;
                    a.r[0] = 0xdu;
                    a.r[1] = 0x57u;
                    a.r[2] = 0u;
                    r3 = tc_call(0x801412f8u, &a);
                    r28 = r3;
                    a.r[0] = r3;
                    r3 = tc_call(0x8025e7a4u, &a);
                    r30 = r3;
                    a.r[0] = 0x804990e6u;
                    a.r[1] = 0u;
                    a.r[2] = 0x14u;
                    (void)tc_call(0x8000443cu, &a);
                    a.r[0] = 0x804990e6u;
                    a.r[1] = r28;
                    a.r[2] = (r30 << 1u) & 0xfffffffeu;
                    (void)tc_call(0x80004338u, &a);
                    break;
                }
            } else if (param_2 >= 0) {
                a.r[0] = (u32)param_1 + 0x44u;
                a.r[1] = 0u;
                (void)tc_call(0x80130b08u, &a);
                r29 = 0x804990ccu;
                a.r[0] = 0xdu;
                a.r[1] = 0x56u;
                a.r[2] = 0u;
                r3 = tc_call(0x801412f8u, &a);
                r28 = r3;
                a.r[0] = r3;
                r3 = tc_call(0x8025e7a4u, &a);
                r30 = r3;
                a.r[0] = 0x804990ccu;
                a.r[1] = 0u;
                a.r[2] = 0xcu;
                (void)tc_call(0x8000443cu, &a);
                a.r[0] = 0x804990ccu;
                a.r[1] = r28;
                a.r[2] = (r30 << 1u) & 0xfffffffeu;
                (void)tc_call(0x80004338u, &a);
                break;
            }
            if (param_2 < 73) {
                a.r[0] = (u32)param_1 + 0x44u;
                a.r[1] = 0u;
                (void)tc_call(0x80130b08u, &a);
                a.r[0] = 0x8049c500u;
                a.r[1] = (u32)param_2 - 3u;
                r3 = tc_call(0x800c8cc4u, &a);
                r29 = r3;
            }
        }
    } while (0);
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[1] = r29;
    f1 = tc_callf(0x80130f70u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x804b9d30u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80100188u, &a);
    a.r[0] = (u32)param_1 + 0x900u;
    (void)tc_call(0x80119d6cu, &a);
    a.r[0] = (u32)param_1 + 0x900u;
    a.r[1] = 0u;
    f1 = tc_callf(0x8011a004u, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0x6cu) + 0x14u), &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 0x900u;
    a.r[1] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80119edcu, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[1] = 0u;
    r3 = tc_call(0x801894d8u, &a);
    a.r[0] = (u32)param_1 + 0x900u;
    a.r[1] = r3;
    (void)tc_call(0x80119ffcu, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80363770u);
    }
    a.r[0] = (u32)param_1 + 0xd08u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x8036374cu);
    }
    a.r[0] = (u32)param_1 + 0xd08u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80363728u);
    }
    a.r[0] = (u32)param_1 + 0xd08u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0xd08u;
    a.r[1] = 0u;
    (void)tc_call(0x800f8348u, &a);
    return 1u;
}
