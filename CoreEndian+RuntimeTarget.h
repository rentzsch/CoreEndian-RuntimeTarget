// CoreEndian+RuntimeTarget 1.0: https://github.com/rentzsch/CoreEndian-RuntimeTarget
//   Copyright (c) 2006-2011 Jonathan 'Wolf' Rentzsch: http://rentzsch.com
//   Some rights reserved: http://opensource.org/licenses/mit-license.php

typedef enum {
	kBigEndianTarget,
	kLittleEndianTarget
}	EndianTarget;

#if TARGET_RT_BIG_ENDIAN
	#define CurrentEndian() kBigEndianTarget
#else
	#define CurrentEndian() kLittleEndianTarget
#endif
#define SwapEndian(target)	(CurrentEndian() != (target))

#define EndianS16_LtoT(value,target) (kBigEndianTarget == (target) ? EndianS16_LtoB((value)) : (value))
#define EndianU16_LtoT(value,target) (kBigEndianTarget == (target) ? EndianU16_LtoB((value)) : (value))
#define EndianS32_LtoT(value,target) (kBigEndianTarget == (target) ? EndianS32_LtoB((value)) : (value))
#define EndianU32_LtoT(value,target) (kBigEndianTarget == (target) ? EndianU32_LtoB((value)) : (value))
#define EndianS64_LtoT(value,target) (kBigEndianTarget == (target) ? EndianS64_LtoB((value)) : (value))
#define EndianU64_LtoT(value,target) (kBigEndianTarget == (target) ? EndianU64_LtoB((value)) : (value))

#define EndianS16_BtoT(value,target) (kBigEndianTarget == (target) ? (value) : EndianS16_BtoL((value)))
#define EndianU16_BtoT(value,target) (kBigEndianTarget == (target) ? (value) : EndianU16_BtoL((value)))
#define EndianS32_BtoT(value,target) (kBigEndianTarget == (target) ? (value) : EndianS32_BtoL((value)))
#define EndianU32_BtoT(value,target) (kBigEndianTarget == (target) ? (value) : EndianU32_BtoL((value)))
#define EndianS64_BtoT(value,target) (kBigEndianTarget == (target) ? (value) : EndianS64_BtoL((value)))
#define EndianU64_BtoT(value,target) (kBigEndianTarget == (target) ? (value) : EndianU64_BtoL((value)))

#define EndianS16_NtoT(value,target) (kBigEndianTarget == (target) ? EndianS16_NtoB((value)) : EndianS16_NtoL((value)))
#define EndianU16_NtoT(value,target) (kBigEndianTarget == (target) ? EndianU16_NtoB((value)) : EndianU16_NtoL((value)))
#define EndianS32_NtoT(value,target) (kBigEndianTarget == (target) ? EndianS32_NtoB((value)) : EndianS32_NtoL((value)))
#define EndianU32_NtoT(value,target) (kBigEndianTarget == (target) ? EndianU32_NtoB((value)) : EndianU32_NtoL((value)))
#define EndianS64_NtoT(value,target) (kBigEndianTarget == (target) ? EndianS64_NtoB((value)) : EndianS64_NtoL((value)))
#define EndianU64_NtoT(value,target) (kBigEndianTarget == (target) ? EndianU64_NtoB((value)) : EndianU64_NtoL((value)))
