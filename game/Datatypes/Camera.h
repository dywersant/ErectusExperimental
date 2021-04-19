#pragma once
#include <cstdint>

#include "../../utils.h"

class Camera
{
public:
	[[nodiscard]] Vector2 World2Screen(const Vector3& position) const;
	
	std::uintptr_t vtable{};//0x0
	char padding0008[0x68]{};
	Vector3 forward;//0x70
	char padding007C[0x24]{};
	Vector3 origin;//0xA0
	char padding00Ac[0x84]{};
	float viewMatrix[4][4]{};//0x130

	//char pad_0000[112]; //0x0000
	//Vector3 forward; //0x0070
	//char pad_007C[36]; //0x007C
	//Vector3 origin; //0x00A0
	//char pad_00AC[52]; //0x00AC
	//float viewMatrix[4][4]{}; //0x00E0

};

