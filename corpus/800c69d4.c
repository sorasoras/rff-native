#include "tc_rt.h"

u32 fn_800c69d4(void)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    r0 = rd32(0x803541bcu);
    if (r0 == 0u) {
        r5 = 0u;
    } else {
        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r4 == 1u) {
            r5 = rd32(0x80354130u);
        } else {
            if (r4 == 2u) {
                r5 = rd32(0x80354164u);
            } else {
                r5 = 0u;
            }
        }
    }
    if (r0 == 0u) {
        r4 = 0u;
    } else {
        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r4 == 1u) {
            r4 = r5 & rd32(rd32(0x80354198u));
        } else {
            if (r4 == 2u) {
                r4 = r5 & rd32(rd32(0x803541a8u));
            } else {
                r4 = 0u;
            }
        }
    }
    if (r4 != 0u) {
        return 0u;
    }
    if (r0 == 0u) {
        r5 = 0u;
    } else {
        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r4 == 1u) {
            r5 = rd32(0x80354134u);
        } else {
            if (r4 == 2u) {
                r5 = rd32(0x80354168u);
            } else {
                r5 = 0u;
            }
        }
    }
    if (r0 == 0u) {
        r4 = 0u;
    } else {
        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r4 == 1u) {
            r4 = r5 & rd32(rd32(0x80354198u));
        } else {
            if (r4 == 2u) {
                r4 = r5 & rd32(rd32(0x803541a8u));
            } else {
                r4 = 0u;
            }
        }
    }
    if (r4 != 0u) {
        return 2u;
    }
    if (r0 == 0u) {
        r5 = 0u;
    } else {
        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r4 == 1u) {
            r5 = rd32(0x8035413cu);
        } else {
            if (r4 == 2u) {
                r5 = rd32(0x80354170u);
            } else {
                r5 = 0u;
            }
        }
    }
    if (r0 == 0u) {
        r4 = 0u;
    } else {
        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r4 == 1u) {
            r4 = r5 & rd32(rd32(0x80354198u));
        } else {
            if (r4 == 2u) {
                r4 = r5 & rd32(rd32(0x803541a8u));
            } else {
                r4 = 0u;
            }
        }
    }
    if (r4 != 0u) {
        return 1u;
    }
    if (r0 == 0u) {
        r5 = 0u;
    } else {
        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r4 == 1u) {
            r5 = rd32(0x80354138u);
        } else {
            if (r4 == 2u) {
                r5 = rd32(0x8035416cu);
            } else {
                r5 = 0u;
            }
        }
    }
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 == 1u) {
            r0 = r5 & rd32(rd32(0x80354198u));
        } else {
            if (r0 == 2u) {
                r0 = r5 & rd32(rd32(0x803541a8u));
            } else {
                r0 = 0u;
            }
        }
    }
    if (r0 != 0u) {
        return 3u;
    }
    return 4u;
}
