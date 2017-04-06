/************************************************************************
\file ModuleInterface.h
\brief Implementation of the Class ModuleInterface
\author rueckerc, Bernecker+Rainer Industrie Elektronik Ges.m.b.H.
\date 01-May-2015 12:00:00
************************************************************************/

/*------------------------------------------------------------------------------
Copyright (c) 2015, Bernecker+Rainer Industrie-Elektronik Ges.m.b.H. (B&R)
All rights reserved.
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the copyright holders nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
------------------------------------------------------------------------------*/
#if !defined MODULE_INTERFACE_H
#define MODULE_INTERFACE_H

#include <cstdint>
#include <set>
#include <string>

#include "SortEnums.h"
#include "Range.h"
#include "ErrorCode.h"
#include "IBaseInterface.h"

namespace IndustrialNetwork
{
	namespace POWERLINK
	{
		namespace Core
		{
			namespace ModularNode
			{
				/**
				\brief Represents a module interface in the modular controlled node.
				\author rueckerc, Bernecker+Rainer Industrie Elektronik Ges.m.b.H.
				*/
				class ModuleInterface : public IBaseInterface
				{

					public:
						ModuleInterface(const std::string& childId, const std::string& type, const ModuleAddressing& moduleAddressing, std::uint16_t minPosition, std::uint16_t maxPosition, std::uint16_t minAddress, std::uint16_t maxAddress, std::uint16_t maxCount);
						virtual ~ModuleInterface();

						std::uint16_t GetMinPosition() const;
						std::uint16_t GetMaxPosition() const;
						std::uint16_t GetMinAddress() const;
						std::uint16_t GetMaxAddress() const;
						std::uint16_t GetMaxCount() const;
						bool ValidateModuleType(const std::string& _type) const;

					private:
						std::uint16_t minPosition;
						std::uint16_t maxPosition;
						std::uint16_t minAddress;
						std::uint16_t maxAddress;
						std::uint16_t maxCount;
				};
			}
		}
	}
}
#endif
