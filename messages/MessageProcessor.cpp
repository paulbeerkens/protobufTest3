#include <iostream>

#include "MessageProcessor.h"
#include "logonMessage.pb.h"

void MessageProcessor::sendLogon(const std::string &userName, const std::string &hostName)
{
    std::cout<<"Generating logon message for "<<userName<<std::endl;

    PaulsNamespace::LogOnMessage logOnMessage;
    logOnMessage.set_username(userName);
    logOnMessage.set_hostname(hostName);
    logOnMessage.set_tag(123);


}
