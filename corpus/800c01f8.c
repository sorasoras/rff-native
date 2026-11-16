#include "tc_rt.h"

void fn_800c01f8(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
    r3 = tc_call(0x802558e4u, &a);
    r31 = r3;
    r30 = rd32((u32)param_1 + 0x100u);
    a.r[0] = (u32)param_1;
    a.r[1] = r3;
    (void)tc_call(0x800c02fcu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r31;
    (void)tc_call(0x800c0390u, &a);
    a.r[0] = rd32((u32)param_1 + 0xacu);
    r3 = tc_call(0x8007dad4u, &a);
    r3 = rd32(r3 + 0xcu);
    a.r[0] = r3;
    r3 = tc_call(0x800f2a0cu, &a);
    r3 = rd32(r3);
    r3 = r3 + (r30 * 0x24u);
    if (r31 == (u32)rd8(r3 + 2u)) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)rd8(r3 + 1u);
        a.r[3] = 0u;
        (void)tc_call(0x801a9064u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800f34c8u, &a);
    return;
}
