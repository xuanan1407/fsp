#include "Certificate.h"

const char* CertificateService::getName() { return COMPONENT_NAME; }

void CertificateService::start() {
  std::cout << "Certificate start" << std::endl;
}

void CertificateService::stop() {
  std::cout << "Certificate stop" << std::endl;
}

void CertificateService::certificateCall() {
  std::cout << "Certificate Operation" << std::endl;
}
