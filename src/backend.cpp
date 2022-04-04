#include "backend.hpp"

#include <filesystem>
#include <iostream>
#include "webview.h"

namespace backend
{
	void Init()
	{
		webview::webview w(true, nullptr);
		w.set_title("Minimal example");
		w.set_size(800, 600, WEBVIEW_HINT_NONE);
		w.bind("Add", Add);
		w.bind("SetTableData", SetTableData);
		w.bind("GetJSON", GetJSON);
		w.navigate(R"(file://)" + std::filesystem::current_path().string() + "/gui/index.html");
		w.run();
	}

	std::string Add(std::string arguments)
	{
		try
		{
			auto a = std::stoi(webview::json_parse(arguments, "", 0));
			auto b = std::stoi(webview::json_parse(arguments, "", 1));
			return std::to_string(a + b);
		}
		catch (std::exception& e)
		{
			return { "null" };
		}
	}

	std::string SetTableData(std::string arguments)
	{
		return R"('{"command": "Alt+F4", "description": "close window"}')";
	}

	std::string GetJSON(std::string arguments)
	{
		auto json = webview::json_parse(arguments, "", 0);
		std::cout << webview::json_parse(json, "header", 0) << '\n';
		std::cout << webview::json_parse(json, "body", 0) << '\n';
		return {};
	}
} // namespace backend
