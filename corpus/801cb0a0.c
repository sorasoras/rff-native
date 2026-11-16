#include "tc_rt.h"

u32 fn_801cb0a0(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x801cb2c4u, &a);
    r31 = r3;
    r5 = rd32(0x8033bd04u);
    r4 = rd32(0x8033bd08u);
    r3 = rd32(0x8033bd0cu);
    r0 = rd32(0x8033bd10u);
    wr32(0x817fdfd8u, rd32(0x8033bd00u));
    wr32(0x817fdfdcu, r5);
    wr32(0x817fdfe0u, r4);
    wr32(0x817fdfe4u, r3);
    wr32(0x817fdfe8u, r0);
    if ((u32)param_2 != 0x3fu) {
        if ((u32)param_2 != 0x23u) {
            a.r[0] = (u32)rd8(0x80492821u);
            a.r[1] = ((u32)rd8(0x80492823u) + ((u32)rd8(0x80492822u) * 6u) + 1u) & 0xffu;
            r3 = tc_call(0x800a74e4u, &a);
            r0 = 0u;
            if (r3 != 0xffffffffu) {
                r0 = 1u;
            }
            c0eq = r0 == 0u;
            r0 = 0u;
            if (!c0eq && r3 != 1u) {
                r0 = 1u;
            }
            c0eq = r0 == 0u;
            r0 = 0u;
            if (!c0eq && r3 != 5u) {
                r0 = 1u;
            }
            c0eq = r0 == 0u;
            r0 = 0u;
            if (!c0eq && r3 != 9u) {
                r0 = 1u;
            }
            c0eq = r0 == 0u;
            r0 = 0u;
            if (!c0eq && r3 != 0xeu) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                a.r[0] = r3;
                a.r[1] = 4u;
                r3 = tc_call(0x8014db4cu, &a);
                if (r3 != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = (u32)rd8(0x80492824u);
                    r3 = tc_call(0x801cb34cu, &a);
                    if (r3 != 0u) {
                        r3 = 0xeu;
                        return r3;
                    }
                }
            }
            if ((u32)param_2 == 9u && (u32)rd8(0x80492b98u) == 0u && (u32)rd8(0x8049912au) != 0x21u) {
                r31 = 0x10u;
            }
            if ((u32)param_2 == 0xcu) {
                r0 = (u32)rd8(0x80492824u);
                if (r0 >= 0x12u || r0 < 3u) {
                    r3 = 0x49u;
                    return r3;
                }
            }
            r0 = (u32)rd8(0x80492b98u);
            if (r0 != 0u) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r31 = rd32(r0 - 0x7e802028u);
            } else {
                a.r[0] = param_1;
                a.r[1] = (u32)rd8(0x80492824u);
                r3 = tc_call(0x801cb34cu, &a);
                if (r3 == 0u) {
                    r31 = 0xbu;
                }
            }
            r3 = r31;
        } else {
            a.r[0] = 0x43u;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 0u) {
                r31 = 0x39u;
            }
            r3 = r31;
        }
    } else {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x801cae9cu, &a);
    }
    return r3;
}
