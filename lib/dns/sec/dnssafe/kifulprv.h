/* Copyright (C) RSA Data Security, Inc. created 1990, 1996.  This is an
   unpublished work protected as such under copyright law.  This work
   contains proprietary, confidential, and trade secret information of
   RSA Data Security, Inc.  Use, disclosure or reproduction without the
   express written authorization of RSA Data Security, Inc. is
   prohibited.
 */

#ifndef DNSSAFE_KIFULPRV_H
#define DNSSAFE_KIFULPRV_H 1

int CacheFullPrivateKey PROTO_LIST
  ((B_Key *, ITEM *, ITEM *, ITEM *, ITEM *, ITEM *, ITEM *));
int GetFullPrivateKeyInfo PROTO_LIST
  ((ITEM *, ITEM *, ITEM *, ITEM *, ITEM *, ITEM *, B_Key *));

#endif /* DNSSAFE_KIFULPRV_H */
