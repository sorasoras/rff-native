#include "tc_rt.h"

u32 fn_802b2c44(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r8 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = (u32)rd16(0x80542842u);
    if (r0 < 0x14u) {
        r0 = r0 * 0x298u;
        a.r[0] = r0 - 0x7fabd7bcu;
        a.r[1] = 0u;
        a.r[2] = 0x298u;
        f1 = tc_callf(0x8000443cu, &a);
        r4 = (u32)rd16(0x80542842u);
        if (r4 != 0u) {
            r3 = rd32(((r4 - 1u) * 0x298u) - 0x7fabd7bcu) + 1u;
        } else {
            r3 = 0x10000u;
        }
        r4 = r4 * 0x298u;
        wr8(0x817fdfe8u, (u8)((r3 >> 0x18u) & 0xffu));
        r4 = r4 - 0x7fabd7c4u;
        wr32(r4 + 8u, r3);
        r8 = (u32)rd16(0x80542842u);
        wr8(0x817fdfe9u, (u8)((r3 >> 0x10u) & 0xffu));
        r8 = r8 + 1u;
        wr16(0x80542842u, (u16)r8);
        wr8(0x817fdfeau, (u8)((r3 >> 8u) & 0xffu));
        wr8(0x817fdfebu, (u8)r3);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 1u;
        a.r[3] = 4u;
        a.r[4] = 0x817fdfe8u;
        a.r[7] = 0u;
        (void)tc_call(0x802b2e38u, &a);
        r3 = rd32((((u32)rd16(0x80542842u) - 1u) * 0x298u) - 0x7fabd7bcu);
    } else {
        r3 = 0u;
    }
    return r3;
}
