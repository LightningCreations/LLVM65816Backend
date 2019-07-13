/*
 * 65816Intrinsics.cpp
 *
 *  Created on: Jul. 12, 2019
 *      Author: chorm
 */

#include "65816Intrinsics.hpp"

#include <algorithm>



namespace codegen65816{
	const char hintNativeName[]{"__builtin_hint_native"};
	class Intrinsics65816 : public llvm::TargetIntrinsicInfo{
public:
	virtual unsigned int lookupName(const char *Name, unsigned int Len) const
			override{
		return -1;
	}
	virtual bool isOverloaded(unsigned int IID) const override{
		return false;
	}
	virtual llvm::Function* getDeclaration(llvm::Module *M, unsigned int ID,
			llvm::Type **Tys, unsigned int numTys) const override{
		switch(ID){
		case HINT_NATIVE:
			return &hintNativeFunc;
		case HINT_EMULATION:
			return &hintEmulationFunc;
		case HINT_ACC8:
			return &hintAcc8Func;
		case HINT_IDX8:
			return &hintIdx8Func;
		case HINT_ACC16:
			return &hintAcc16Func;
		case HINT_IDX16:
			return &hintIdx16Func;
		case DISABLE_INTERRUPTS:
			return &disableInterruptsFunc;
		case ENABLE_INTERRUPTS:
			return &enableInterruptsFunc;
		case TO_NATIVE:
			return &nativeFunc;
		case TO_EMULATION:
			return &emulationFunc;
		case IDX8:
			return &idx8Func;
		case IDX16:
			return &idx16Func;
		case ACC8:
			return &acc8Func;
		case ACC16:
			return &acc16Func;
		case TOSHORTPTR:
			return &toShortPtrFunc;
		}
		return nullptr;
	}
	virtual void getName(unsigned int IID, llvm::Type **Tys,
			unsigned int numTys) const override;
	virtual unsigned int getIntrinsicID(const llvm::Function *F) const override;
};



