/*
 * 65816Instructions.hpp
 *
 *  Created on: Jul. 11, 2019
 *      Author: chorm
 */

#ifndef CODEGEN_65816INSTRUCTIONS_HPP_
#define CODEGEN_65816INSTRUCTIONS_HPP_

#include <llvm/Target/TargetMachine.h>

extern"C" void LLVMInitialize65816();

namespace codegen65816{

	enum CodeGenMode:unsigned char{
		NATIVE = 0,
		EMULATION = 1,
		Acc8 = 2,
		Acc16 = 0,
		Idx8 = 4,
		Idx16 = 0,
		DEBUG_ENABLED = 0x10,
		UNKNOWN = 0xFF
	};

	enum Opcode:unsigned char{
		BRK, ORA_idx, COP, ORA_sr, TSB_dp, ORA_dp, ASL_dp, ORA_idl, ASL, PHP, ORA_imm, PHD, TSB_abs, ORA_abs, ASL_abs, ORA_abl,
		BPL_rel, ORA_idy, ORA_idp, ORA_isy, TDB_dp, ORA_dpx, ASL_dpx, ORA_idly, CLC, ORA_aby, INC, TAS, TRB_abs, ORA_abx, ASL_abx, ORA_alx

	};

	class CodeGenerator{
	private:
		CodeGenMode mode;
	public:

	};

	class TargetMachine65816 : public llvm::TargetMachine{

	};
}

#endif /* CODEGEN_65816INSTRUCTIONS_HPP_ */
