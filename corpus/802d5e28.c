#include "tc_rt.h"

u32 fn_802d5e28(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    f0 = (f64)rdf32(0x80348ad8u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(param_1, 0xffffffffu);
    wr32(param_1 + 4u, 0xffffffffu);
    wr32(param_1 + 8u, 0xffffffffu);
    wr32(param_1 + 0xcu, 0xffffffffu);
    wr32(param_1 + 0x10u, 0xffffffffu);
    wr32(param_1 + 0x14u, 0xffffffffu);
    wr32(param_1 + 0x18u, 0xffffffffu);
    wr32(param_1 + 0x1cu, 0xffffffffu);
    wr8(param_1 + 0x42u, 0xffu);
    wr8(param_1 + 0x43u, 0u);
    wrf32d(param_1 + 0x44u, f0);
    wr32(param_1 + 0x48u, 0u);
    wr32(0x80547520u, 0xffu);
    wr32(0x80547524u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0xffffffffu);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 0x817fdfecu;
    (void)tc_call(0x802d6b1cu, &a);
    r5 = (u32)rd8(param_1 + 0x18u);
    r4 = (u32)rd8(param_1 + 0x19u);
    r3 = (u32)rd8(param_1 + 0x1au);
    r0 = (u32)rd8(param_1 + 0x1bu);
    wr32(param_1 + 0x20u, 0u);
    wr8(param_1 + 8u, (u8)r5);
    wr8(param_1 + 9u, (u8)r4);
    wr8(param_1 + 0xau, (u8)r3);
    wr8(param_1 + 0xbu, (u8)r0);
    r4 = param_1 + 0x18u;
    r0 = rd32(param_1 + 0x20u);
    wr8(param_1 + 0xcu, rd8(r4));
    wr8(param_1 + 0xdu, rd8(r4 + 1u));
    wr8(param_1 + 0xeu, rd8(r4 + 2u));
    wr8(param_1 + 0xfu, rd8(r4 + 3u));
    if (r0 != 2u) {
        r4 = param_1 + 0x18u;
    } else {
        r4 = param_1 + 0x1cu;
    }
    r0 = rd32(param_1 + 0x20u);
    wr8(param_1 + 0x10u, rd8(r4));
    wr8(param_1 + 0x11u, rd8(r4 + 1u));
    wr8(param_1 + 0x12u, rd8(r4 + 2u));
    wr8(param_1 + 0x13u, rd8(r4 + 3u));
    if (r0 == 0u) {
        r10 = param_1 + 0x18u;
    } else {
        r10 = param_1 + 0x1cu;
    }
    r5 = (u32)rd8(param_1 + 0xbu);
    wr8(param_1 + 0x14u, rd8(r10));
    r9 = (u32)rd8(param_1 + 0x42u);
    r6 = (u32)rd8(param_1 + 0xfu);
    r8 = r5 * r9;
    wr8(param_1 + 0x15u, rd8(r10 + 1u));
    r5 = (u32)rd8(param_1 + 0x13u);
    wr8(param_1 + 0x16u, rd8(r10 + 2u));
    r6 = r6 * r9;
    r10 = (u32)rd8(r10 + 3u);
    r7 = r5 * r9;
    r5 = r10 * r9;
    r8 = ppc_mulhw(-2139062143, (s32)r8) + r8;
    r10 = (u32)((s32)r8 >> 7);
    r6 = ppc_mulhw(-2139062143, (s32)r6) + r6;
    r10 = r10 + ((r10 >> 0x1fu) & 1u);
    r9 = (u32)((s32)r6 >> 7);
    wr8(param_1 + 0xbu, (u8)r10);
    r7 = ppc_mulhw(-2139062143, (s32)r7) + r7;
    r9 = r9 + ((r9 >> 0x1fu) & 1u);
    r7 = (u32)((s32)r7 >> 7);
    wr8(param_1 + 0xfu, (u8)r9);
    r5 = ppc_mulhw(-2139062143, (s32)r5) + r5;
    r5 = (u32)((s32)r5 >> 7);
    r7 = r7 + ((r7 >> 0x1fu) & 1u);
    wr8(param_1 + 0x13u, (u8)r7);
    r5 = r5 + ((r5 >> 0x1fu) & 1u);
    wr8(param_1 + 0x17u, (u8)r5);
    wr32(0x817fdff0u, 0xffffffffu);
    a.r[0] = param_1;
    a.r[1] = 0x817fdff0u;
    (void)tc_call(0x802d6cb0u, &a);
    f0 = (f64)rdf32(0x80348ad8u);
    f1 = (f64)rdf32(0x80348adcu);
    wrf32d(param_1 + 0x2cu, f0);
    wrf32d(param_1 + 0x24u, f1);
    wrf32d(param_1 + 0x28u, f1);
    wrf32d(param_1 + 0x30u, f0);
    wrf32d(param_1 + 0x34u, f0);
    wr32(param_1 + 0x38u, 1u);
    wr32(param_1 + 0x3cu, 1u);
    return param_1;
}
