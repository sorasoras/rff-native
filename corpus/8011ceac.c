#include "tc_rt.h"

u32 fn_8011ceac(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x124u, param_2);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8011dba8u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = rd32((u32)param_1 + 0x124u);
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x802ef220u, &a);
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x20u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r31 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x20u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r31 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        (void)tc_call(0x802e5818u, &a);
        wr32(r31, 0x80362920u);
    }
    wr32((u32)param_1 + 0xc8u, r31);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8011dba8u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = param_4;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
    r30 = r3;
    wr32(0x80571d40u, (u32)param_1 + 4u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8011dba8u, &a);
    r31 = r3;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8011d534u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = r30;
    a.r[2] = r31;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = 1u;
        wr32(0x80571d40u, 0u);
    }
    return r3;
}
