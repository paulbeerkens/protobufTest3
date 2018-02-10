//
// Created by pbeerken on 2/10/18.
//

#ifndef PROTOBUFTEST3_MESSAGEPROCESSOR_H
#define PROTOBUFTEST3_MESSAGEPROCESSOR_H

#include <string>


class MessageProcessor
{
public:
    void sendLogon (const std::string& userName, const std::string& hostName);

};


#endif //PROTOBUFTEST3_MESSAGEPROCESSOR_H
