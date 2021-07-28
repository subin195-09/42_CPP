#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	uintptr_t raw;

	raw = reinterpret_cast<uintptr_t>(&ptr->data1);
	raw = raw + sizeof(ptr->data1);
	raw = reinterpret_cast<uintptr_t>(&ptr->data2);
	raw = raw + sizeof(ptr->data2);
	raw = reinterpret_cast<uintptr_t>(&ptr->data3);
	raw = raw - sizeof(ptr->data2) - sizeof(ptr->data1);
	return (raw);
}

Data		*deserialize(uintptr_t raw)
{
	Data	*data = new Data;

	data->data1 = *reinterpret_cast<std::string*>(raw);
	data->data2 = *reinterpret_cast<int *>(raw + sizeof(data->data1));
	data->data3 = *reinterpret_cast<float *>(raw + sizeof(data->data1) + sizeof(data->data2));
	return (data);
}

