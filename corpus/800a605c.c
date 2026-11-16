#include "tc_rt.h"

u32 fn_800a605c(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5, u32 param_6, s32 param_7)
{
    u32 r0 = 0, r3 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x800a62ccu, &a);
    a.r[0] = param_3;
    r3 = tc_call(0x800510acu, &a);
    f1 = tc_lastf();
    wr32(0x817fdfc8u, 0u);
    r28 = 0u;
    wr32(0x817fdfccu, 0xffffffffu);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    if ((u32)param_5 != 0u) {
        r0 = param_6 & 0xffffffe0u;
        r28 = param_6 - r0;
        wr32(0x817fdfd0u, r0);
        r27 = ((u32)param_7 + r28 + 0x1fu) & 0xffffffe0u;
        wr32(0x817fdfd4u, r27);
    } else {
        wr32(0x817fdfd0u, 0u);
        r27 = r3;
        wr32(0x817fdfd4u, r3);
    }
    if ((u32)param_4 == 0u) {
        wr32(0x817fdfccu, param_1);
        wr32(0x817fdfc8u, 0x800a6480u);
    }
    if (r27 == 0u) {
        r29 = 0u;
    } else {
        if (rd32(param_2 + 0x10u) != 0u) {
            a.r[0] = rd32(param_2);
            a.r[1] = r27;
            a.r[2] = rd32(param_2 + 0xcu);
            a.r[3] = param_2 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
        } else {
            if (rd32(param_2 + 0x20u) != 0u) {
                a.r[0] = param_2 + 0x24u;
                a.r[1] = 0x20u;
                a.r[2] = r27;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                a.r[0] = rd32(param_2);
                a.r[1] = r27;
                a.r[2] = rd32(param_2 + 0xcu);
                a.r[3] = param_2 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
        }
        r29 = r3;
    }
    if (r29 == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800a62ccu, &a);
        r3 = 0u;
    } else {
        if ((u32)param_5 != 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r29;
            a.r[1] = param_3;
            a.r[2] = (u32)param_4;
            a.r[3] = 0x817fdfc8u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80050e08u, &a);
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r29;
            a.r[1] = param_3;
            a.r[2] = (u32)param_4;
            a.r[3] = rd32(0x817fdfc8u);
            a.r[4] = rd32(0x817fdfccu);
            a.r[7] = 0u;
            (void)tc_call(0x80050da4u, &a);
        }
        wr32(param_1, param_2);
        r3 = 1u;
        wr32(param_1 + 8u, r29);
        wr32(param_1 + 4u, r27);
        wr32(param_1 + 0x10u, r28);
        wr32(param_1 + 0xcu, (ppc_cntlzw((u32)param_4) >> 5u) & 0x7ffffffu);
    }
    return r3;
}
