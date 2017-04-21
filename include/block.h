#pragma once
//=============Includes==================================
#include <cstdint>
#include <array>


//=======CLASS block=================================
class block {
	public:
		std::array<uint8_t, 4096>& getData();
		int writeData();//std::array<uint8_t, 4096>&);
		
	protected:
		int size;
		int number;
};
