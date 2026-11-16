#include "tc_rt.h"

void fn_80123b7c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = param_1 + 0x80u;
    r30 = param_1;
    r28 = 0u;
    wr32(param_1, (u32)param_2);
    do {
        r3 = r28 + 0x623u;
        if ((u32)param_2 == 0u && r28 == 3u) {
            r3 = 0x62eu;
        } else {
            if ((u32)param_2 == 2u && r28 == 3u) {
                r3 = 0x62du;
            }
        }
        a.r[0] = r3;
        r3 = tc_call(0x800f92e8u, &a);
        wr32(r30 + 0x78u, r3);
        a.r[0] = r29;
        a.r[1] = r3;
        (void)tc_call(0x801f0e3cu, &a);
        r28 = r28 + 1u;
        r29 = r29 + 0x58u;
        r30 = r30 + 0x58u;
    } while ((s32)r28 < 10);
    r28 = 0u;
    r30 = ((u32)param_2 * 0xcu) - 0x7fcc6620u;
    do {
        a.r[0] = rd32(r30);
        (void)tc_call(0x801ebc04u, &a);
        r28 = r28 + 1u;
        r30 = r30 + 4u;
    } while ((s32)r28 < 3);
    wr32(param_1 + 8u, 0u);
    a.r[0] = 0x620u;
    r3 = tc_call(0x800f92e8u, &a);
    wr32(param_1 + 0xcu, r3);
    a.r[0] = 0x50u;
    r3 = tc_call(0x801f0d34u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801f0da4u, &a);
    }
    wr32(param_1 + 0x10u, r30);
    a.r[0] = r30;
    a.r[1] = rd32(param_1 + 0xcu);
    f1 = tc_callf(0x801f0e3cu, &a);
    r4 = rd32(param_1 + 0x14u);
    if (r4 != 0u) {
        r4 = rd32(r4 + 0x30u);
        a.r[0] = rd32(param_1 + 0xcu);
        a.r[1] = r4;
        f1 = tc_callf(0x80103564u, &a);
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x80571250u;
    a.r[1] = rd32(param_1 + 0xcu);
    a.r[2] = 0x80339cd6u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801032a4u, &a);
    wr32(param_1 + 0x18u, r3);
    a.r[0] = param_1 + 0x58u;
    a.r[1] = rd32(param_1 + 0xcu);
    a.r[2] = 0x80571250u;
    (void)tc_call(0x80163f48u, &a);
    wr32(param_1 + 0x74u, 0xffffffffu);
    a.r[0] = param_1;
    a.r[1] = 0xffffffffu;
    (void)tc_call(0x8012442cu, &a);
    wr32(param_1 + 0x68u, 0u);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, param_1);
        wr32(r30, 0x8036319cu);
    }
    a.r[0] = param_1 + 0x1cu;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x28u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, param_1);
        wr32(r30, 0x80363130u);
    }
    a.r[0] = param_1 + 0x1cu;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, param_1);
        wr32(r30, 0x80363178u);
    }
    a.r[0] = param_1 + 0x1cu;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, param_1);
        wr32(r30, 0x80363154u);
    }
    a.r[0] = param_1 + 0x1cu;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = param_1 + 0x1cu;
    a.r[1] = 3u;
    (void)tc_call(0x800f8348u, &a);
    wr32(param_1 + 0x6cu, 0u);
    wr32(param_1 + 0x70u, 0u);
    return;
}
