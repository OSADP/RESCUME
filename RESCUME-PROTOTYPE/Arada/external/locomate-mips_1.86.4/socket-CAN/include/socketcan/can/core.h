/*
 * socketcan/can/core.h
 *
 * Protoypes and definitions for CAN protocol modules using the PF_CAN core
 *
 * $Id: core.h 1221 2010-11-30 19:27:36Z hartkopp $
 *
 * Authors: Oliver Hartkopp <oliver.hartkopp@volkswagen.de>
 *          Urs Thuermann   <urs.thuermann@volkswagen.de>
 * Copyright (c) 2002-2007 Volkswagen Group Electronic Research
 * All rights reserved.
 *
 * Send feedback to <socketcan-users@lists.berlios.de>
 *
 */

#ifndef CAN_CORE_H
#define CAN_CORE_H

#include <socketcan/can.h>
#include <linux/skbuff.h>
#include <linux/netdevice.h>

#define CAN_VERSION "20090105"

/* increment this number each time you change some user-space interface */
#define CAN_ABI_VERSION "8"

#define CAN_VERSION_STRING "rev " CAN_VERSION " abi " CAN_ABI_VERSION

#define DNAME(dev) ((dev) ? (dev)->name : "any")

/**
 * struct can_proto - CAN protocol structure
 * @type:       type argument in socket() syscall, e.g. SOCK_DGRAM.
 * @protocol:   protocol number in socket() syscall.
 * @capability: capability needed to open the socket, or -1 for no restriction.
 * @ops:        pointer to struct proto_ops for sock->ops.
 * @prot:       pointer to struct proto structure.
 */
struct can_proto {
	int              type;
	int              protocol;
#if LINUX_VERSION_CODE < KERNEL_VERSION(2,6,33)
	int              capability;
#endif
	struct proto_ops *ops;
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,12)
	struct proto     *prot;
#else
	struct module    *owner;
	int              (*init)(struct sock *sk);
	size_t           obj_size;
#endif
};

/* function prototypes for the CAN networklayer core (af_can.c) */

extern int  can_proto_register(struct can_proto *cp);
extern void can_proto_unregister(struct can_proto *cp);

extern int  can_rx_register(struct net_device *dev, canid_t can_id,
			    canid_t mask,
			    void (*func)(struct sk_buff *, void *),
			    void *data, char *ident);

extern void can_rx_unregister(struct net_device *dev, canid_t can_id,
			      canid_t mask,
			      void (*func)(struct sk_buff *, void *),
			      void *data);

extern int can_send(struct sk_buff *skb, int loop);

#endif /* CAN_CORE_H */
