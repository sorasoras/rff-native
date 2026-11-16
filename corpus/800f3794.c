#include "tc_rt.h"

s32 fn_800f3794(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r6 = 0;
    r6 = 0xffffffffu;
    r0 = (u32)(s8)rd8((u32)param_1 + 0x142u);
    if (r0 == 1u || r0 == 3u) {
        r6 = 0x400u;
    } else if (r0 != 2u) {
        if (r0 != 4u) {
            if (r0 != 0xbu) {
                if (r0 != 7u) {
                    if (r0 != 0xau) {
                        if (r0 != 6u) {
                            if (r0 != 5u) {
                                if (r0 != 0xcu) {
                                    if (r0 == 8u || r0 == 9u) {
                                        r6 = 0x3f8u;
                                    }
                                } else {
                                    r6 = 0x433u;
                                }
                            } else {
                                r6 = 0x40cu;
                            }
                        } else {
                            r6 = 0x408u;
                        }
                    } else {
                        r6 = 0x3fcu;
                    }
                } else if (((u32)rd16((u32)param_1 + 0x140u) & 1u) == 0u) {
                    r6 = 0x3f0u;
                } else {
                    r6 = 0x3f4u;
                }
            } else {
                r6 = 0x3ecu;
            }
        } else {
            r6 = 0x3e8u;
        }
    } else {
        r6 = 0x404u;
    }
    if (r6 != 0xffffffffu) {
        if ((u32)param_3 == 0u) {
            r6 = r6 + 2u;
        }
        if ((u32)param_2 == 0u) {
            r6 = r6 + 1u;
        }
    }
    return (s32)r6;
}
