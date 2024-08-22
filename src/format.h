//  功能: 格式化字符串
//  作者: mmc
//  日期: 2017/10/18

#pragma once
#include <memory>
#include <tuple>
#include <string>
#include <iostream>
#include <algorithm>

template<typename ... Args>
static std::string str_format(const std::string& format, Args ... args)
{
	auto size_buf = std::snprintf(nullptr, 0, format.c_str(), args ...) + 1;
	std::unique_ptr<char[]> buf(new(std::nothrow) char[size_buf]);

	if (!buf)
		return std::string("");

	std::snprintf(buf.get(), size_buf, format.c_str(), args ...);
	return std::string(buf.get(), buf.get() + size_buf - 1);
}
