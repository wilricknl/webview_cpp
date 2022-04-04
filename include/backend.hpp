#ifndef BACKEND_HPP
#define BACKEND_HPP

#include <string>

namespace backend
{
	void Init();

	std::string Add(std::string arguments);

	std::string SetTableData(std::string arguments);

	std::string GetJSON(std::string arguments);
} // namespace backend

#endif // BACKEND_HPP
