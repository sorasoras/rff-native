#include "tc_rt.h"

void fn_802e67c0(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r5 = rd32((u32)param_1 + 0x28u);
    r3 = rd32(r5 + 0x38u);
    r31 = (rd32(r5 + 0x3cu) >> 0x1cu) & 0xfu;
    if (r31 < ((r3 >> 0x1cu) & 0xfu)) {
        if (r31 >= ((r3 >> 0x14u) & 0xfu)) {
            return;
        }
        a.r[0] = r5;
        a.r[1] = (r31 + 1u) & 0xffu;
        (void)tc_call(0x802ec22cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x28u);
        r3 = tc_call(0x802ebf6cu, &a);
        r5 = rd32(param_2 + 4u);
        r4 = (u32)rd16(param_2 + 8u);
        r7 = r3 + (r31 * 0x1cu);
        r0 = (u32)rd16(param_2 + 0xau);
        wr32(r7, rd32(param_2));
        f1 = (f64)rdf32(param_2 + 0xcu);
        wr32(r7 + 4u, r5);
        f0 = (f64)rdf32(param_2 + 0x10u);
        wr16(r7 + 8u, (u16)r4);
        r4 = (u32)rd16(param_2 + 0x14u);
        wr16(r7 + 0xau, (u16)r0);
        r3 = (u32)rd16(param_2 + 0x16u);
        wrf32d(r7 + 0xcu, f1);
        r0 = rd32(param_2 + 0x18u);
        wrf32d(r7 + 0x10u, f0);
        wr16(r7 + 0x14u, (u16)r4);
        wr16(r7 + 0x16u, (u16)r3);
        wr32(r7 + 0x18u, r0);
        r3 = rd32((u32)param_1 + 0x28u);
        a.r[0] = r3;
        a.r[1] = (rd32(r3 + 0x3cu) >> 0x1cu) & 0xfu;
        (void)tc_call(0x802ec2bcu, &a);
        r28 = 0u;
        wr8(0x817fdfdbu, 0u);
        r3 = rd32((u32)param_1 + 0x28u);
        wr8(0x817fdfd8u, 1u);
        wr8(0x817fdfd9u, 4u);
        wr8(0x817fdfdau, 0x3cu);
        wr32(0x817fdfdcu, rd32(0x817fdfd8u));
        a.r[0] = r3;
        r3 = tc_call(0x802ebf8cu, &a);
        r5 = r3 + ((r31 << 2u) & 0x3fcu);
        r0 = (u32)rd8(0x817fdfddu);
        wr8(r5, rd8(0x817fdfdcu));
        r4 = (u32)rd8(0x817fdfdeu);
        wr8(r5 + 1u, (u8)r0);
        r0 = (u32)rd8(0x817fdfdfu);
        wr8(r5 + 2u, (u8)r4);
        wr8(r5 + 3u, (u8)r0);
        a.r[0] = (u32)param_1 + 0xe8u;
        a.r[1] = (rd32(rd32((u32)param_1 + 0x28u) + 0x3cu) >> 0x1cu) & 0xfu;
        (void)tc_call(0x802ef4b8u, &a);
        f1 = (f64)rdf32(0x80577480u);
        f0 = (f64)rdf32((u32)param_1 + 0x4cu);
        wrf32d(0x817fdfe8u, f1);
        wrf32d(0x817fdfecu, f1);
        if (f0 == f1 && (f64)rdf32((u32)param_1 + 0x50u) == f1) {
            r28 = 1u;
        }
        if (r28 != 0u) {
            r4 = rd32((u32)param_1 + 0x28u);
            if (((rd32(r4 + 0x3cu) >> 0x1cu) & 0xfu) == 1u) {
                a.r[0] = 0x817fdfe0u;
                a.r[1] = r4;
                a.r[2] = 0u;
                (void)tc_call(0x802ed738u, &a);
                wrf32d((u32)param_1 + 0x4cu, (f64)rdf32(0x817fdfe0u));
                wrf32d((u32)param_1 + 0x50u, (f64)rdf32(0x817fdfe4u));
            }
        }
    }
    return;
}
