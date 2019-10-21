#pragma once
#ifndef HELPER_H
#define HELPER_H
#include <ctime>
#include <string>
#include <sstream>

namespace Helper
{
	template <class T> 
	std::string ToString(const T&);
	struct DateTime
	{
		DateTime()
		{
			time_t ms;
			time(&ms);
			struct tm* info = localtime(&ms);
			int D = info->tm_mday;
			int m = info->tm_mon+1;
			int y = 1900 + info->tm_year;
			int M = info->tm_min;
			int H = info->tm_hour;
			int S = info->tm_sec;
		}
	};
}

#endif // !HELPER_H
