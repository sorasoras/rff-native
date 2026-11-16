#include "tc_rt.h"

u32 fn_8031d4f8(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x8057796cu);
    f1 = (f64)rdf32(0x80577968u);
    wr32((u32)param_1 + 0x10u, 0u);
    wr32((u32)param_1 + 0xcu, 1u);
    wr32((u32)param_1 + 0x38u, 0u);
    wr16((u32)param_1 + 0x40u, 0u);
    wr32((u32)param_1 + 0x3cu, 0u);
    wr32((u32)param_1 + 0x44u, 0u);
    wr16((u32)param_1 + 0x4cu, 0u);
    wr32((u32)param_1 + 0x48u, 0u);
    wr16((u32)param_1 + 0x50u, 0u);
    wrf32d((u32)param_1 + 0x58u, f1);
    wrf32d((u32)param_1 + 0x5cu, f1);
    wrf32d((u32)param_1 + 0x60u, f0);
    wrf32d((u32)param_1 + 0x64u, f0);
    wrf32d((u32)param_1 + 0x68u, f0);
    wr32((u32)param_1 + 0x20u, (u32)param_2);
    r6 = rd32((u32)param_2 + 0x10u);
    wr32((u32)param_2 + 0x10u, r6 + 1u);
    r0 = rd32((u32)param_1 + 8u);
    wr32((u32)param_1 + 0x24u, param_3);
    r0 = r0 & 0xffffu;
    wr32((u32)param_1 + 0x28u, 0u);
    wr8((u32)param_1 + 0x8au, 1u);
    if (rd32(0x80571e08u) == r0) {
        wr32(0x80571e08u, 0xffffffffu);
    }
    r30 = rd32((u32)param_1 + 0x24u);
    r3 = rd32(rd32(rd32(rd32((u32)param_1 + 0x20u) + 0xbcu) + 0x20u) + 8u);
    a.r[0] = r3;
    a.r[1] = (u32)rd8(r30 + 0x148u);
    a.r[2] = param_3;
    a.r[3] = r6;
    a.r[4] = 1u;
    a.r[5] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 8u), &a);
    wr32((u32)param_1 + 0x2cu, r3);
    wr32((u32)param_1 + 0x54u, 0u);
    f0 = (f64)rdf32(r30 + 0x11cu);
    wr8((u32)param_1 + 0x6cu, rd8(r30 + 0x113u));
    wr8((u32)param_1 + 0x6du, rd8(r30 + 0x114u));
    wr8((u32)param_1 + 0x6eu, rd8(r30 + 0x115u));
    wr8((u32)param_1 + 0x6fu, rd8(r30 + 0x116u));
    wr8((u32)param_1 + 0x70u, rd8(r30 + 0x117u));
    wr8((u32)param_1 + 0x71u, rd8(r30 + 0x118u));
    wr8((u32)param_1 + 0x72u, rd8(r30 + 0x119u));
    wr8((u32)param_1 + 0x73u, rd8(r30 + 0x11au));
    wr8((u32)param_1 + 0x74u, rd8(r30 + 0x11bu));
    wrf32d((u32)param_1 + 0x78u, f0);
    wrf32d((u32)param_1 + 0x7cu, (f64)rdf32(r30 + 0x120u));
    wrf32d((u32)param_1 + 0x80u, (f64)rdf32(r30 + 0x124u));
    wrf32d((u32)param_1 + 0x84u, (f64)rdf32(r30 + 0x128u));
    return 1u;
}
