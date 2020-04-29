#include "../pwrcal-rae.h"
#include "S5E8890-sfrbase.h"

#ifdef PWRCAL_TARGET_LINUX

struct v2p_sfr v2psfrmap[] = {
	DEFINE_V2P(CMU_PERIS_BASE,	0x10040000),
	DEFINE_V2P(CMU_TOP_BASE,	0x10570000),
	DEFINE_V2P(CMU_CCORE_BASE,	0x105B0000),
	DEFINE_V2P(CMU_MIF0_BASE,	0x10850000),
	DEFINE_V2P(CMU_MIF1_BASE,	0x10950000),
	DEFINE_V2P(CMU_MIF2_BASE,	0x10A50000),
	DEFINE_V2P(CMU_MIF3_BASE,	0x10B50000),
	DEFINE_V2P(CMU_FSYS0_BASE,	0x10E90000),
	DEFINE_V2P(CMU_IMEM_BASE,	0x11060000),
	DEFINE_V2P(CMU_AUD_BASE,	0x114C0000),
	DEFINE_V2P(CMU_MNGS_BASE,	0x11800000),
	DEFINE_V2P(CMU_APOLLO_BASE,	0x11900000),
	DEFINE_V2P(CMU_BUS0_BASE,	0x13400000),
	DEFINE_V2P(CMU_BUS1_BASE,	0x14800000),
	DEFINE_V2P(CMU_PERIC0_BASE,	0x13610000),
	DEFINE_V2P(CMU_DISP0_BASE,	0x13AD0000),
	DEFINE_V2P(CMU_DISP1_BASE,	0x13F00000),
	DEFINE_V2P(CMU_CAM0_LOCAL_BASE,	0x140F0000),
	DEFINE_V2P(CMU_CAM0_BASE,	0x144D0000),
	DEFINE_V2P(CMU_CAM1_LOCAL_BASE,	0x141F0000),
	DEFINE_V2P(CMU_CAM1_BASE,	0x145D0000),
	DEFINE_V2P(CMU_ISP0_LOCAL_BASE,	0x14290000),
	DEFINE_V2P(CMU_ISP0_BASE,	0x146D0000),
	DEFINE_V2P(CMU_ISP1_LOCAL_BASE,	0x142F0000),
	DEFINE_V2P(CMU_ISP1_BASE,	0x147D0000),
	DEFINE_V2P(CMU_G3D_BASE,	0x14AA0000),
	DEFINE_V2P(CMU_PERIC1_BASE,	0x14C80000),
	DEFINE_V2P(CMU_MSCL_BASE,	0x150D0000),
	DEFINE_V2P(CMU_MFC_BASE,	0x15280000),
	DEFINE_V2P(CMU_FSYS1_BASE,	0x156E0000),


	DEFINE_V2P(PMU_PERIS_BASE,	0x10010000),
	DEFINE_V2P(PMU_ALIVE_BASE,	0x105C0000),
	DEFINE_V2P(PMU_CCORE_BASE,	0x105F0000),
	DEFINE_V2P(PMU_MIF0_BASE,	0x10840000),
	DEFINE_V2P(PMU_MIF1_BASE,	0x10940000),
	DEFINE_V2P(PMU_MIF2_BASE,	0x10A40000),
	DEFINE_V2P(PMU_MIF3_BASE,	0x10B40000),
	DEFINE_V2P(PMU_FSYS0_BASE,	0x10E70000),
	DEFINE_V2P(PMU_IMEM_BASE,	0x11070000),
	DEFINE_V2P(PMU_AUD_BASE,	0x114D0000),
	DEFINE_V2P(PMU_MNGS_BASE,	0x11820000),
	DEFINE_V2P(PMU_APOLLO_BASE,	0x11920000),
	DEFINE_V2P(PMU_BUS0_BASE,	0x13420000),
	DEFINE_V2P(PMU_BUS1_BASE,	0x14820000),
	DEFINE_V2P(PMU_PERIC0_BASE,	0x13600000),
	DEFINE_V2P(PMU_DISP0_BASE,	0x13AE0000),
	DEFINE_V2P(PMU_DISP1_BASE,	0x13F10000),
	DEFINE_V2P(PMU_CAM0_BASE,	0x144E0000),
	DEFINE_V2P(PMU_CAM1_BASE,	0x145E0000),
	DEFINE_V2P(PMU_ISP0_BASE,	0x146E0000),
	DEFINE_V2P(PMU_ISP1_BASE,	0x147E0000),
	DEFINE_V2P(PMU_G3D_BASE,	0x14A40000),
	DEFINE_V2P(PMU_PERIC1_BASE,	0x14C70000),
	DEFINE_V2P(PMU_MSCL_BASE,	0x150F0000),
	DEFINE_V2P(PMU_MFC_BASE,	0x15290000),
	DEFINE_V2P(PMU_FSYS1_BASE,	0x156C0000),

	DEFINE_V2P(DMC_MISC_CCORE_BASE,	0x10520000),
	DEFINE_V2P(LPDDR4_PHY0_BASE,	0x10820000),

	DEFINE_V2P(SYSREG_APOLLO_BASE,	0x11940000),
	DEFINE_V2P(SYSREG_AUD_BASE,	0x11480000),
	DEFINE_V2P(SYSREG_BUS0_BASE,	0x134C0000),
	DEFINE_V2P(SYSREG_BUS1_BASE,	0x148C0000),
	DEFINE_V2P(SYSREG_CAM0_BASE,	0x144F0000),
	DEFINE_V2P(SYSREG_CAM1_BASE,	0x145F0000),
	DEFINE_V2P(SYSREG_CCORE_BASE,	0x105D0000),
	DEFINE_V2P(SYSREG_DISP0_BASE,	0x13A60000),
	DEFINE_V2P(SYSREG_DISP1_BASE,	0x13F20000),
	DEFINE_V2P(SYSREG_FSYS0_BASE,	0x10E50000),
	DEFINE_V2P(SYSREG_FSYS1_BASE,	0x15600000),
	DEFINE_V2P(SYSREG_G3D_BASE,	0x14AE0000),
	DEFINE_V2P(SYSREG_IMEM_BASE,	0x11080000),
	DEFINE_V2P(SYSREG_ISP0_BASE,	0x146F0000),
	DEFINE_V2P(SYSREG_ISP1_BASE,	0x147F0000),
	DEFINE_V2P(SYSREG_MFC_BASE,	0x152A0000),
	DEFINE_V2P(SYSREG_MIF0_BASE,	0x10830000),
	DEFINE_V2P(SYSREG_MIF1_BASE,	0x10930000),
	DEFINE_V2P(SYSREG_MIF2_BASE,	0x10A30000),
	DEFINE_V2P(SYSREG_MIF3_BASE,	0x10B30000),
	DEFINE_V2P(SYSREG_MNGS_BASE,	0x11850000),
	DEFINE_V2P(SYSREG_MSCL_BASE,	0x151C0000),
	DEFINE_V2P(SYSREG_PERIC0_BASE,	0x136E0000),
	DEFINE_V2P(SYSREG_PERIC1_BASE,	0x14C60000),
	DEFINE_V2P(SYSREG_PERIS_BASE,	0x10050000),

	DEFINE_V2P(SMC0_BASE,	0x10800000),
	DEFINE_V2P(SMC1_BASE,	0x10900000),
	DEFINE_V2P(SMC2_BASE,	0x10A00000),
	DEFINE_V2P(SMC3_BASE,	0x10B00000),

	DEFINE_V2P(MAILBOX_BASE, 0x10540000),

	DEFINE_V2P(LPDDR4_PHY1_BASE,	0x10920000),
	DEFINE_V2P(LPDDR4_PHY2_BASE,	0x10A20000),
	DEFINE_V2P(LPDDR4_PHY3_BASE,	0x10B20000),

	DEFINE_V2P(DMC_MISC0_BASE,	0x10890000),
	DEFINE_V2P(DMC_MISC1_BASE,	0x10990000),
	DEFINE_V2P(DMC_MISC2_BASE,	0x10A90000),
	DEFINE_V2P(DMC_MISC3_BASE,	0x10B90000),
};

int num_of_v2psfrmap = sizeof(v2psfrmap) / sizeof(v2psfrmap[0]);
void *spinlock_enable_offset = (void *)PMU_PERIS_BASE;

#endif
