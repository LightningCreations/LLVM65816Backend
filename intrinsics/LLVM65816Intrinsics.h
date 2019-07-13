/*
 * LLVM65816Intrinsics.h
 *
 *  Created on: Jul. 12, 2019
 *      Author: chorm
 */

#ifndef INTRINSICS_LLVM65816INTRINSICS_H_
#define INTRINSICS_LLVM65816INTRINSICS_H_

#ifdef __cplusplus
extern"C"{
#endif


void __builtin_hint_native();
void __builtin_hint_acc8();
void __builtin_hint_acc16();
void __builtin_hint_idx8();
void __builtin_hint_idx16();


void __builtin_native();

void __builtin_acc8();

void __builtin_acc16();

void __builtin_idx8();

void __builtin_idx16();



#ifdef __cplusplus
}
#endif



#endif /* INTRINSICS_LLVM65816INTRINSICS_H_ */
