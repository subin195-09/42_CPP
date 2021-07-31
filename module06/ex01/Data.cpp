#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	uintptr_t *raw = new uintptr_t[3];

	raw[0] = reinterpret_cast<uintptr_t>(&ptr->data1);
	raw[1] = reinterpret_cast<uintptr_t>(&ptr->data2);
	raw[2] = reinterpret_cast<uintptr_t>(&ptr->data3);
	return (reinterpret_cast<uintptr_t>(&raw[0]));
}

Data		*deserialize(uintptr_t raw)
{
	uintptr_t	*reRaw = reinterpret_cast<uintptr_t *>(raw);
	Data		*data = new Data;

	// 왜 1을 더해야 하지??????????????????
	data->data1 = *reinterpret_cast<std::string*>(*reRaw);
	data->data2 = *reinterpret_cast<int *>(*(reRaw + 1));
	data->data3 = *reinterpret_cast<float *>(*(reRaw + 2));
	return (data);
}

