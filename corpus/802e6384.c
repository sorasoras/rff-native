#include "tc_rt.h"

u32 fn_802e6384(s32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    c0lt = param_1 < 1885954865;
    wr32(0x817fdffcu, 0u);
    if ((u32)param_1 == 0x70696331u) {
        r7 = rd32(param_3 + 4u);
        r6 = rd32(param_3 + 8u);
        r0 = rd32(param_3 + 0xcu);
        wr32(0x817fdfe8u, rd32(param_3));
        r3 = rd32(0x80571d40u);
        wr32(0x817fdfecu, r7);
        wr32(0x817fdff0u, r6);
        wr32(0x817fdff4u, r0);
        a.r[0] = r3;
        r3 = tc_call(0x8026d490u, &a);
        c0eq = r3 == 0u;
        if (c0eq) {
            r3 = 0u;
        } else if (!c0eq) {
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x802e659cu, &a);
        }
    } else {
        if (!c0lt) {
            c0lt = param_1 < 2003723313;
            if ((u32)param_1 == 0x776e6431u) {
                r7 = rd32(param_3 + 4u);
                r6 = rd32(param_3 + 8u);
                r0 = rd32(param_3 + 0xcu);
                wr32(0x817fdfc8u, rd32(param_3));
                r3 = rd32(0x80571d40u);
                wr32(0x817fdfccu, r7);
                wr32(0x817fdfd0u, r6);
                wr32(0x817fdfd4u, r0);
                a.r[0] = r3;
                r3 = tc_call(0x8026d490u, &a);
                c0eq = r3 == 0u;
                if (c0eq) {
                    r3 = 0u;
                    return r3;
                }
                if (c0eq) {
                    return r3;
                }
                a.r[0] = r3;
                a.r[1] = param_2;
                a.r[2] = 0x817fdfc8u;
                r3 = tc_call(0x802e83a0u, &a);
                return r3;
            }
            if (c0lt && (u32)param_1 == 0x74787431u) {
                r7 = rd32(param_3 + 4u);
                r6 = rd32(param_3 + 8u);
                r0 = rd32(param_3 + 0xcu);
                wr32(0x817fdfd8u, rd32(param_3));
                r3 = rd32(0x80571d40u);
                wr32(0x817fdfdcu, r7);
                wr32(0x817fdfe0u, r6);
                wr32(0x817fdfe4u, r0);
                a.r[0] = r3;
                r3 = tc_call(0x8026d490u, &a);
                c0eq = r3 == 0u;
                if (c0eq) {
                    r3 = 0u;
                    return r3;
                }
                if (c0eq) {
                    return r3;
                }
                a.r[0] = r3;
                a.r[1] = param_2;
                a.r[2] = 0x817fdfd8u;
                r3 = tc_call(0x802e6bb8u, &a);
                return r3;
            }
        } else {
            c0lt = param_1 < 1885433393;
            if ((u32)param_1 == 0x70616e31u) {
                a.r[0] = rd32(0x80571d40u);
                r3 = tc_call(0x8026d490u, &a);
                c0eq = r3 == 0u;
                if (c0eq) {
                    r3 = 0u;
                    return r3;
                }
                if (c0eq) {
                    return r3;
                }
                a.r[0] = r3;
                a.r[1] = param_2;
                r3 = tc_call(0x802e42a8u, &a);
                return r3;
            }
            if (c0lt && (u32)param_1 == 0x626e6431u) {
                r7 = rd32(param_3 + 4u);
                r6 = rd32(param_3 + 8u);
                r0 = rd32(param_3 + 0xcu);
                wr32(0x817fdfb8u, rd32(param_3));
                r3 = rd32(0x80571d40u);
                wr32(0x817fdfbcu, r7);
                wr32(0x817fdfc0u, r6);
                wr32(0x817fdfc4u, r0);
                a.r[0] = r3;
                r3 = tc_call(0x8026d490u, &a);
                c0eq = r3 == 0u;
                if (c0eq) {
                    r3 = 0u;
                    return r3;
                }
                if (c0eq) {
                    return r3;
                }
                a.r[0] = r3;
                a.r[1] = param_2;
                r3 = tc_call(0x802ea954u, &a);
                return r3;
            }
        }
        r3 = 0u;
    }
    return r3;
}
