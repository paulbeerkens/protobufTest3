#include <iostream>
#include <google/protobuf/stubs/common.h>
#include "messages/MessageProcessor.h"

int main()
{
    // Verify that the version of the library that we linked against is
    // compatible with the version of the headers we compiled against.
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    std::cout << "Hello, World!" << std::endl;

    MessageProcessor processor;
    processor.sendLogon("paul.beerkens","server1");

    return 0;
}