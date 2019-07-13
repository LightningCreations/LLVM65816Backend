/*
 * 65816Intrinsics.hpp
 *
 *  Created on: Jul. 11, 2019
 *      Author: chorm
 */

#ifndef CODEGEN_65816INTRINSICS_HPP_
#define CODEGEN_65816INTRINSICS_HPP_

#include <llvm/Target/TargetIntrinsicInfo.h>
#include <llvm/IR/Function.h>
#include "65816Instructions.hpp"

namespace codegen65816{
	extern llvm::Function hintNativeFunc;
	extern llvm::Function hintEmulationFunc;
	extern llvm::Function hintAcc8Func;
	extern llvm::Function hintIdx8Func;
	extern llvm::Function hintAcc16Func;
	extern llvm::Function hintIdx16Func;
	extern llvm::Function nativeFunc;
	extern llvm::Function emulationFunc;
	extern llvm::Function acc8Func;
	extern llvm::Function idx8Func;
	extern llvm::Function acc16Func;
	extern llvm::Function idx16Func;
	extern llvm::Function disableInterruptsFunc;
	extern llvm::Function enableInterruptsFunc;
	extern llvm::Function toShortPtrFunc;
	extern llvm::Function memcpyFunc;
	extern llvm::Function memmovFunc;

	enum IntrinsicIds:unsigned{
		HINT_NATIVE = 0,
		HINT_EMULATION = 1,
		HINT_ACC8 = 2,
		HINT_IDX8 = 3,
		HINT_ACC16 = 4,
		HINT_IDX16 = 5,
		DISABLE_INTERRUPTS = 6,
		ENABLE_INTERRUPTS = 7,
		TO_NATIVE = 8,
		TO_EMULATION = 9,
		ACC8 = 10,
		IDX8 = 11,
		ACC16 = 12,
		IDX16 = 13,

		TOSHORTPTR = 64,


		MEMCPY = 200,
		MEMMOV = 201,

	};

	namespace helpers{

	}

}


#endif /* CODEGEN_65816INTRINSICS_HPP_ */
