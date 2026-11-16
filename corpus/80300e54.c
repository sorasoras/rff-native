#include "tc_rt.h"

u32 fn_80300e54(u32 param_1, u32 param_r5)
{
    u32 ctr = 0, r0 = 0, r7 = 0, r8 = 0, r10 = 0, r11 = 0, r12 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r7 = 0x1000008u;
    r0 = rd32(param_r5 + 0x18u);
    wr32(0x817fdffcu, 0u);
    r0 = r0 & 8u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (r0 != 0u) {
        r7 = 0x1000000u;
    }
    f0 = (f64)rdf32(0x8057774cu);
    r10 = 0x817fdf9cu;
    f1 = (f64)rdf32(0x80577750u);
    wrf32d(0x817fdf70u, f0);
    wrf32d(0x817fdf68u, f1);
    wrf32d(0x817fdf6cu, f1);
    wrf32d(0x817fdf74u, f0);
    wrf32d(0x817fdf78u, f0);
    wrf32d(0x817fdf7cu, f0);
    wr32(0x817fdf80u, 0u);
    wrf32d(0x817fdf84u, f1);
    wrf32d(0x817fdf88u, f1);
    wrf32d(0x817fdf8cu, f0);
    wrf32d(0x817fdf90u, f0);
    wrf32d(0x817fdf94u, f0);
    wrf32d(0x817fdf98u, f0);
    r0 = (u32)((s32)ppc_mulhw(715827883, 95) >> 2);
    r30 = r0 + ((r0 >> 0x1fu) & 1u);
    r29 = r30 + 1u;
    if ((s32)r29 > 8) {
        r8 = 0u;
        r12 = r30 & 0x80000000u;
        r11 = 1u;
        if (r12 == 0u && r12 != (r29 & 0x80000000u)) {
            r11 = 0u;
        }
        if (r11 != 0u) {
            r8 = 1u;
        }
    }
    f1 = (f64)rdf32(0x80577750u);
    f0 = (f64)rdf32(0x8057774cu);
    ctr = ppc_divwu(0x5fu, 0x18u);
    do {
        wrf32d(r10, f1);
        wrf32d(r10 + 4u, f1);
        wrf32d(r10 + 8u, f0);
        wrf32d(r10 + 0xcu, f0);
        wrf32d(r10 + 0x10u, f0);
        wrf32d(r10 + 0x14u, f0);
        r10 = r10 + 0x18u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = param_r5;
    a.r[4] = r7;
    a.r[5] = 0x817fdf68u;
    a.r[6] = 0x817fdfe4u;
    a.r[7] = r10;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x18u), &a);
    return rd32(0x817fdf80u);
}
