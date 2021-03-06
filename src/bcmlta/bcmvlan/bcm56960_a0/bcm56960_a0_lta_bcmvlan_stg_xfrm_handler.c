/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 * Edits to this file will be lost when it is regenerated.
 *
 * Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
 * Broadcom Limited and/or its subsidiaries.
 * 
 * Broadcom Switch Software License
 * 
 * This license governs the use of the accompanying Broadcom software. Your 
 * use of the software indicates your acceptance of the terms and conditions 
 * of this license. If you do not agree to the terms and conditions of this 
 * license, do not use the software.
 * 1. Definitions
 *    "Licensor" means any person or entity that distributes its Work.
 *    "Software" means the original work of authorship made available under 
 *    this license.
 *    "Work" means the Software and any additions to or derivative works of 
 *    the Software that are made available under this license.
 *    The terms "reproduce," "reproduction," "derivative works," and 
 *    "distribution" have the meaning as provided under U.S. copyright law.
 *    Works, including the Software, are "made available" under this license 
 *    by including in or with the Work either (a) a copyright notice 
 *    referencing the applicability of this license to the Work, or (b) a copy 
 *    of this license.
 * 2. Grant of Copyright License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    copyright license to reproduce, prepare derivative works of, publicly 
 *    display, publicly perform, sublicense and distribute its Work and any 
 *    resulting derivative works in any form.
 * 3. Grant of Patent License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    patent license to make, have made, use, offer to sell, sell, import, and 
 *    otherwise transfer its Work, in whole or in part. This patent license 
 *    applies only to the patent claims licensable by Licensor that would be 
 *    infringed by Licensor's Work (or portion thereof) individually and 
 *    excluding any combinations with any other materials or technology.
 *    If you institute patent litigation against any Licensor (including a 
 *    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
 *    you allege are infringed by any Work, then your patent license from such 
 *    Licensor to the Work shall terminate as of the date such litigation is 
 *    filed.
 * 4. Redistribution
 *    You may reproduce or distribute the Work only if (a) you do so under 
 *    this License, (b) you include a complete copy of this License with your 
 *    distribution, and (c) you retain without modification any copyright, 
 *    patent, trademark, or attribution notices that are present in the Work.
 * 5. Derivative Works
 *    You may specify that additional or different terms apply to the use, 
 *    reproduction, and distribution of your derivative works of the Work 
 *    ("Your Terms") only if (a) Your Terms provide that the limitations of 
 *    Section 7 apply to your derivative works, and (b) you identify the 
 *    specific derivative works that are subject to Your Terms. 
 *    Notwithstanding Your Terms, this license (including the redistribution 
 *    requirements in Section 4) will continue to apply to the Work itself.
 * 6. Trademarks
 *    This license does not grant any rights to use any Licensor's or its 
 *    affiliates' names, logos, or trademarks, except as necessary to 
 *    reproduce the notices described in this license.
 * 7. Limitations
 *    Platform. The Work and any derivative works thereof may only be used, or 
 *    intended for use, with a Broadcom switch integrated circuit.
 *    No Reverse Engineering. You will not use the Work to disassemble, 
 *    reverse engineer, decompile, or attempt to ascertain the underlying 
 *    technology of a Broadcom switch integrated circuit.
 * 8. Termination
 *    If you violate any term of this license, then your rights under this 
 *    license (including the license grants of Sections 2 and 3) will 
 *    terminate immediately.
 * 9. Disclaimer of Warranty
 *    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
 *    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
 *    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
 *    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
 *    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
 *    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
 * 10. Limitation of Liability
 *    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
 *    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
 *    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
 *    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
 *    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
 *    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
 *    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
 *    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
 *    THE POSSIBILITY OF SUCH DAMAGES.
 */
/* Logical Table Adaptor for component bcmvlan */
/* Handler: bcm56960_a0_lta_bcmvlan_stg_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmvlan/bcmvlan_stg.h>
#include <bcmdrd/chip/bcm56960_a0_enum.h>

static const bcmltd_field_desc_t
bcm56960_a0_lta_bcmvlan_stg_src_field_desc_s0[1] = {
    {
        .field_id  = VLAN_STGt_STATEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56960_a0_lta_bcmvlan_stg_dst_field_desc_d0[136] = {
    {
        .field_id  = SP_TREE_PORT0f,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT1f,
        .field_idx = 0,
        .minbit    = 2,
        .maxbit    = 3,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT2f,
        .field_idx = 0,
        .minbit    = 4,
        .maxbit    = 5,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT3f,
        .field_idx = 0,
        .minbit    = 6,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT4f,
        .field_idx = 0,
        .minbit    = 8,
        .maxbit    = 9,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT5f,
        .field_idx = 0,
        .minbit    = 10,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT6f,
        .field_idx = 0,
        .minbit    = 12,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT7f,
        .field_idx = 0,
        .minbit    = 14,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT8f,
        .field_idx = 0,
        .minbit    = 16,
        .maxbit    = 17,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT9f,
        .field_idx = 0,
        .minbit    = 18,
        .maxbit    = 19,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT10f,
        .field_idx = 0,
        .minbit    = 20,
        .maxbit    = 21,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT11f,
        .field_idx = 0,
        .minbit    = 22,
        .maxbit    = 23,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT12f,
        .field_idx = 0,
        .minbit    = 24,
        .maxbit    = 25,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT13f,
        .field_idx = 0,
        .minbit    = 26,
        .maxbit    = 27,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT14f,
        .field_idx = 0,
        .minbit    = 28,
        .maxbit    = 29,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT15f,
        .field_idx = 0,
        .minbit    = 30,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT16f,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 33,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT17f,
        .field_idx = 0,
        .minbit    = 34,
        .maxbit    = 35,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT18f,
        .field_idx = 0,
        .minbit    = 36,
        .maxbit    = 37,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT19f,
        .field_idx = 0,
        .minbit    = 38,
        .maxbit    = 39,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT20f,
        .field_idx = 0,
        .minbit    = 40,
        .maxbit    = 41,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT21f,
        .field_idx = 0,
        .minbit    = 42,
        .maxbit    = 43,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT22f,
        .field_idx = 0,
        .minbit    = 44,
        .maxbit    = 45,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT23f,
        .field_idx = 0,
        .minbit    = 46,
        .maxbit    = 47,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT24f,
        .field_idx = 0,
        .minbit    = 48,
        .maxbit    = 49,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT25f,
        .field_idx = 0,
        .minbit    = 50,
        .maxbit    = 51,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT26f,
        .field_idx = 0,
        .minbit    = 52,
        .maxbit    = 53,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT27f,
        .field_idx = 0,
        .minbit    = 54,
        .maxbit    = 55,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT28f,
        .field_idx = 0,
        .minbit    = 56,
        .maxbit    = 57,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT29f,
        .field_idx = 0,
        .minbit    = 58,
        .maxbit    = 59,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT30f,
        .field_idx = 0,
        .minbit    = 60,
        .maxbit    = 61,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT31f,
        .field_idx = 0,
        .minbit    = 62,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT32f,
        .field_idx = 0,
        .minbit    = 64,
        .maxbit    = 65,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT33f,
        .field_idx = 0,
        .minbit    = 66,
        .maxbit    = 67,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT34f,
        .field_idx = 0,
        .minbit    = 68,
        .maxbit    = 69,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT35f,
        .field_idx = 0,
        .minbit    = 70,
        .maxbit    = 71,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT36f,
        .field_idx = 0,
        .minbit    = 72,
        .maxbit    = 73,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT37f,
        .field_idx = 0,
        .minbit    = 74,
        .maxbit    = 75,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT38f,
        .field_idx = 0,
        .minbit    = 76,
        .maxbit    = 77,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT39f,
        .field_idx = 0,
        .minbit    = 78,
        .maxbit    = 79,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT40f,
        .field_idx = 0,
        .minbit    = 80,
        .maxbit    = 81,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT41f,
        .field_idx = 0,
        .minbit    = 82,
        .maxbit    = 83,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT42f,
        .field_idx = 0,
        .minbit    = 84,
        .maxbit    = 85,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT43f,
        .field_idx = 0,
        .minbit    = 86,
        .maxbit    = 87,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT44f,
        .field_idx = 0,
        .minbit    = 88,
        .maxbit    = 89,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT45f,
        .field_idx = 0,
        .minbit    = 90,
        .maxbit    = 91,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT46f,
        .field_idx = 0,
        .minbit    = 92,
        .maxbit    = 93,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT47f,
        .field_idx = 0,
        .minbit    = 94,
        .maxbit    = 95,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT48f,
        .field_idx = 0,
        .minbit    = 96,
        .maxbit    = 97,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT49f,
        .field_idx = 0,
        .minbit    = 98,
        .maxbit    = 99,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT50f,
        .field_idx = 0,
        .minbit    = 100,
        .maxbit    = 101,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT51f,
        .field_idx = 0,
        .minbit    = 102,
        .maxbit    = 103,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT52f,
        .field_idx = 0,
        .minbit    = 104,
        .maxbit    = 105,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT53f,
        .field_idx = 0,
        .minbit    = 106,
        .maxbit    = 107,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT54f,
        .field_idx = 0,
        .minbit    = 108,
        .maxbit    = 109,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT55f,
        .field_idx = 0,
        .minbit    = 110,
        .maxbit    = 111,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT56f,
        .field_idx = 0,
        .minbit    = 112,
        .maxbit    = 113,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT57f,
        .field_idx = 0,
        .minbit    = 114,
        .maxbit    = 115,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT58f,
        .field_idx = 0,
        .minbit    = 116,
        .maxbit    = 117,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT59f,
        .field_idx = 0,
        .minbit    = 118,
        .maxbit    = 119,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT60f,
        .field_idx = 0,
        .minbit    = 120,
        .maxbit    = 121,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT61f,
        .field_idx = 0,
        .minbit    = 122,
        .maxbit    = 123,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT62f,
        .field_idx = 0,
        .minbit    = 124,
        .maxbit    = 125,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT63f,
        .field_idx = 0,
        .minbit    = 126,
        .maxbit    = 127,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT64f,
        .field_idx = 0,
        .minbit    = 128,
        .maxbit    = 129,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT65f,
        .field_idx = 0,
        .minbit    = 130,
        .maxbit    = 131,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT66f,
        .field_idx = 0,
        .minbit    = 132,
        .maxbit    = 133,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT67f,
        .field_idx = 0,
        .minbit    = 134,
        .maxbit    = 135,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT68f,
        .field_idx = 0,
        .minbit    = 136,
        .maxbit    = 137,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT69f,
        .field_idx = 0,
        .minbit    = 138,
        .maxbit    = 139,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT70f,
        .field_idx = 0,
        .minbit    = 140,
        .maxbit    = 141,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT71f,
        .field_idx = 0,
        .minbit    = 142,
        .maxbit    = 143,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT72f,
        .field_idx = 0,
        .minbit    = 144,
        .maxbit    = 145,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT73f,
        .field_idx = 0,
        .minbit    = 146,
        .maxbit    = 147,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT74f,
        .field_idx = 0,
        .minbit    = 148,
        .maxbit    = 149,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT75f,
        .field_idx = 0,
        .minbit    = 150,
        .maxbit    = 151,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT76f,
        .field_idx = 0,
        .minbit    = 152,
        .maxbit    = 153,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT77f,
        .field_idx = 0,
        .minbit    = 154,
        .maxbit    = 155,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT78f,
        .field_idx = 0,
        .minbit    = 156,
        .maxbit    = 157,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT79f,
        .field_idx = 0,
        .minbit    = 158,
        .maxbit    = 159,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT80f,
        .field_idx = 0,
        .minbit    = 160,
        .maxbit    = 161,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT81f,
        .field_idx = 0,
        .minbit    = 162,
        .maxbit    = 163,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT82f,
        .field_idx = 0,
        .minbit    = 164,
        .maxbit    = 165,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT83f,
        .field_idx = 0,
        .minbit    = 166,
        .maxbit    = 167,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT84f,
        .field_idx = 0,
        .minbit    = 168,
        .maxbit    = 169,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT85f,
        .field_idx = 0,
        .minbit    = 170,
        .maxbit    = 171,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT86f,
        .field_idx = 0,
        .minbit    = 172,
        .maxbit    = 173,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT87f,
        .field_idx = 0,
        .minbit    = 174,
        .maxbit    = 175,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT88f,
        .field_idx = 0,
        .minbit    = 176,
        .maxbit    = 177,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT89f,
        .field_idx = 0,
        .minbit    = 178,
        .maxbit    = 179,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT90f,
        .field_idx = 0,
        .minbit    = 180,
        .maxbit    = 181,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT91f,
        .field_idx = 0,
        .minbit    = 182,
        .maxbit    = 183,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT92f,
        .field_idx = 0,
        .minbit    = 184,
        .maxbit    = 185,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT93f,
        .field_idx = 0,
        .minbit    = 186,
        .maxbit    = 187,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT94f,
        .field_idx = 0,
        .minbit    = 188,
        .maxbit    = 189,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT95f,
        .field_idx = 0,
        .minbit    = 190,
        .maxbit    = 191,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT96f,
        .field_idx = 0,
        .minbit    = 192,
        .maxbit    = 193,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT97f,
        .field_idx = 0,
        .minbit    = 194,
        .maxbit    = 195,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT98f,
        .field_idx = 0,
        .minbit    = 196,
        .maxbit    = 197,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT99f,
        .field_idx = 0,
        .minbit    = 198,
        .maxbit    = 199,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT100f,
        .field_idx = 0,
        .minbit    = 200,
        .maxbit    = 201,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT101f,
        .field_idx = 0,
        .minbit    = 202,
        .maxbit    = 203,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT102f,
        .field_idx = 0,
        .minbit    = 204,
        .maxbit    = 205,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT103f,
        .field_idx = 0,
        .minbit    = 206,
        .maxbit    = 207,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT104f,
        .field_idx = 0,
        .minbit    = 208,
        .maxbit    = 209,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT105f,
        .field_idx = 0,
        .minbit    = 210,
        .maxbit    = 211,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT106f,
        .field_idx = 0,
        .minbit    = 212,
        .maxbit    = 213,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT107f,
        .field_idx = 0,
        .minbit    = 214,
        .maxbit    = 215,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT108f,
        .field_idx = 0,
        .minbit    = 216,
        .maxbit    = 217,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT109f,
        .field_idx = 0,
        .minbit    = 218,
        .maxbit    = 219,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT110f,
        .field_idx = 0,
        .minbit    = 220,
        .maxbit    = 221,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT111f,
        .field_idx = 0,
        .minbit    = 222,
        .maxbit    = 223,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT112f,
        .field_idx = 0,
        .minbit    = 224,
        .maxbit    = 225,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT113f,
        .field_idx = 0,
        .minbit    = 226,
        .maxbit    = 227,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT114f,
        .field_idx = 0,
        .minbit    = 228,
        .maxbit    = 229,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT115f,
        .field_idx = 0,
        .minbit    = 230,
        .maxbit    = 231,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT116f,
        .field_idx = 0,
        .minbit    = 232,
        .maxbit    = 233,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT117f,
        .field_idx = 0,
        .minbit    = 234,
        .maxbit    = 235,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT118f,
        .field_idx = 0,
        .minbit    = 236,
        .maxbit    = 237,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT119f,
        .field_idx = 0,
        .minbit    = 238,
        .maxbit    = 239,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT120f,
        .field_idx = 0,
        .minbit    = 240,
        .maxbit    = 241,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT121f,
        .field_idx = 0,
        .minbit    = 242,
        .maxbit    = 243,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT122f,
        .field_idx = 0,
        .minbit    = 244,
        .maxbit    = 245,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT123f,
        .field_idx = 0,
        .minbit    = 246,
        .maxbit    = 247,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT124f,
        .field_idx = 0,
        .minbit    = 248,
        .maxbit    = 249,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT125f,
        .field_idx = 0,
        .minbit    = 250,
        .maxbit    = 251,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT126f,
        .field_idx = 0,
        .minbit    = 252,
        .maxbit    = 253,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT127f,
        .field_idx = 0,
        .minbit    = 254,
        .maxbit    = 255,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT128f,
        .field_idx = 0,
        .minbit    = 256,
        .maxbit    = 257,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT129f,
        .field_idx = 0,
        .minbit    = 258,
        .maxbit    = 259,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT130f,
        .field_idx = 0,
        .minbit    = 260,
        .maxbit    = 261,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT131f,
        .field_idx = 0,
        .minbit    = 262,
        .maxbit    = 263,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT132f,
        .field_idx = 0,
        .minbit    = 264,
        .maxbit    = 265,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT133f,
        .field_idx = 0,
        .minbit    = 266,
        .maxbit    = 267,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT134f,
        .field_idx = 0,
        .minbit    = 268,
        .maxbit    = 269,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = SP_TREE_PORT135f,
        .field_idx = 0,
        .minbit    = 270,
        .maxbit    = 271,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const
bcmltd_field_list_t
bcm56960_a0_lta_bcmvlan_stg_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56960_a0_lta_bcmvlan_stg_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56960_a0_lta_bcmvlan_stg_dst_list_d0 = {
    .field_num = 136,
    .field_array = bcm56960_a0_lta_bcmvlan_stg_dst_field_desc_d0
};

static const uint32_t
bcm56960_a0_lta_bcmvlan_stg_transform_src_s0[1] = {
    VLAN_STGt_STATEf,
};

static const uint32_t
bcm56960_a0_lta_bcmvlan_stg_transform_dst_d0[136] = {
    SP_TREE_PORT0f,
    SP_TREE_PORT1f,
    SP_TREE_PORT2f,
    SP_TREE_PORT3f,
    SP_TREE_PORT4f,
    SP_TREE_PORT5f,
    SP_TREE_PORT6f,
    SP_TREE_PORT7f,
    SP_TREE_PORT8f,
    SP_TREE_PORT9f,
    SP_TREE_PORT10f,
    SP_TREE_PORT11f,
    SP_TREE_PORT12f,
    SP_TREE_PORT13f,
    SP_TREE_PORT14f,
    SP_TREE_PORT15f,
    SP_TREE_PORT16f,
    SP_TREE_PORT17f,
    SP_TREE_PORT18f,
    SP_TREE_PORT19f,
    SP_TREE_PORT20f,
    SP_TREE_PORT21f,
    SP_TREE_PORT22f,
    SP_TREE_PORT23f,
    SP_TREE_PORT24f,
    SP_TREE_PORT25f,
    SP_TREE_PORT26f,
    SP_TREE_PORT27f,
    SP_TREE_PORT28f,
    SP_TREE_PORT29f,
    SP_TREE_PORT30f,
    SP_TREE_PORT31f,
    SP_TREE_PORT32f,
    SP_TREE_PORT33f,
    SP_TREE_PORT34f,
    SP_TREE_PORT35f,
    SP_TREE_PORT36f,
    SP_TREE_PORT37f,
    SP_TREE_PORT38f,
    SP_TREE_PORT39f,
    SP_TREE_PORT40f,
    SP_TREE_PORT41f,
    SP_TREE_PORT42f,
    SP_TREE_PORT43f,
    SP_TREE_PORT44f,
    SP_TREE_PORT45f,
    SP_TREE_PORT46f,
    SP_TREE_PORT47f,
    SP_TREE_PORT48f,
    SP_TREE_PORT49f,
    SP_TREE_PORT50f,
    SP_TREE_PORT51f,
    SP_TREE_PORT52f,
    SP_TREE_PORT53f,
    SP_TREE_PORT54f,
    SP_TREE_PORT55f,
    SP_TREE_PORT56f,
    SP_TREE_PORT57f,
    SP_TREE_PORT58f,
    SP_TREE_PORT59f,
    SP_TREE_PORT60f,
    SP_TREE_PORT61f,
    SP_TREE_PORT62f,
    SP_TREE_PORT63f,
    SP_TREE_PORT64f,
    SP_TREE_PORT65f,
    SP_TREE_PORT66f,
    SP_TREE_PORT67f,
    SP_TREE_PORT68f,
    SP_TREE_PORT69f,
    SP_TREE_PORT70f,
    SP_TREE_PORT71f,
    SP_TREE_PORT72f,
    SP_TREE_PORT73f,
    SP_TREE_PORT74f,
    SP_TREE_PORT75f,
    SP_TREE_PORT76f,
    SP_TREE_PORT77f,
    SP_TREE_PORT78f,
    SP_TREE_PORT79f,
    SP_TREE_PORT80f,
    SP_TREE_PORT81f,
    SP_TREE_PORT82f,
    SP_TREE_PORT83f,
    SP_TREE_PORT84f,
    SP_TREE_PORT85f,
    SP_TREE_PORT86f,
    SP_TREE_PORT87f,
    SP_TREE_PORT88f,
    SP_TREE_PORT89f,
    SP_TREE_PORT90f,
    SP_TREE_PORT91f,
    SP_TREE_PORT92f,
    SP_TREE_PORT93f,
    SP_TREE_PORT94f,
    SP_TREE_PORT95f,
    SP_TREE_PORT96f,
    SP_TREE_PORT97f,
    SP_TREE_PORT98f,
    SP_TREE_PORT99f,
    SP_TREE_PORT100f,
    SP_TREE_PORT101f,
    SP_TREE_PORT102f,
    SP_TREE_PORT103f,
    SP_TREE_PORT104f,
    SP_TREE_PORT105f,
    SP_TREE_PORT106f,
    SP_TREE_PORT107f,
    SP_TREE_PORT108f,
    SP_TREE_PORT109f,
    SP_TREE_PORT110f,
    SP_TREE_PORT111f,
    SP_TREE_PORT112f,
    SP_TREE_PORT113f,
    SP_TREE_PORT114f,
    SP_TREE_PORT115f,
    SP_TREE_PORT116f,
    SP_TREE_PORT117f,
    SP_TREE_PORT118f,
    SP_TREE_PORT119f,
    SP_TREE_PORT120f,
    SP_TREE_PORT121f,
    SP_TREE_PORT122f,
    SP_TREE_PORT123f,
    SP_TREE_PORT124f,
    SP_TREE_PORT125f,
    SP_TREE_PORT126f,
    SP_TREE_PORT127f,
    SP_TREE_PORT128f,
    SP_TREE_PORT129f,
    SP_TREE_PORT130f,
    SP_TREE_PORT131f,
    SP_TREE_PORT132f,
    SP_TREE_PORT133f,
    SP_TREE_PORT134f,
    SP_TREE_PORT135f,
};

static const bcmltd_generic_arg_t
bcm56960_a0_lta_bcmvlan_stg_comp_data = {
    .sid       = VLAN_STGt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56960_a0_lta_bcmvlan_stg_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56960_a0_lta_bcmvlan_stg_transform_src_s0,
    .field_list  = &bcm56960_a0_lta_bcmvlan_stg_src_list_s0,
    .rfields     = 136,
    .rfield      = bcm56960_a0_lta_bcmvlan_stg_transform_dst_d0,
    .rfield_list = &bcm56960_a0_lta_bcmvlan_stg_dst_list_d0,
    .comp_data   = &bcm56960_a0_lta_bcmvlan_stg_comp_data
};

static const bcmltd_transform_arg_t
bcm56960_a0_lta_bcmvlan_stg_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 136,
    .field       = bcm56960_a0_lta_bcmvlan_stg_transform_dst_d0,
    .field_list  = &bcm56960_a0_lta_bcmvlan_stg_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56960_a0_lta_bcmvlan_stg_transform_src_s0,
    .rfield_list = &bcm56960_a0_lta_bcmvlan_stg_src_list_s0,
    .comp_data   = &bcm56960_a0_lta_bcmvlan_stg_comp_data
};

const bcmltd_xfrm_handler_t
bcm56960_a0_lta_bcmvlan_stg_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmvlan_stg_transform,
    .arg           = &bcm56960_a0_lta_bcmvlan_stg_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56960_a0_lta_bcmvlan_stg_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmvlan_stg_rev_transform,
    .arg           = &bcm56960_a0_lta_bcmvlan_stg_xfrm_handler_rev_arg_s0_d0
};


