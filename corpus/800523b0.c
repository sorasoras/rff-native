#include "tc_rt.h"

void fn_800523b0(f64 param_1, s32 param_2, u32 param_3)
{
    if ((u32)param_2 == 0u) {
        wr8(0x805710bau, 0u);
        wr8(0x805710b9u, 0u);
        wr8(0x805710b8u, 0u);
        wr8(0x805710bbu, 0xffu);
        wr32(0x805710c4u, 0u);
    } else {
        if ((u32)param_2 == 2u) {
            wr8(0x805710bau, 0xffu);
            wr8(0x805710b9u, 0xffu);
            wr8(0x805710b8u, 0xffu);
            wr8(0x805710bbu, 0xffu);
            wr32(0x805710c4u, 0u);
        } else {
            if ((u32)param_2 == 5u) {
                wr32(0x805710c4u, 1u);
                wr8(0x805710bfu, 0xffu);
            } else {
                if ((u32)param_2 == 1u) {
                    wr8(0x805710bau, 0u);
                    wr8(0x805710b9u, 0u);
                    wr8(0x805710b8u, 0u);
                    wr8(0x805710bbu, 0u);
                    wr32(0x805710c4u, 0u);
                } else {
                    if ((u32)param_2 == 3u) {
                        wr8(0x805710bau, 0xffu);
                        wr8(0x805710b9u, 0xffu);
                        wr8(0x805710b8u, 0xffu);
                        wr8(0x805710bbu, 0u);
                        wr32(0x805710c4u, 0u);
                    } else {
                        if ((u32)param_2 == 6u) {
                            wr32(0x805710c4u, 1u);
                            wr8(0x805710bfu, 0u);
                        } else {
                            if ((u32)param_2 == 4u) {
                                wr8(0x805710bbu, 0u);
                                wr8(0x805710bau, 0xffu);
                                wr8(0x805710b9u, 0xffu);
                                wr8(0x805710b8u, 0xffu);
                                wr8(0x805710d4u, 0u);
                                wr32(0x805710c4u, 0u);
                            } else {
                                if ((u32)param_2 == 7u) {
                                    wr32(0x805710c4u, 0u);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    wrf32d(0x805710b0u, param_1);
    wr8(0x805710b4u, (u8)param_3);
    wr32(0x805706d0u, (u32)param_2);
    wr32(0x805710c8u, 0u);
    return;
}
