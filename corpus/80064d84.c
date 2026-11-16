#include "tc_rt.h"

void fn_80064d84(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r25 = 0, r26 = 0, r27 = 0, r29 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0xacu);
    if (r0 == 0xb7u) {
        return;
    }
    a.r[0] = r0;
    r3 = tc_call(0x8007dad4u, &a);
    r27 = rd32(r3 + 8u);
    a.r[0] = rd32(param_1 + 0xacu);
    r3 = tc_call(0x8007dad4u, &a);
    r26 = rd32(r3 + 0xcu);
    a.r[0] = param_2;
    r3 = tc_call(0x8007dad4u, &a);
    r29 = rd32(r3 + 8u);
    a.r[0] = param_2;
    r3 = tc_call(0x8007dad4u, &a);
    r25 = rd32(r3 + 0xcu);
    a.r[0] = param_2;
    r3 = tc_call(0x8007dd4cu, &a);
    wr32(param_1 + 0x144u, r3);
    if (r29 != r27) {
        if ((u32)param_3 != 0u) {
            a.r[0] = 0x80469958u;
            a.r[1] = rd32(param_1 + 0xa4u);
            a.r[2] = 0u;
            (void)tc_call(0x80057d6cu, &a);
            a.r[0] = 0x80469958u;
            a.r[1] = rd32(param_1 + 0xa8u);
            a.r[2] = 0u;
            (void)tc_call(0x80057c80u, &a);
        }
        r3 = tc_call(0x800545e4u, &a);
        a.r[0] = 0x80469958u;
        a.r[1] = rd32(param_1 + 0x70u);
        a.r[2] = r3;
        (void)tc_call(0x80058638u, &a);
        a.r[0] = r29;
        r3 = tc_call(0x8007d13cu, &a);
        wr32(param_1 + 0xa4u, (u32)rd16(r3));
        a.r[0] = r29;
        r3 = tc_call(0x8007d13cu, &a);
        wr32(param_1 + 0xa8u, (u32)rd16(r3 + 2u));
        r3 = tc_call(0x800545e4u, &a);
        r27 = r3;
        a.r[0] = 0x80469958u;
        a.r[1] = rd32(param_1 + 0xa8u);
        a.r[2] = 1u;
        r3 = tc_call(0x80058314u, &a);
        r29 = r3;
        a.r[0] = 0x80469958u;
        a.r[1] = rd32(param_1 + 0xa4u);
        a.r[2] = 1u;
        r3 = tc_call(0x80057fd8u, &a);
        a.r[0] = 0x80469958u;
        a.r[1] = r3;
        a.r[2] = r29;
        a.r[3] = r27;
        r3 = tc_call(0x8005854cu, &a);
        wr32(param_1 + 0x70u, r3);
    }
    if (r25 != r26) {
        if ((u32)param_3 != 0u) {
            a.r[0] = 0x8046a200u;
            a.r[1] = r26;
            a.r[2] = 0u;
            (void)tc_call(0x80058f78u, &a);
        }
        a.r[0] = param_1;
        (void)tc_call(0x80064ac8u, &a);
        wr32(param_1 + 0xfcu, r25);
        if (r25 != 0x8cu) {
            a.r[0] = 0x8046a200u;
            a.r[1] = r25;
            a.r[2] = 1u;
            (void)tc_call(0x80058d20u, &a);
            wr32(param_1 + 0xf8u, 1u);
            wr32(param_1 + 0x100u, 0u);
            wr32(param_1 + 0x104u, 0u);
        } else {
            wr32(param_1 + 0xf8u, 0u);
        }
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 1u;
        a.r[3] = 1u;
        a.f[0] = (f64)rdf32(0x80572560u);
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    }
    wr32(param_1 + 0xacu, param_2);
    a.r[0] = param_2;
    r3 = tc_call(0x8007dad4u, &a);
    wr32(param_1 + 0xb8u, rd32(r3));
    a.r[0] = param_2;
    r3 = tc_call(0x8007dad4u, &a);
    wrf32d(param_1 + 0xb0u, (f64)rdf32(r3 + 0x14u));
    a.r[0] = param_2;
    r3 = tc_call(0x8007dad4u, &a);
    wrf32d(param_1 + 0xb4u, (f64)rdf32(r3 + 0x10u));
    return;
}
