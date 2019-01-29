#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace gameEngine {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		// [Timestamp] Name_of_Logger: message
		spdlog::set_pattern("%^[%T] %n: %v%$");

		// configure engine logger
		s_CoreLogger = spdlog::stdout_color_mt("ENGINE");
		s_CoreLogger->set_level(spdlog::level::trace);

		// configure client logger
		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}
