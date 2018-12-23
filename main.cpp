#include "lib.h"

#include <iostream>

#include <spdlog/spdlog.h>

int main (int argc, char *argv[])
{
    auto logger = spdlog::stdout_logger_mt("console");
    std::cout << "Hello world!";
    logger->info("version {} was started", version());

    return 0;
}
