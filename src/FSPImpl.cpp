#include "FSPImpl.h"

FrameWorkService::FrameWorkService() {
  gFspCertificateService = std::make_shared<CertificateService>();
  gFspDatabaseService = std::make_shared<DatabaseService>();
  addComponent(gFspCertificateService);
  addComponent(gFspDatabaseService);
}

FrameWorkService::~FrameWorkService() {}

void FrameWorkService::run() {}

void FrameWorkService::interrupt() {}

void FrameWorkService::addComponent(std::shared_ptr<Component> component) {
  mComponent.push_back(component);
}

void FrameWorkService::start() {}

void FrameWorkService::stop() {}