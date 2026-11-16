#include "tc_rt.h"

u32 fn_800f42f4(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_1 + 0x48u);
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        if (rd32(rd32(param_1 + 0x44u) + 0x120u) != 0u) {
            r3 = 0u;
            return r3;
        }
    } else if (!c0lt) {
        c0lt = (s32)r0 < 5;
        if (r0 == 5u) {
            r3 = rd32(0x804863d8u);
            if (rd32(r3 + 0x290u) != 0u) {
                r3 = 0u;
                return r3;
            }
            r3 = rd32(r3 + 0xa48u);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            r0 = rd32(r3 + 0x74u);
            if ((s32)r0 < 452 || (s32)r0 > 455) {
                r3 = 0u;
                return r3;
            }
        } else if (c0lt && rd32(rd32(param_1 + 0x44u) + 0x124u) != 2u) {
            r3 = 0u;
            return r3;
        }
    }
    f0 = (f64)rdf32(0x80573b84u);
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe4u;
    a.r[2] = 0x817fdfd8u;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x1cu), &a);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x20u), &a);
    a.r[0] = param_1 + 0x20u;
    a.r[1] = 0x817fdfe4u;
    a.r[2] = 0x817fdfd8u;
    r3 = tc_call(0x800cfe68u, &a);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
