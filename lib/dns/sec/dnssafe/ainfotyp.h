/* Copyright (C) RSA Data Security, Inc. created 1993, 1996.  This is an
   unpublished work protected as such under copyright law.  This work
   contains proprietary, confidential, and trade secret information of
   RSA Data Security, Inc.  Use, disclosure or reproduction without the
   express written authorization of RSA Data Security, Inc. is
   prohibited.
 */

#ifndef DNSSAFE_AINFOTYP_H
#define DNSSAFE_AINFOTYP_H 1

/* Use the THIS_ALGORITHM_INFO_TYPE macro to define the type of object in the
     virtual function prototype.  It defaults to the most base class, but
     derived modules may define the macro to a more derived class before
     including this header file.
 */
#ifndef THIS_ALGORITHM_INFO_TYPE
#define THIS_ALGORITHM_INFO_TYPE struct B_AlgorithmInfoType
#endif

struct B_AlgorithmInfoType;

typedef struct {
  int (*AddInfo) PROTO_LIST
    ((THIS_ALGORITHM_INFO_TYPE *, B_Algorithm *, POINTER));
  struct B_TypeCheck * (*NewHandler) PROTO_LIST
    ((THIS_ALGORITHM_INFO_TYPE *, B_Algorithm *));
  int (*MakeInfo) PROTO_LIST
    ((THIS_ALGORITHM_INFO_TYPE *, POINTER *, B_Algorithm *));
} B_AlgorithmInfoTypeVTable;

typedef struct B_AlgorithmInfoType {
  B_AlgorithmInfoTypeVTable *vTable;
} B_AlgorithmInfoType;

int B_AlgorithmInfoTypeMakeError PROTO_LIST
  ((THIS_ALGORITHM_INFO_TYPE *, POINTER *, B_Algorithm *));

#endif /* DNSSAFE_AINFOTYP_H */

