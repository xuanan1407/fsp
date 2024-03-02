#include "DatabaseService.h"

const char* DatabaseService::getName() { return COMPONENT_NAME; }

void DatabaseService::start() { std::cout << "Database start" << std::endl; }

void DatabaseService::stop() { std::cout << "Database stop" << std::endl; }

void DatabaseService::DatabaseCall() {
  std::cout << "Database Operation" << std::endl;
}
