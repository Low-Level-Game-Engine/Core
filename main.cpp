#include <Logger.hpp>
#include <iostream>

#include <thread>

int main()
{
	std::cout << "Welcome to the GE Core Library!" << std::endl;

	// Example usage of the Logger
	GE::Core::Logger::getInstance().enableConsoleOutput(true);
	GE::Core::Logger::getInstance().enableFileOutput("log.txt");
	GE::Core::Logger::getInstance().info("This is an info message.");
	GE::Core::Logger::getInstance().warn("This is a warning message.");
	GE::Core::Logger::getInstance().error("This is an error message.");
	GE::Core::Logger::getInstance().fatal("This is a fatal message.");
	GE::Core::Logger::getInstance().debug("This is a debug message.");
	GE::Core::Logger::getInstance().trace("This is a trace message.");
	GE::Core::Logger::getInstance().info("GE Core Library initialized successfully.");

	// Create a new thread and log from it
	std::thread t([]() {
		auto& logger = GE::Core::Logger::getInstance();
		logger.info("Logging from a new thread.");
	});

	t.join();

	return 0;
}