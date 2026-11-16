#include "tc_rt.h"

void fn_80213710(u32 param_1)
{
    u32 r0 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x8049b850u;
    r30 = param_1 + 4u;
    r29 = 1u;
    wr8(0x8049b740u, 0x53u);
    r0 = rd32(0x8049b75cu);
    wr8(0x8049b741u, 0x4bu);
    wr8(0x8049b742u, 0x47u);
    wr8(0x8049b743u, 0x31u);
    wr32(0x8049b744u, rd32(param_1 + 0x58u));
    wr32(0x8049b748u, (u32)rd8(param_1));
    wr32(0x8049b74cu, rd32(param_1 + 4u));
    wr32(0x8049b750u, rd32(param_1 + 8u));
    wr32(0x8049b754u, rd32(param_1 + 0x2cu));
    wr32(0x8049b758u, rd32(param_1 + 0x30u));
    r0 = (r0 & 0x7fffffffu) | (((u32)rd8(param_1 + 0x28u) << 0x18u) & 0x80000000u);
    wr32(0x8049b75cu, r0);
    wr32(0x8049b760u, rd32(param_1 + 0x4cu));
    wr32(0x8049b764u, rd32(param_1 + 0x50u));
    wr32(0x8049b768u, rd32(param_1 + 0x54u));
    wrf32d(0x8049b76cu, (f64)rdf32(param_1 + 0x34u));
    wrf32d(0x8049b770u, (f64)rdf32(param_1 + 0x38u));
    wrf32d(0x8049b774u, (f64)rdf32(param_1 + 0x3cu));
    wrf32d(0x8049b778u, (f64)rdf32(param_1 + 0x40u));
    wrf32d(0x8049b77cu, (f64)rdf32(param_1 + 0x44u));
    wrf32d(0x8049b780u, (f64)rdf32(param_1 + 0x48u));
    wrf32d(0x8049b784u, (f64)rdf32(param_1 + 0x18u));
    wrf32d(0x8049b788u, (f64)rdf32(param_1 + 0x1cu));
    wrf32d(0x8049b78cu, (f64)rdf32(param_1 + 0x20u));
    wrf32d(0x8049b790u, (f64)rdf32(param_1 + 0x24u));
    while ((s32)r29 < (s32)rd32(rd32(param_1 + 0x4ecu))) {
        a.r[0] = rd32(r30 + 0x60u);
        a.r[1] = r31;
        (void)tc_call(0x80219498u, &a);
        r31 = r31 + 0x64u;
        r30 = r30 + 4u;
        r29 = r29 + 1u;
    }
    return;
}
