/*
 * Copyright (C) 2000  Internet Software Consortium.
 * 
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" AND INTERNET SOFTWARE CONSORTIUM DISCLAIMS
 * ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL INTERNET SOFTWARE
 * CONSORTIUM BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
 * ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
 */
#ifndef SEC_RENAME_DNSSAFE_H
#define SEC_RENAME_DNSSAFE_H 1

#define T_free dst__dnssafe_T_free
#define T_malloc dst__dnssafe_T_malloc
#define T_memcmp dst__dnssafe_T_memcmp
#define T_memcpy dst__dnssafe_T_memcpy
#define T_memmove dst__dnssafe_T_memmove
#define T_memset dst__dnssafe_T_memset
#define T_realloc dst__dnssafe_T_realloc
#define AHChooseDigestConstructor2 dst__dnssafe_AHChooseDigestConstructor2
#define AHChooseDigestDestructor dst__dnssafe_AHChooseDigestDestructor
#define AHChooseDigestFinal dst__dnssafe_AHChooseDigestFinal
#define AHChooseDigestInit dst__dnssafe_AHChooseDigestInit
#define AHChooseDigestUpdate dst__dnssafe_AHChooseDigestUpdate
#define AHChooseEncryptConstructor2 dst__dnssafe_AHChooseEncryptConstructor2
#define AHChooseEncryptDecryptFinal dst__dnssafe_AHChooseEncryptDecryptFinal
#define AHChooseEncryptDecryptInit dst__dnssafe_AHChooseEncryptDecryptInit
#define AHChooseEncryptDecryptUpdate dst__dnssafe_AHChooseEncryptDecryptUpdate
#define AHChooseEncryptDestructor dst__dnssafe_AHChooseEncryptDestructor
#define AHChooseEncryptEncryptFinal dst__dnssafe_AHChooseEncryptEncryptFinal
#define AHChooseEncryptEncryptInit dst__dnssafe_AHChooseEncryptEncryptInit
#define AHChooseEncryptEncryptUpdate dst__dnssafe_AHChooseEncryptEncryptUpdate
#define AHChooseEncryptGetBlockLen dst__dnssafe_AHChooseEncryptGetBlockLen
#define AHChooseGenerateConstructor2 dst__dnssafe_AHChooseGenerateConstructor2
#define AHChooseGenerateDestructor dst__dnssafe_AHChooseGenerateDestructor
#define AHChooseGenerateInit dst__dnssafe_AHChooseGenerateInit
#define AHChooseGenerateKeypair dst__dnssafe_AHChooseGenerateKeypair
#define AHChooseGenerateParameters dst__dnssafe_AHChooseGenerateParameters
#define AHChooseRandomConstructor2 dst__dnssafe_AHChooseRandomConstructor2
#define AHChooseRandomDestructor dst__dnssafe_AHChooseRandomDestructor
#define AHChooseRandomGenerateBytes dst__dnssafe_AHChooseRandomGenerateBytes
#define AHChooseRandomInit dst__dnssafe_AHChooseRandomInit
#define AHChooseRandomUpdate dst__dnssafe_AHChooseRandomUpdate
#define AHDigestConstructor dst__dnssafe_AHDigestConstructor
#define B_AlgorithmDigestFinal dst__dnssafe_B_AlgorithmDigestFinal
#define B_AlgorithmDigestInit dst__dnssafe_B_AlgorithmDigestInit
#define B_AlgorithmDigestUpdate dst__dnssafe_B_AlgorithmDigestUpdate
#define AHEncryptDecryptConstructor dst__dnssafe_AHEncryptDecryptConstructor
#define B_AlgorithmDecryptFinal dst__dnssafe_B_AlgorithmDecryptFinal
#define B_AlgorithmDecryptInit dst__dnssafe_B_AlgorithmDecryptInit
#define B_AlgorithmDecryptUpdate dst__dnssafe_B_AlgorithmDecryptUpdate
#define B_AlgorithmEncryptFinal dst__dnssafe_B_AlgorithmEncryptFinal
#define B_AlgorithmEncryptInit dst__dnssafe_B_AlgorithmEncryptInit
#define B_AlgorithmEncryptUpdate dst__dnssafe_B_AlgorithmEncryptUpdate
#define AHGenerateConstructor dst__dnssafe_AHGenerateConstructor
#define B_AlgorithmGenerateInit dst__dnssafe_B_AlgorithmGenerateInit
#define B_AlgorithmGenerateKeypair dst__dnssafe_B_AlgorithmGenerateKeypair
#define B_AlgorithmGenerateParameters dst__dnssafe_B_AlgorithmGenerateParameters
#define AHRandomConstructor dst__dnssafe_AHRandomConstructor
#define B_AlgorithmGenerateRandomBytes dst__dnssafe_B_AlgorithmGenerateRandomBytes
#define B_AlgorithmRandomInit dst__dnssafe_B_AlgorithmRandomInit
#define B_AlgorithmRandomUpdate dst__dnssafe_B_AlgorithmRandomUpdate
#define AH_RSAEncryptionConstructor1 dst__dnssafe_AH_RSAEncryptionConstructor1
#define AH_RSAEncryptionDecryptFinal dst__dnssafe_AH_RSAEncryptionDecryptFinal
#define AH_RSAEncryptionDecryptInit dst__dnssafe_AH_RSAEncryptionDecryptInit
#define AH_RSAEncryptionDestructor dst__dnssafe_AH_RSAEncryptionDestructor
#define AH_RSAEncryptionEncryptFinal dst__dnssafe_AH_RSAEncryptionEncryptFinal
#define AH_RSAEncryptionEncryptInit dst__dnssafe_AH_RSAEncryptionEncryptInit
#define AH_RSAEncryptionGetBlockLen dst__dnssafe_AH_RSAEncryptionGetBlockLen
#define AH_RSAEncryptionUpdate dst__dnssafe_AH_RSAEncryptionUpdate
#define AH_RSAEncrypPrivateConstructor dst__dnssafe_AH_RSAEncrypPrivateConstructor
#define AH_RSAEncrypPublicConstructor dst__dnssafe_AH_RSAEncrypPublicConstructor
#define AITChooseDigestNullNewHandler dst__dnssafe_AITChooseDigestNullNewHandler
#define AIT_8AddInfo dst__dnssafe_AIT_8AddInfo
#define AITChooseEncryptNewHandler dst__dnssafe_AITChooseEncryptNewHandler
#define AITChooseGenerateNewHandler dst__dnssafe_AITChooseGenerateNewHandler
#define AITChooseRandomNullNewHandler dst__dnssafe_AITChooseRandomNullNewHandler
#define AI_MD5 dst__dnssafe_AI_MD5
#define AI_MD5Random dst__dnssafe_AI_MD5Random
#define B_AlgorithmInfoTypeMakeError dst__dnssafe_B_AlgorithmInfoTypeMakeError
#define AITNullAddInfo dst__dnssafe_AITNullAddInfo
#define AIT_PKCS_RSAPrivateNewHandler dst__dnssafe_AIT_PKCS_RSAPrivateNewHandler
#define AI_PKCS_RSAPrivate dst__dnssafe_AI_PKCS_RSAPrivate
#define AIT_PKCS_RSAPublicNewHandler dst__dnssafe_AIT_PKCS_RSAPublicNewHandler
#define AI_PKCS_RSAPublic dst__dnssafe_AI_PKCS_RSAPublic
#define AIT_RSAKeyGenAddInfo dst__dnssafe_AIT_RSAKeyGenAddInfo
#define AI_RSAKeyGen dst__dnssafe_AI_RSAKeyGen
#define AI_RSAPrivate dst__dnssafe_AI_RSAPrivate
#define AI_RSAPublic dst__dnssafe_AI_RSAPublic
#define AlgaChoiceChoose dst__dnssafe_AlgaChoiceChoose
#define ConvertAlgaeError dst__dnssafe_ConvertAlgaeError
#define ResizeContextConstructor dst__dnssafe_ResizeContextConstructor
#define ResizeContextDestructor dst__dnssafe_ResizeContextDestructor
#define ResizeContextMakeNewContext dst__dnssafe_ResizeContextMakeNewContext
#define AlgorithmWrapCheck dst__dnssafe_AlgorithmWrapCheck
#define B_CreateAlgorithmObject dst__dnssafe_B_CreateAlgorithmObject
#define B_DestroyAlgorithmObject dst__dnssafe_B_DestroyAlgorithmObject
#define B_GetAlgorithmInfo dst__dnssafe_B_GetAlgorithmInfo
#define B_SetAlgorithmInfo dst__dnssafe_B_SetAlgorithmInfo
#define RandomAlgorithmCheck dst__dnssafe_RandomAlgorithmCheck
#define B_AlgorithmCheckType dst__dnssafe_B_AlgorithmCheckType
#define B_AlgorithmCheckTypeAndInitFlag dst__dnssafe_B_AlgorithmCheckTypeAndInitFlag
#define B_AlgorithmConstructor dst__dnssafe_B_AlgorithmConstructor
#define B_AlgorithmDestructor dst__dnssafe_B_AlgorithmDestructor
#define B_AlgorithmGetInfo dst__dnssafe_B_AlgorithmGetInfo
#define B_AlgorithmSetInfo dst__dnssafe_B_AlgorithmSetInfo
#define BigClrbit dst__dnssafe_BigClrbit
#define BigSetbit dst__dnssafe_BigSetbit
#define BigModMpyx dst__dnssafe_BigModMpyx
#define BigModSqx dst__dnssafe_BigModSqx
#define BigModExp dst__dnssafe_BigModExp
#define BigPegcd dst__dnssafe_BigPegcd
#define Big2Exp dst__dnssafe_Big2Exp
#define BigAbs dst__dnssafe_BigAbs
#define BigAcc dst__dnssafe_BigAcc
#define BigAdd dst__dnssafe_BigAdd
#define BigCopy dst__dnssafe_BigCopy
#define BigDec dst__dnssafe_BigDec
#define BigInc dst__dnssafe_BigInc
#define BigLenw dst__dnssafe_BigLenw
#define BigNeg dst__dnssafe_BigNeg
#define BigSign dst__dnssafe_BigSign
#define BigSub dst__dnssafe_BigSub
#define BigZero dst__dnssafe_BigZero
#define BigCmp dst__dnssafe_BigCmp
#define BigConst dst__dnssafe_BigConst
#define BigInv dst__dnssafe_BigInv
#define BigLen dst__dnssafe_BigLen
#define BigModx dst__dnssafe_BigModx
#define BigMpy dst__dnssafe_BigMpy
#define BigPdiv dst__dnssafe_BigPdiv
#define BigPmpy dst__dnssafe_BigPmpy
#define BigPmpyh dst__dnssafe_BigPmpyh
#define BigPmpyl dst__dnssafe_BigPmpyl
#define BigPsq dst__dnssafe_BigPsq
#define BigQrx dst__dnssafe_BigQrx
#define BigSmod dst__dnssafe_BigSmod
#define BigToCanonical dst__dnssafe_BigToCanonical
#define BigU dst__dnssafe_BigU
#define BigUnexp dst__dnssafe_BigUnexp
#define B_InfoCacheAddInfo dst__dnssafe_B_InfoCacheAddInfo
#define B_InfoCacheConstructor dst__dnssafe_B_InfoCacheConstructor
#define B_InfoCacheFindInfo dst__dnssafe_B_InfoCacheFindInfo
#define B_IntegerBits dst__dnssafe_B_IntegerBits
#define B_KeyAddItemInfo dst__dnssafe_B_KeyAddItemInfo
#define B_KeyGetInfo dst__dnssafe_B_KeyGetInfo
#define B_KeySetInfo dst__dnssafe_B_KeySetInfo
#define B_MemoryPoolAdoptData dst__dnssafe_B_MemoryPoolAdoptData
#define B_MemoryPoolAdoptHelper dst__dnssafe_B_MemoryPoolAdoptHelper
#define B_MemoryPoolAlloc dst__dnssafe_B_MemoryPoolAlloc
#define B_MemoryPoolAllocAndCopy dst__dnssafe_B_MemoryPoolAllocAndCopy
#define B_MemoryPoolConstructor dst__dnssafe_B_MemoryPoolConstructor
#define B_MemoryPoolDestructor dst__dnssafe_B_MemoryPoolDestructor
#define B_MemoryPoolFindAllocedObject dst__dnssafe_B_MemoryPoolFindAllocedObject
#define B_MemoryPoolFree dst__dnssafe_B_MemoryPoolFree
#define B_MemoryPoolRealloc dst__dnssafe_B_MemoryPoolRealloc
#define B_MemoryPoolReset dst__dnssafe_B_MemoryPoolReset
#define CanonicalToBig dst__dnssafe_CanonicalToBig
#define A_RSA_CRT2Final dst__dnssafe_A_RSA_CRT2Final
#define A_RSA_CRT2Init dst__dnssafe_A_RSA_CRT2Init
#define A_RSA_CRT2Update dst__dnssafe_A_RSA_CRT2Update
#define B_DigestFinal dst__dnssafe_B_DigestFinal
#define B_DigestInit dst__dnssafe_B_DigestInit
#define B_DigestUpdate dst__dnssafe_B_DigestUpdate
#define A_DigestRandomGenerateBytes dst__dnssafe_A_DigestRandomGenerateBytes
#define A_DigestRandomInit dst__dnssafe_A_DigestRandomInit
#define A_DigestRandomUpdate dst__dnssafe_A_DigestRandomUpdate
#define B_DecryptFinal dst__dnssafe_B_DecryptFinal
#define B_DecryptInit dst__dnssafe_B_DecryptInit
#define B_DecryptUpdate dst__dnssafe_B_DecryptUpdate
#define B_EncryptFinal dst__dnssafe_B_EncryptFinal
#define B_EncryptInit dst__dnssafe_B_EncryptInit
#define B_EncryptUpdate dst__dnssafe_B_EncryptUpdate
#define B_GenerateInit dst__dnssafe_B_GenerateInit
#define B_GenerateKeypair dst__dnssafe_B_GenerateKeypair
#define B_GenerateParameters dst__dnssafe_B_GenerateParameters
#define A_IntegerBits dst__dnssafe_A_IntegerBits
#define AllocAndCopyIntegerItems dst__dnssafe_AllocAndCopyIntegerItems
#define B_CreateKeyObject dst__dnssafe_B_CreateKeyObject
#define B_DestroyKeyObject dst__dnssafe_B_DestroyKeyObject
#define B_GetKeyInfo dst__dnssafe_B_GetKeyInfo
#define B_SetKeyInfo dst__dnssafe_B_SetKeyInfo
#define KeyWrapCheck dst__dnssafe_KeyWrapCheck
#define KIT_8ByteAddInfo dst__dnssafe_KIT_8ByteAddInfo
#define KIT_8ByteMakeInfo dst__dnssafe_KIT_8ByteMakeInfo
#define KI_8Byte dst__dnssafe_KI_8Byte
#define KITItemAddInfo dst__dnssafe_KITItemAddInfo
#define KI_Item dst__dnssafe_KI_Item
#define B_KeyInfoTypeMakeError dst__dnssafe_B_KeyInfoTypeMakeError
#define CacheFullPrivateKey dst__dnssafe_CacheFullPrivateKey
#define GetFullPrivateKeyInfo dst__dnssafe_GetFullPrivateKeyInfo
#define KIT_PKCS_RSAPrivateAddInfo dst__dnssafe_KIT_PKCS_RSAPrivateAddInfo
#define KIT_PKCS_RSAPrivateMakeInfo dst__dnssafe_KIT_PKCS_RSAPrivateMakeInfo
#define KI_PKCS_RSAPrivate dst__dnssafe_KI_PKCS_RSAPrivate
#define KIT_RSA_CRTAddInfo dst__dnssafe_KIT_RSA_CRTAddInfo
#define KIT_RSA_CRTMakeInfo dst__dnssafe_KIT_RSA_CRTMakeInfo
#define KI_RSA_CRT dst__dnssafe_KI_RSA_CRT
#define KIT_RSAPublicAddInfo dst__dnssafe_KIT_RSAPublicAddInfo
#define KIT_RSAPublicMakeInfo dst__dnssafe_KIT_RSAPublicMakeInfo
#define KI_RSAPublic dst__dnssafe_KI_RSAPublic
#define A_MD5Final dst__dnssafe_A_MD5Final
#define A_MD5Init dst__dnssafe_A_MD5Init
#define A_MD5Update dst__dnssafe_A_MD5Update
#define A_MD5RandomGenerateBytes dst__dnssafe_A_MD5RandomGenerateBytes
#define A_MD5RandomInit dst__dnssafe_A_MD5RandomInit
#define A_MD5RandomUpdate dst__dnssafe_A_MD5RandomUpdate
#define PrimeFind dst__dnssafe_PrimeFind
#define PseudoPrime dst__dnssafe_PseudoPrime
#define B_GenerateRandomBytes dst__dnssafe_B_GenerateRandomBytes
#define B_RandomInit dst__dnssafe_B_RandomInit
#define B_RandomUpdate dst__dnssafe_B_RandomUpdate
#define A_RSAFinal dst__dnssafe_A_RSAFinal
#define A_RSAInit dst__dnssafe_A_RSAInit
#define A_RSAUpdate dst__dnssafe_A_RSAUpdate
#define A_RSAKeyGen dst__dnssafe_A_RSAKeyGen
#define A_RSAKeyGenInit dst__dnssafe_A_RSAKeyGenInit
#define SecretCBCDecryptFinal dst__dnssafe_SecretCBCDecryptFinal
#define SecretCBCDecryptUpdate dst__dnssafe_SecretCBCDecryptUpdate
#define SecretCBCEncryptFinal dst__dnssafe_SecretCBCEncryptFinal
#define SecretCBCEncryptUpdate dst__dnssafe_SecretCBCEncryptUpdate
#define CheckSurrender dst__dnssafe_CheckSurrender
#define AITChooseDigestNull_V_TABLE dst__dnssafe_AITChooseDigestNull_V_TABLE
#define AITChooseEncrypt8_V_TABLE dst__dnssafe_AITChooseEncrypt8_V_TABLE
#define AITChooseEncryptNull_V_TABLE dst__dnssafe_AITChooseEncryptNull_V_TABLE
#define AITChooseRandomNull_V_TABLE dst__dnssafe_AITChooseRandomNull_V_TABLE
#define AIT_MD5 dst__dnssafe_AIT_MD5
#define AIT_MD5Random dst__dnssafe_AIT_MD5Random
#define AIT_PKCS_RSAPrivate dst__dnssafe_AIT_PKCS_RSAPrivate
#define AIT_PKCS_RSAPublic dst__dnssafe_AIT_PKCS_RSAPublic
#define AIT_RSAKeyGen dst__dnssafe_AIT_RSAKeyGen
#define AIT_RSAPrivate dst__dnssafe_AIT_RSAPrivate
#define AIT_RSAPublic dst__dnssafe_AIT_RSAPublic
#define AM_RSA_CRT_DECRYPT dst__dnssafe_AM_RSA_CRT_DECRYPT
#define AM_RSA_CRT_ENCRYPT dst__dnssafe_AM_RSA_CRT_ENCRYPT
#define AM_MD5 dst__dnssafe_AM_MD5
#define AM_MD5_RANDOM dst__dnssafe_AM_MD5_RANDOM
#define AM_RSA_KEY_GEN dst__dnssafe_AM_RSA_KEY_GEN
#define AM_RSA_DECRYPT dst__dnssafe_AM_RSA_DECRYPT
#define AM_RSA_ENCRYPT dst__dnssafe_AM_RSA_ENCRYPT
#define KIT_8Byte dst__dnssafe_KIT_8Byte
#define KITItem dst__dnssafe_KITItem
#define KIT_PKCS_RSAPrivate dst__dnssafe_KIT_PKCS_RSAPrivate
#define KIT_RSA_CRT dst__dnssafe_KIT_RSA_CRT
#define KIT_RSAPublic dst__dnssafe_KIT_RSAPublic

#endif /* SEC_RENAME_DNSSAFE_H */
