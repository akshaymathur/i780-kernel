/*
 * Copyright (C) 2005 - 2008 ServerEngines
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.  The full GNU General
 * Public License is included in this distribution in the file called COPYING.
 *
 * Contact Information:
 * linux-drivers@serverengines.com
 *
 * ServerEngines
 * 209 N. Fair Oaks Ave
 * Sunnyvale, CA 94085
 */
/*
 * Autogenerated by srcgen version: 0127
 */
#ifndef __fwcmd_opcodes_amap_h__
#define __fwcmd_opcodes_amap_h__

/*
 * --- FWCMD_SUBSYSTEMS ---
 * The commands are grouped into the following subsystems. The subsystem
 * code along with the opcode uniquely identify a particular fwcmd.
 */
#define FWCMD_SUBSYSTEM_RSVD  (0)	/* This subsystem is reserved. It is */
						  /* never used. */
#define FWCMD_SUBSYSTEM_COMMON (1)	/* CMDs in this group are common to
					* all subsystems. See
					* COMMON_SUBSYSTEM_OPCODES for opcodes
					* and Common Host Configuration CMDs
					* for the FWCMD descriptions.
					*/
#define FWCMD_SUBSYSTEM_COMMON_ISCSI    (2) /* CMDs in this group are */
					/*
					* common to Initiator and Target. See
					* COMMON_ISCSI_SUBSYSTEM_OPCODES and
					* Common iSCSI Initiator and Target
					* CMDs for the command descriptions.
					*/
#define FWCMD_SUBSYSTEM_ETH             (3)	/* This subsystem is used to
						execute  Ethernet commands.  */

#define FWCMD_SUBSYSTEM_TPM             (4)	/* This subsystem is used
						 to execute TPM  commands.  */
#define FWCMD_SUBSYSTEM_PXE_UNDI        (5)	/* This subsystem is used
						* to execute PXE
						* and UNDI specific commands.
						*/

#define FWCMD_SUBSYSTEM_ISCSI_INI       (6)	/* This subsystem is used to
						execute ISCSI Initiator
						specific commands.
						*/
#define FWCMD_SUBSYSTEM_ISCSI_TGT       (7)	/* This subsystem is used
						to execute iSCSI Target
						specific commands.between
						PTL and ARM firmware.
						*/
#define FWCMD_SUBSYSTEM_MILI_PTL        (8)	/* This subsystem is used to
						execute iSCSI Target specific
						commands.between MILI
						and PTL.  */
#define FWCMD_SUBSYSTEM_MILI_TMD        (9)	/* This subsystem is used to
						execute iSCSI Target specific
						commands between MILI
						and TMD.  */
#define FWCMD_SUBSYSTEM_PROXY           (11)	/* This subsystem is used
						to execute proxied commands
						within the host at the
						explicit request of a
						non priviledged domain.
						This 'subsystem' is entirely
						virtual from the controller
						and firmware perspective as
						it is implemented in host
						drivers.
						*/

/*
 * --- COMMON_SUBSYSTEM_OPCODES ---
 * These opcodes are common to both networking and storage PCI
 * functions. They are used to reserve resources and configure
 * BladeEngine. These opcodes all use the FWCMD_SUBSYSTEM_COMMON
 * subsystem code.
 */
#define OPCODE_COMMON_NTWK_MAC_QUERY    (1)
#define SUBSYSTEM_COMMON_NTWK_MAC_QUERY (1)
#define SUBSYSTEM_COMMON_NTWK_MAC_SET   (1)
#define SUBSYSTEM_COMMON_NTWK_MULTICAST_SET (1)
#define SUBSYSTEM_COMMON_NTWK_VLAN_CONFIG (1)
#define SUBSYSTEM_COMMON_NTWK_LINK_STATUS_QUERY (1)
#define SUBSYSTEM_COMMON_READ_FLASHROM  (1)
#define SUBSYSTEM_COMMON_WRITE_FLASHROM (1)
#define SUBSYSTEM_COMMON_QUERY_MAX_FWCMD_BUFFER_SIZE (1)
#define SUBSYSTEM_COMMON_ADD_PAGE_TABLES (1)
#define SUBSYSTEM_COMMON_REMOVE_PAGE_TABLES (1)
#define SUBSYSTEM_COMMON_RING_DESTROY   (1)
#define SUBSYSTEM_COMMON_CQ_CREATE      (1)
#define SUBSYSTEM_COMMON_EQ_CREATE      (1)
#define SUBSYSTEM_COMMON_ETH_RX_CREATE  (1)
#define SUBSYSTEM_COMMON_ETH_TX_CREATE  (1)
#define SUBSYSTEM_COMMON_ISCSI_DEFQ_CREATE (1)
#define SUBSYSTEM_COMMON_ISCSI_WRBQ_CREATE (1)
#define SUBSYSTEM_COMMON_MCC_CREATE     (1)
#define SUBSYSTEM_COMMON_JELL_CONFIG    (1)
#define SUBSYSTEM_COMMON_FORCE_FAILOVER (1)
#define SUBSYSTEM_COMMON_ADD_TEMPLATE_HEADER_BUFFERS (1)
#define SUBSYSTEM_COMMON_REMOVE_TEMPLATE_HEADER_BUFFERS (1)
#define SUBSYSTEM_COMMON_POST_ZERO_BUFFER (1)
#define SUBSYSTEM_COMMON_GET_QOS        (1)
#define SUBSYSTEM_COMMON_SET_QOS        (1)
#define SUBSYSTEM_COMMON_TCP_GET_STATISTICS (1)
#define SUBSYSTEM_COMMON_SEEPROM_READ   (1)
#define SUBSYSTEM_COMMON_TCP_STATE_QUERY (1)
#define SUBSYSTEM_COMMON_GET_CNTL_ATTRIBUTES (1)
#define SUBSYSTEM_COMMON_NOP            (1)
#define SUBSYSTEM_COMMON_NTWK_RX_FILTER (1)
#define SUBSYSTEM_COMMON_GET_FW_VERSION (1)
#define SUBSYSTEM_COMMON_SET_FLOW_CONTROL (1)
#define SUBSYSTEM_COMMON_GET_FLOW_CONTROL (1)
#define SUBSYSTEM_COMMON_SET_TCP_PARAMETERS (1)
#define SUBSYSTEM_COMMON_SET_FRAME_SIZE (1)
#define SUBSYSTEM_COMMON_GET_FAT        (1)
#define SUBSYSTEM_COMMON_MODIFY_EQ_DELAY (1)
#define SUBSYSTEM_COMMON_FIRMWARE_CONFIG (1)
#define SUBSYSTEM_COMMON_ENABLE_DISABLE_DOMAINS (1)
#define SUBSYSTEM_COMMON_GET_DOMAIN_CONFIG (1)
#define SUBSYSTEM_COMMON_SET_VLD_CONFIG (1)
#define SUBSYSTEM_COMMON_GET_VLD_CONFIG (1)
#define SUBSYSTEM_COMMON_GET_PORT_EQUALIZATION (1)
#define SUBSYSTEM_COMMON_SET_PORT_EQUALIZATION (1)
#define SUBSYSTEM_COMMON_RED_CONFIG     (1)
#define OPCODE_COMMON_NTWK_MAC_SET      (2)
#define OPCODE_COMMON_NTWK_MULTICAST_SET (3)
#define OPCODE_COMMON_NTWK_VLAN_CONFIG  (4)
#define OPCODE_COMMON_NTWK_LINK_STATUS_QUERY (5)
#define OPCODE_COMMON_READ_FLASHROM     (6)
#define OPCODE_COMMON_WRITE_FLASHROM    (7)
#define OPCODE_COMMON_QUERY_MAX_FWCMD_BUFFER_SIZE (8)
#define OPCODE_COMMON_ADD_PAGE_TABLES   (9)
#define OPCODE_COMMON_REMOVE_PAGE_TABLES (10)
#define OPCODE_COMMON_RING_DESTROY      (11)
#define OPCODE_COMMON_CQ_CREATE         (12)
#define OPCODE_COMMON_EQ_CREATE         (13)
#define OPCODE_COMMON_ETH_RX_CREATE     (14)
#define OPCODE_COMMON_ETH_TX_CREATE     (15)
#define OPCODE_COMMON_NET_RESERVED0     (16)	/* Reserved */
#define OPCODE_COMMON_NET_RESERVED1     (17)	/* Reserved */
#define OPCODE_COMMON_NET_RESERVED2     (18)	/* Reserved */
#define OPCODE_COMMON_ISCSI_DEFQ_CREATE (19)
#define OPCODE_COMMON_ISCSI_WRBQ_CREATE (20)
#define OPCODE_COMMON_MCC_CREATE        (21)
#define OPCODE_COMMON_JELL_CONFIG       (22)
#define OPCODE_COMMON_FORCE_FAILOVER    (23)
#define OPCODE_COMMON_ADD_TEMPLATE_HEADER_BUFFERS (24)
#define OPCODE_COMMON_REMOVE_TEMPLATE_HEADER_BUFFERS (25)
#define OPCODE_COMMON_POST_ZERO_BUFFER  (26)
#define OPCODE_COMMON_GET_QOS           (27)
#define OPCODE_COMMON_SET_QOS           (28)
#define OPCODE_COMMON_TCP_GET_STATISTICS (29)
#define OPCODE_COMMON_SEEPROM_READ      (30)
#define OPCODE_COMMON_TCP_STATE_QUERY   (31)
#define OPCODE_COMMON_GET_CNTL_ATTRIBUTES (32)
#define OPCODE_COMMON_NOP               (33)
#define OPCODE_COMMON_NTWK_RX_FILTER    (34)
#define OPCODE_COMMON_GET_FW_VERSION    (35)
#define OPCODE_COMMON_SET_FLOW_CONTROL  (36)
#define OPCODE_COMMON_GET_FLOW_CONTROL  (37)
#define OPCODE_COMMON_SET_TCP_PARAMETERS (38)
#define OPCODE_COMMON_SET_FRAME_SIZE    (39)
#define OPCODE_COMMON_GET_FAT           (40)
#define OPCODE_COMMON_MODIFY_EQ_DELAY   (41)
#define OPCODE_COMMON_FIRMWARE_CONFIG   (42)
#define OPCODE_COMMON_ENABLE_DISABLE_DOMAINS (43)
#define OPCODE_COMMON_GET_DOMAIN_CONFIG (44)
#define OPCODE_COMMON_SET_VLD_CONFIG    (45)
#define OPCODE_COMMON_GET_VLD_CONFIG    (46)
#define OPCODE_COMMON_GET_PORT_EQUALIZATION (47)
#define OPCODE_COMMON_SET_PORT_EQUALIZATION (48)
#define OPCODE_COMMON_RED_CONFIG        (49)



/*
 * --- ETH_SUBSYSTEM_OPCODES ---
 * These opcodes are used for configuring the Ethernet interfaces. These
 * opcodes all use the FWCMD_SUBSYSTEM_ETH subsystem code.
 */
#define OPCODE_ETH_RSS_CONFIG           (1)
#define OPCODE_ETH_ACPI_CONFIG          (2)
#define SUBSYSTEM_ETH_RSS_CONFIG        (3)
#define SUBSYSTEM_ETH_ACPI_CONFIG       (3)
#define OPCODE_ETH_PROMISCUOUS          (3)
#define SUBSYSTEM_ETH_PROMISCUOUS       (3)
#define SUBSYSTEM_ETH_GET_STATISTICS    (3)
#define SUBSYSTEM_ETH_GET_RX_FRAG_SIZE  (3)
#define SUBSYSTEM_ETH_SET_RX_FRAG_SIZE  (3)
#define OPCODE_ETH_GET_STATISTICS       (4)
#define OPCODE_ETH_GET_RX_FRAG_SIZE     (5)
#define OPCODE_ETH_SET_RX_FRAG_SIZE     (6)





/*
 * --- MCC_STATUS_CODE ---
 * These are the global status codes used by all subsystems
 */
#define MCC_STATUS_SUCCESS              (0)	/* Indicates a successful
						completion of  the command */
#define MCC_STATUS_INSUFFICIENT_PRIVILEGES (1)	/* The client does not have
						sufficient privileges to
						execute the command */
#define MCC_STATUS_INVALID_PARAMETER    (2)	/* A parameter in the command
						was invalid. The extended
						status contains the index
						of the parameter */
#define MCC_STATUS_INSUFFICIENT_RESOURCES (3)	/* There are insufficient
						chip resources to execute
						the command */
#define MCC_STATUS_QUEUE_FLUSHING       (4)	/* The command is completing
						because the queue was
						getting flushed */
#define MCC_STATUS_DMA_FAILED           (5)	/* The command is completing
						with a DMA error */

/*
 * --- MGMT_ERROR_CODES ---
 * Error Codes returned in the status field of the FWCMD response header
 */
#define MGMT_STATUS_SUCCESS             (0)	/* The FWCMD completed
						without errors */
#define MGMT_STATUS_FAILED              (1)	/* Error status in the Status
						field of  the
						struct FWCMD_RESPONSE_HEADER */
#define MGMT_STATUS_ILLEGAL_REQUEST     (2)	/* Invalid FWCMD opcode */
#define MGMT_STATUS_ILLEGAL_FIELD       (3)	/* Invalid parameter in
						the FWCMD  payload */

#endif /* __fwcmd_opcodes_amap_h__ */
