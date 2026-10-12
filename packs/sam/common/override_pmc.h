/*
 * Copyright (C) 2026 Microchip Technology Inc. and its subsidiaries
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __DFP_OVERRIDE_PMC_H__
#define __DFP_OVERRIDE_PMC_H__

/*
 * In SAMA5D2 DFP, some names of PMC fields are different with the names used in the drivers.
 * Add new macros here for using the same driver code.
 *
 *       Field                  | Name in SAMA5D2 DFP | Name used in the driver
 * -----------------------------|---------------------|-------------------------
 * Generic Clock Enable         |       GCKEN         |         GCLKEN
 * Generic Clock Division Ratio |       GCKDIV        |         GCLKDIV
 */
#ifndef PMC_PCR_GCLKEN_Msk
#define PMC_PCR_GCLKEN_Msk PMC_PCR_GCKEN_Msk
#endif /* PMC_PCR_GCLKEN_Msk */
#ifndef PMC_PCR_GCLKDIV_Msk
#define PMC_PCR_GCLKDIV_Msk PMC_PCR_GCKDIV_Msk
#endif /* PMC_PCR_GCLKDIV_Msk */

#endif /* __DFP_OVERRIDE_PMC_H__ */
