#include "tc_rt.h"

void fn_802af0d4(u32 param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = param_1;
    a.r[1] = (u32)rd8(param_4);
    r3 = tc_call(0x802acd40u, &a);
    if (r3 != 0u) {
        if ((u32)param_2 == 0u || (u32)param_3 == 0u) {
            r0 = (u32)rd8(r3 + 0x52u);
            wr8(0x817fdfd8u, rd8(r3 + 0x51u));
            wr8(0x817fdfd9u, (u8)r0);
            r0 = (u32)rd8(r3 + 0x54u);
            wr8(0x817fdfdau, rd8(r3 + 0x53u));
            wr8(0x817fdfdbu, (u8)r0);
            r0 = (u32)rd8(r3 + 0x56u);
            wr8(0x817fdfdcu, rd8(r3 + 0x55u));
            wr8(0x817fdfddu, (u8)r0);
            r0 = (u32)rd8(r3 + 0x58u);
            wr8(0x817fdfdeu, rd8(r3 + 0x57u));
            wr8(0x817fdfdfu, (u8)r0);
            wr8(0x817fdfe0u, rd8(r3 + 0x59u));
            a.r[0] = 0x817fdfd8u;
            a.r[1] = param_4;
            (void)tc_call(0x802af734u, &a);
            if ((u32)param_2 == 0u) {
                a.r[0] = param_1;
                a.r[1] = (u32)rd8(param_4);
                r3 = tc_call(0x802acd40u, &a);
                f1 = tc_lastf();
                r31 = r3;
                if (r3 != 0u && ((u32)rd8(r3 + 0x69u) & 6u) != 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r3;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802b16fcu, &a);
                    r3 = (u32)rd8(r31 + 0x69u);
                    if ((r3 & 2u) == 0u) {
                        wr8(r31 + 0x69u, (u8)(r3 & 0xfffffffbu));
                    } else {
                        wr8(r31 + 0x69u, (u8)(r3 & 0xfffffffdu));
                        r0 = (u32)rd8(0x817fdfd9u);
                        wr8(r31 + 0x51u, rd8(0x817fdfd8u));
                        wr8(r31 + 0x52u, (u8)r0);
                        r0 = (u32)rd8(0x817fdfdbu);
                        wr8(r31 + 0x53u, rd8(0x817fdfdau));
                        wr8(r31 + 0x54u, (u8)r0);
                        r0 = (u32)rd8(0x817fdfddu);
                        wr8(r31 + 0x55u, rd8(0x817fdfdcu));
                        wr8(r31 + 0x56u, (u8)r0);
                        r0 = (u32)rd8(0x817fdfdfu);
                        wr8(r31 + 0x57u, rd8(0x817fdfdeu));
                        wr8(r31 + 0x58u, (u8)r0);
                        wr8(r31 + 0x59u, rd8(0x817fdfe0u));
                        r0 = (u32)rd8(0x817fdfddu);
                        if (r0 != 0xcu && r0 != 0x30u) {
                            wr8(r31 + 0x56u, 0xcu);
                            wr8(r31 + 0x69u, (u8)((u32)rd8(r31 + 0x69u) | 4u));
                            a.r[0] = param_1;
                            a.r[1] = (u32)rd8(param_4);
                            a.r[2] = 1u;
                            a.r[3] = r31 + 0x51u;
                            a.r[4] = 0xc00u;
                            f1 = tc_callf(0x802b0530u, &a);
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = r31;
                            a.r[1] = 0x3cu;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x802b167cu, &a);
                            return;
                        }
                        wr16(param_4 + 0x12u, 0x3f7fu);
                    }
                    r3 = (u32)rd16(param_4 + 0x12u);
                    if ((r3 & 0xc00u) == 0xc00u || (r3 & 0x3000u) == 0x3000u) {
                        a.r[0] = param_1;
                        a.r[1] = (u32)rd8(r31 + 0xdu);
                        a.r[2] = 0x817fdfd8u;
                        a.r[3] = 0u;
                        (void)tc_call(0x802abf70u, &a);
                    } else {
                        r0 = (u32)rd8(r31 + 0x56u);
                        if (r0 != 0xcu) {
                            if (r0 == 0x30u) {
                                wr8(r31 + 0x56u, 0u);
                                a.r[0] = param_1;
                                a.r[1] = (u32)rd8(r31 + 0xdu);
                                a.r[2] = 0x817fdfd8u;
                                a.r[3] = 0u;
                                (void)tc_call(0x802abf70u, &a);
                            }
                        } else {
                            wr8(r31 + 0x56u, 0x30u);
                            wr8(r31 + 0x69u, (u8)((u32)rd8(r31 + 0x69u) | 4u));
                            a.r[0] = param_1;
                            a.r[1] = (u32)rd8(param_4);
                            a.r[2] = 1u;
                            a.r[3] = r31 + 0x51u;
                            a.r[4] = 0x3000u;
                            f1 = tc_callf(0x802b0530u, &a);
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = r31;
                            a.r[1] = 0x3cu;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x802b167cu, &a);
                        }
                    }
                }
            } else {
                a.r[0] = param_1;
                a.r[1] = (u32)rd8(param_4);
                a.r[2] = 0x817fdfd8u;
                a.r[3] = (u32)rd16(param_4 + 0x12u);
                (void)tc_call(0x802abe20u, &a);
            }
        } else {
            r0 = (u32)rd8(r3 + 0x52u);
            wr8(0x817fdfd8u, rd8(r3 + 0x51u));
            wr8(0x817fdfd9u, (u8)r0);
            r0 = (u32)rd8(r3 + 0x54u);
            wr8(0x817fdfdau, rd8(r3 + 0x53u));
            wr8(0x817fdfdbu, (u8)r0);
            r0 = (u32)rd8(r3 + 0x56u);
            wr8(0x817fdfdcu, rd8(r3 + 0x55u));
            wr8(0x817fdfddu, (u8)r0);
            r0 = (u32)rd8(r3 + 0x58u);
            wr8(0x817fdfdeu, rd8(r3 + 0x57u));
            wr8(0x817fdfdfu, (u8)r0);
            wr8(0x817fdfe0u, rd8(r3 + 0x59u));
            a.r[0] = param_1;
            a.r[1] = (u32)rd8(param_4);
            a.r[2] = 0u;
            a.r[3] = r3 + 0x51u;
            a.r[4] = 0u;
            (void)tc_call(0x802b0530u, &a);
        }
    } else if ((u32)param_2 != 0u) {
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0u;
        a.r[2] = 9u;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = param_4;
        (void)tc_call(0x802af734u, &a);
        a.r[0] = param_1;
        a.r[1] = (u32)rd8(param_4);
        a.r[2] = 0x817fdfd8u;
        a.r[3] = (u32)rd16(param_4 + 0x12u);
        (void)tc_call(0x802abe20u, &a);
    }
    return;
}
