#include "tc_rt.h"

u32 fn_8014f038(u32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801efc58u, &a);
    wr32(param_1, 0x80366168u);
    wr32(param_1 + 0x158u, 0x8036547cu);
    a.r[0] = param_1 + 0x1fcu;
    a.r[1] = 0x80148c14u;
    a.r[2] = 0x80147948u;
    a.r[3] = 0x3cu;
    a.r[4] = 0x14u;
    (void)tc_call(0x80255624u, &a);
    wr32(param_1 + 0x74cu, 0x80365488u);
    a.r[0] = param_1 + 0x774u;
    (void)tc_call(0x800cdb68u, &a);
    f1 = (f64)rdf32(0x805747a8u);
    f0 = (f64)rdf32(0x805747acu);
    r0 = rd32(param_1 + 0x74u) & 0xfbffffffu;
    wr32(param_1 + 0x140u, 0xfefffu);
    wr32(param_1 + 0x868u, 0x1078u);
    wr32(param_1 + 0x86cu, 0x19u);
    wr32(param_1 + 0x870u, 0x1077u);
    wr32(param_1 + 0x874u, 0xffffffffu);
    wrf32d(param_1 + 0x878u, f1);
    wr32(param_1 + 0x14cu, 0u);
    wr32(param_1 + 0x74u, r0);
    wrf32d(param_1 + 0x154u, f0);
    return param_1;
}
