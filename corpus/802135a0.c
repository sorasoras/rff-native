#include "tc_rt.h"

void fn_802135a0(u32 param_1)
{
    u32 r0 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (((u32)rd8(0x8049b740u) == 0x53u && (u32)rd8(0x8049b741u) == 0x4bu) && ((u32)rd8(0x8049b742u) == 0x47u && (u32)rd8(0x8049b743u) == 0x31u)) {
        r31 = 0x8049b850u;
        r0 = (u32)rd8(param_1 + 0x28u);
        r30 = param_1 + 4u;
        wr32(param_1 + 0x58u, rd32(0x8049b744u));
        r29 = 1u;
        r6 = rd32(0x8049b748u);
        wr8(param_1, (u8)((((0u - r6) | r6) >> 0x1fu) & 1u));
        wr32(param_1 + 4u, rd32(0x8049b74cu));
        wr32(param_1 + 8u, rd32(0x8049b750u));
        wr32(param_1 + 0x2cu, rd32(0x8049b754u));
        wr32(param_1 + 0x30u, rd32(0x8049b758u));
        r6 = (u32)((s32)rd32(0x8049b75cu) >> 31);
        r0 = (r0 & 0xffffff7fu) | ((((0u - r6) | r6) >> 0x18u) & 0x80u);
        wr8(param_1 + 0x28u, (u8)r0);
        wr32(param_1 + 0x4cu, rd32(0x8049b760u));
        wr32(param_1 + 0x50u, rd32(0x8049b764u));
        wr32(param_1 + 0x54u, rd32(0x8049b768u));
        wrf32d(param_1 + 0x34u, (f64)rdf32(0x8049b76cu));
        wrf32d(param_1 + 0x38u, (f64)rdf32(0x8049b770u));
        wrf32d(param_1 + 0x3cu, (f64)rdf32(0x8049b774u));
        wrf32d(param_1 + 0x40u, (f64)rdf32(0x8049b778u));
        wrf32d(param_1 + 0x44u, (f64)rdf32(0x8049b77cu));
        wrf32d(param_1 + 0x48u, (f64)rdf32(0x8049b780u));
        wrf32d(param_1 + 0x18u, (f64)rdf32(0x8049b784u));
        wrf32d(param_1 + 0x1cu, (f64)rdf32(0x8049b788u));
        wrf32d(param_1 + 0x20u, (f64)rdf32(0x8049b78cu));
        wrf32d(param_1 + 0x24u, (f64)rdf32(0x8049b790u));
        while ((s32)r29 < (s32)rd32(rd32(param_1 + 0x4ecu))) {
            a.r[0] = rd32(r30 + 0x60u);
            a.r[1] = r31;
            (void)tc_call(0x8021955cu, &a);
            r31 = r31 + 0x64u;
            r30 = r30 + 4u;
            r29 = r29 + 1u;
        }
    }
    return;
}
