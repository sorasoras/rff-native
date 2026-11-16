#include "tc_rt.h"

u32 fn_80225448(void)
{
    u32 c0eq = 0, c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = rd32(0x80571480u);
    if (r3 == 0u || rd32(r3 + 0x2cu) == 0u) {
        r3 = 0x10000002u;
    } else {
        r31 = rd32(0x80003138u);
        if (((u32)rd16(0x800030e6u) & 0x8000u) != 0u) {
            r0 = (u32)rd16(0x800030e6u) & 0xffff7fffu;
            c0lt = (s32)r0 < 515;
            do {
                if (r0 != 0x203u) {
                    if (!c0lt) {
                        if (r0 == 0x300u) {
                            r3 = 0x100u;
                            return r3;
                        }
                        fl_ = 1u;
                        break;
                    }
                    if ((s32)r0 >= 4) {
                        if ((s32)r0 >= 513) break;
                        fl_ = 1u;
                        break;
                    }
                    if ((s32)r0 < 2) {
                        fl_ = 1u;
                        break;
                    }
                }
                c0lt = (s32)r31 < 2;
                if (r31 == 2u) {
                    r3 = 0x12u;
                    return r3;
                }
                if (!c0lt) {
                    c0lt = (s32)r31 < 17;
                    if (r31 == 0x11u) {
                        r3 = 0x21u;
                        return r3;
                    }
                    if (c0lt && (s32)r31 >= 16) {
                        r3 = 0x20u;
                        return r3;
                    }
                } else {
                    c0lt = (s32)r31 < 0;
                    if (r31 == 0u) {
                        r3 = 0x10u;
                        return r3;
                    }
                    if (!c0lt) {
                        r3 = 0x11u;
                        return r3;
                    }
                }
                if (r31 > 0x11u) {
                    r3 = 0x21u;
                    return r3;
                }
            } while (0);
            if (fl_ != 1u) {
                c0lt = (s32)r31 < 2;
                if (r31 == 2u) {
                    r3 = 0x10000012u;
                    return r3;
                }
                if (!c0lt) {
                    c0lt = (s32)r31 < 17;
                    if (r31 == 0x11u) {
                        r3 = 0x10000021u;
                        return r3;
                    }
                    if (c0lt && (s32)r31 >= 16) {
                        r3 = 0x10000020u;
                        return r3;
                    }
                } else {
                    c0lt = (s32)r31 < 0;
                    if (r31 == 0u) {
                        r3 = 0x10000010u;
                        return r3;
                    }
                    if (!c0lt) {
                        r3 = 0x10000011u;
                        return r3;
                    }
                }
                if (r31 <= 0x11u) {
                    r3 = 0x100u;
                    return r3;
                }
                r3 = 0x10000021u;
                return r3;
            }
            fl_ = 0u;
        }
        r3 = tc_call(0x8022cd2cu, &a);
        c0lt = (s32)r31 < 2;
        if (r31 == 2u) {
            c0eq = (r3 - 0x4000000u) == 0u;
            r3 = 0x10000012u;
            if (c0eq) {
                r3 = 0x12u;
            }
        } else {
            if (!c0lt) {
                c0lt = (s32)r31 < 17;
                if (r31 == 0x11u) {
                    c0eq = (r3 - 0x4000000u) == 0u;
                    r3 = 0x10000021u;
                    if (!c0eq) {
                        return r3;
                    }
                    r3 = 0x21u;
                    return r3;
                }
                if (c0lt && (s32)r31 >= 16) {
                    c0eq = (r3 - 0x4000000u) == 0u;
                    r3 = 0x10000020u;
                    if (!c0eq) {
                        return r3;
                    }
                    r3 = 0x20u;
                    return r3;
                }
            } else {
                c0lt = (s32)r31 < 0;
                if (r31 == 0u) {
                    c0eq = (r3 - 0x4000000u) == 0u;
                    r3 = 0x10000010u;
                    if (!c0eq) {
                        return r3;
                    }
                    r3 = 0x10u;
                    return r3;
                }
                if (!c0lt) {
                    c0eq = (r3 - 0x4000000u) == 0u;
                    r3 = 0x10000011u;
                    if (!c0eq) {
                        return r3;
                    }
                    r3 = 0x11u;
                    return r3;
                }
            }
            if (r31 <= 0x11u) {
                r3 = rd32(rd32(0x80571480u) + 0x2cu);
            } else {
                c0eq = (r3 - 0x4000000u) == 0u;
                r3 = 0x10000021u;
                if (c0eq) {
                    r3 = 0x21u;
                }
            }
        }
    }
    return r3;
}
